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

void Kopiec::Remove(int value)
{
}

void Kopiec::Find(int value)
{
}

void Kopiec::Print_All()
{
}

void Kopiec::Load_Data()
{
}
