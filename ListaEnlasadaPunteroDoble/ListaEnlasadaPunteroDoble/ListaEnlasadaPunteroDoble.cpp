// ListaEnlasadaPunteroDoble.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

void Menu()
{
	cout << " 1.-Insertar" << endl;
	cout << " 2.-Imprimir" << endl;
	cout << " 3.-Eliminar" << endl;
	cout << " 0.-Salir" << endl;
}

int main()
{
	Menu();

	int hacer = 0;

	CLista<int, CLess<int>> L;
	int x;
	do
	{
		cout << " Hacer: ";
		cin >> hacer;
		if (hacer == 1)
		{
			cout << "  Numero: ";
			cin >> x;
			L.Insert(x);
		}

		else if (hacer == 2)
		{
			L.Print();
		}

		else if (hacer == 3)
		{
			cout << " Numero: ";
			cin >> x;
			L.Remove(x);
		}

	} while (hacer != 0);

	return 0;
}
