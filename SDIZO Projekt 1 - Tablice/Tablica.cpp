#include "pch.h"
#include "Tablica.h"
#include <iostream>

using namespace std;

Tablica::Tablica()
{
	length = 0;
}

void Tablica::Push_Front(int value)
{
	length++;
	if (length > 0)
	{

	}
	else
	{

	}
}

void Tablica::Push_Back(int value)
{
	length++;
	if (length > 0)
	{
		int* tempTab = new int[length - 1];
		for (int i = 0 ; i<length-1 ; i++)
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
		delete[] tempTab;
		//cout << "Dodano - " << tab[length - 1] << endl;
	}
	else
	{
		tab = new int[1];
		tab[0] = value;
		//cout << "Dodano - " << tab[0] << endl;
	}
	
}

void Tablica::Push_Middle(int value, int index)
{

}

void Tablica::Remove_Front()
{
}

void Tablica::Remove_Back()
{
}

void Tablica::Remove_Middle(int index)
{
}

bool Tablica::Find(int value)
{
	return false;
}

void Tablica::Print_Selected(int index)
{
}

void Tablica::Print_All()
{
	cout << " = Dane z tablicy = " << endl;
	cout << " = Dlugosc: " << length << " =" << endl;
	for (int i = 0; i<length ; i++)
	{
		cout << "[" << i << "] " << tab[i] << endl;
	}
}

