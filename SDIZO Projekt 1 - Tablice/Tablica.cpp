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
	//TODO
}

void Tablica::Remove_Back()
{
	//TODO
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

void Tablica::Remove_Middle(int index)
{
	//TODO
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

void Tablica::Creata_Data(int size)
{
	//TODO
}

