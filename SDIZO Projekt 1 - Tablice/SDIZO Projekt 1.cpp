#include "pch.h"
#include "Tablica.h"
#include "Lista.h"
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

void Creata_Data(int size)
{
	srand(time(NULL));
	ofstream plik("data.txt");
	cout << "Generowanie pliku z danymi o dlugosci " << size << "..." << endl;
	fstream data;
	data.open("data.txt", ios::out | ios::trunc);
	if (data.is_open() == true)
	{
		data << size << endl;
		for (int i = 0; i < size; i++)
		{
			if (rand() % 2 == 1) data << rand() * 10000 + rand() << endl;
			else data << -1 * (rand() * 10000 + rand()) << endl;
		}
		data.close();
		cout << "Generowanie pliku zakonczone pomyslnie\n";
	}
	else cout << "Blad generowania pliku !\n";
}

int main()
{
	//Creata_Data(1000);
	Lista lista;
	Tablica tablica;
	lista.Load_Data();
	tablica.Load_Data();
	
}
