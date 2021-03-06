// BinaryTree.cpp: define el punto de entrada de la aplicación de consola.

#include "stdafx.h"

int main()
{
	CBinTree<int, CLess<int>> t;
	t.Insert(5);
	t.Insert(2);
	t.Insert(8);
	t.Insert(3);
	t.Insert(6);
	t.Insert(1);
	t.Insert(10);
	t.Print(t.m_root, 'r', 0);
	cout << endl;

	t.Remove(5);
	t.Print(t.m_root, 'r', 0);
	cout << endl;
	
	t.Remove(2);
	t.Print(t.m_root, 'r', 0);
	cout << endl;
	
	t.Remove(8);
	t.Print(t.m_root, 'r', 0);
	cout << endl;

	t.Remove(10);
	t.Print(t.m_root, 'r', 0);
	cout << endl;

	t.Remove(1);
	t.Print(t.m_root, 'r', 0);
	cout << endl;

	t.Remove(6);
	t.Print(t.m_root, 'r', 0);
	cout << endl;

	t.Remove(3);
	t.Print(t.m_root, 'r', 0);
	cout << endl;

    return 0;
}

