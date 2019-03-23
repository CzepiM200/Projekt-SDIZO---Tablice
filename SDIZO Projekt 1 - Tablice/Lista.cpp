#include "pch.h"
#include "Lista.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

Lista::Lista()
{
	this->first = nullptr;
}

Lista::~Lista()
{
}

void Lista::Push_Front(int value)
{
	Element * temp = new Element(value);
	if (first != nullptr)temp->next = first;	
	first = temp;
}

void Lista::Push_Back(int value)
{
	Element * temp = first;
	Element * temp2;
	temp2 = new Element(value);
	if (temp != nullptr)
	{
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = temp2;
	}
	else first = temp2;
}

void Lista::Push_Middle(int value, int index)
{
	if (index == 0) Push_Front(value);
	else
	{
		Element * temp = first;
		Element * temp2 = new Element(value);
		int i = 0;
		if (temp != nullptr)
		{
			while (temp->next != nullptr && i != index - 1)
			{
				i++;
				temp = temp->next;
			}
			temp2->next = temp->next;
			temp->next = temp2;
		}
		else first = temp2;
	}
}

void Lista::Remove_Front()
{
}

void Lista::Remove_Back()
{
}

void Lista::Remove_Middle(int index)
{
}

bool Lista::Find(int value)
{
	return false;
}

void Lista::Print_Selected(int index)
{
}

void Lista::Print_All()
{
	Element * temp = first;
	int i = 0;
	while (temp != nullptr)
	{
		cout << "[" << i << "] " << temp->value << endl;
		i++;
		temp = temp->next;
	}
}

void Lista::Creata_Data(int size)
{
}

void Lista::Load_Data()
{
}