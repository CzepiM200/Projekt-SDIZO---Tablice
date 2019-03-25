#include "pch.h"
#include "Kopiec.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

Kopiec::Kopiec()
{
	length = 0;
}

void Kopiec::Push(int value)
{
	if (length != 0)
	{
		length++;
		int* tempTab = new int[length - 1];
		for (int i = 0; i < length - 1; i++)
		{
			tempTab[i] = tab[i];
		}
		delete[] tab;
		tab = new int[length];
		for (int i = 0; i < length - 1; i++)
		{
			tab[i] = tempTab[i];
		}
		tab[length - 1] = value;
		Repair_From_Last();
		delete[] tempTab;
	}
	else
	{
		length++;
		tab = new int[1];
		tab[0] = value;
	}
}

void Kopiec::Remove(int value)
{
}

void Kopiec::Repair_From_Last()
{
	int parent = ((length-2)/2);
	int newNode = length - 1;
	int temp;

	while (newNode != 0)
	{
		if (tab[parent] < tab[newNode])
		{
			temp = tab[parent];
			tab[parent] = tab[newNode];
			tab[newNode] = temp;
			newNode = parent;
			parent = ((newNode - 1) / 2);
		}
		else break;
	}
}

void Kopiec::Find(int value)
{

}

void Kopiec::Print_All()
{
	cout << " = Dane z kopca = " << endl;
	cout << " = Dlugosc: " << length << " =" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "[" << i << "] " << tab[i] << endl;
	}
}

void Kopiec::Load_Data()
{
	cout << "[Kopiec] Wczytywanie plikow z danymi..." << endl;
	ifstream data;
	int file_length, temp;
	data.open("data.txt", ios::out);
	if (data.is_open() == true)
	{
		data >> file_length;
		for (int i = 0; i < file_length; i++)
		{
			data >> temp;
			this->Push(temp);
		}
		cout << "[Kopiec] Wczytywanie plikow z danymi przebieglo pomyslnie" << endl;
		data.close();
	}
	else cout << "[Kopiec] Blad wczytywania pliku !\n";
}
