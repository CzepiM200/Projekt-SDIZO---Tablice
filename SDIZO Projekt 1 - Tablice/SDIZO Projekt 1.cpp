#include "pch.h"
#include "Tablica.h"
#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
	Lista lista;
	lista.Push_Front(1);
	lista.Push_Front(1);
	lista.Push_Front(1);
	lista.Push_Front(1);
	lista.Push_Middle(2, 2);
	lista.Remove_Front();
	lista.Print_All();
}
