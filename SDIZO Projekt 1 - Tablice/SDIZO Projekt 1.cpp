#include "pch.h"
#include "Tablica.h"
#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
	Lista lista;
	lista.Push_Back(1);
	lista.Push_Back(2);
	lista.Push_Back(3);
	lista.Push_Back(4);
	lista.Print_All();
}
