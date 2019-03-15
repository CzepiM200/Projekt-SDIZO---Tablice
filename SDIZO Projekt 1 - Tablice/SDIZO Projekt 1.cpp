#include "pch.h"
#include "Tablica.h"
#include <iostream>

using namespace std;

int main()
{
	Tablica tablica;
	tablica.Creata_Data(100);
	tablica.Load_Data();
	tablica.Print_All();
}
