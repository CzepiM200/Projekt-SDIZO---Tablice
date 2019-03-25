#include "pch.h"
#include "Tablica.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

Tablica::Tablica()
{
	length = 0;
}

Tablica::~Tablica()
{
	delete[] tab;
	length = 0;
}

void Tablica::Push_Front(int value)
{
	length++;
	if (length > 0)
	{
		int* tempTab = new int[length - 1];
		for (int i = 0; i < length - 1; i++)
		{
			tempTab[i] = tab[i];
		}
		delete[] tab;
		tab = new int[length];
		tab[0] = value;
		for (int i = 1; i < length; i++)
		{
			tab[i] = tempTab[i - 1];
		}
		delete[] tempTab;
	}
	else
	{
		tab = new int[1];
		tab[0] = value;
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
	}
	else
	{
		tab = new int[1];
		tab[0] = value;
	}
	
}

void Tablica::Push_Middle(int value, int index)
{
	if (index >= length) Push_Back(value);
	else if (index == 0) Push_Front(value);
	else
	{
		length++;
		int * tempTab = new int[length - 1];
		for (int i = 0; i < length - 1; i++)
		{
			tempTab[i] = tab[i];
		}
		delete[] tab;
		tab = new int[length];
		for (int i = 0; i != index; i++)
		{
			tab[i] = tempTab[i];
		}
		tab[index] = value;
		for (int i = index + 1; i < length; i++)
		{
			tab[i] = tempTab[i - 1];
		}
		delete[] tempTab;
	} 
}

void Tablica::Remove_Front()
{
	if (length > 0)
	{
		length--;
		int* tempTab = new int[length];
		for (int i = 0; i < length; i++)
		{
			tempTab[i] = tab[i + 1];
		}
		delete[] tab;
		tab = new int[length];
		for (int i = 0; i < length; i++)
		{
			tab[i] = tempTab[i];
		}
		delete[] tempTab;
	}
}

void Tablica::Remove_Back()
{
	if (length > 0)
	{
		length--;
		int * tempTab = new int[length];
		for (int i = 0; i < length; i++)
		{
			tempTab[i] = tab[i];
		}
		delete[] tab;
		tab = new int[length];
		for (int i = 0; i < length; i++)
		{
			tab[i] = tempTab[i];
		}
		delete[] tempTab;
	}
}

void Tablica::Remove_Middle(int index)
{
	if (length > 0)
	{
		length--;
		int * tempTab = new int[length];
		for (int i = 0; i < index; i++) 
		{
			tempTab[i] = tab[i];
		}
		for (int i = index ; i < length ; i++)
		{
			tempTab[i] = tab[i + 1];
		}
		delete[] tab;
		tab = new int[length];
		for (int i = 0; i < length; i++)
		{
			tab[i] = tempTab[i];
		}
		delete[] tempTab;
	}
}

bool Tablica::Find(int value)
{
	for (int i = 0; i < length; i++)
	{
		if (tab[i] == value) return true;
	}
	return false;
}

void Tablica::Print_Selected(int index)
{
	if (index >= 0 && index < length)
		cout << "[" << index << "] " << tab[index] << endl;
	else cout << "Indeks poza zakresem\n";
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

//void Tablica::Creata_Data(int size)
//{
//	srand(time(NULL));
//	ofstream plik("data.txt");
//	cout << "Generowanie pliku z danymi o dlugosci " << size << "..." << endl;
//	fstream data;
//	data.open("data.txt", ios::out | ios::trunc);
//	if (data.is_open() == true)
//	{
//		data << size << endl;
//		for (int i = 0; i < size; i++)
//		{
//			if(rand()%2 == 1) data << rand() * 10000 + rand() << endl;
//			else data << -1*(rand() * 10000 + rand()) << endl;
//		}
//		data.close();
//		cout << "Generowanie pliku zakonczone pomyslnie\n";
//	}
//	else cout << "Blad generowania pliku !\n";
//}

void Tablica::Load_Data()
{
	cout << "Wczytywanie plikow z danymi..." << endl;
	ifstream data;
	int file_length, temp;
	data.open("data.txt", ios::out);
	if (data.is_open() == true)
	{
		data >> file_length;
		for (int i = 0; i < file_length; i++)
		{
			data >> temp;
			this->Push_Back(temp);
		}
		cout << "Wczytywanie plikow z danymi przebieglo pomyslnie" << endl;
		data.close();
	}
	else cout << "Blad wczytywania pliku !\n";
}
