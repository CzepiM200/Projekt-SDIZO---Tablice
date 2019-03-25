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

void Main_Menu_Text()
{
	cout << "==========\n";
	cout << "== MENU ==\n";
	cout << "==========\n";
	cout << "1. Tablica\n";
	cout << "2. Lista\n";
	cout << "3. Kopiec Binarny\n";
	cout << "4. Drzewo czerwono-czarne\n";
	cout << "==========\n";
	cout << "5. Generowanie danych\n";
	cout << "==========\n";
	cout << "0. Wyjscie\n";
	cout << "==========\n";
}
//cout << "\n";
void Tablica_Menu_Text()
{
	cout << "=============\n";
	cout << "== TABLICA ==\n";
	cout << "=============\n";
	cout << "1. Dodaj na pozatek\n";
	cout << "2. Dodaj na srodek\n";
	cout << "3. Dodaj na koniec\n";
	cout << "4. Usun z poczatku\n";
	cout << "5. Usun ze srodka\n";
	cout << "6. Usun z konca\n";
	cout << "7. Znajdz w tablicy\n";
	cout << "8. Wyswietl tablice\n";
	cout << "9. Wczytaj dane do tablicy\n";
	cout << "=============\n";
}

void Lista_Menu_Text()
{
	cout << "===========\n";
	cout << "== LISTA ==\n";
	cout << "===========\n";
	cout << "1. Dodaj na pozatek\n";
	cout << "2. Dodaj na srodek\n";
	cout << "3. Dodaj na koniec\n";
	cout << "4. Usun z poczatku\n";
	cout << "5. Usun ze srodka\n";
	cout << "6. Usun z konca\n";
	cout << "7. Znajdz w liscie\n";
	cout << "8. Wyswietl liste\n";
	cout << "9. Wczytaj dane do listy\n";
	cout << "===========\n";
}

int main()
{
	//Creata_Data(1000);
	//Lista lista;
	//Tablica tablica;
	//lista.Load_Data();
	//tablica.Load_Data();
}
