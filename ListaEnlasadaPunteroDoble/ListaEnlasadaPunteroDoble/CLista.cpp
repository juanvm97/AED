#include "stdafx.h"
#include "CLista.h"

template <class T, class Op>
CLista<T, Op>::CLista()
{
	m_head = NULL;
}

template <class T, class Op>
void CLista<T, Op>::Print()
{
	for (CNodo<T> *t = m_head; t != NULL; t = t->m_next)
		cout << t->m_data << endl;
	cout << endl;
}

template <class T, class Op>
bool CLista<T, Op>::Find(T x, CNodo<T> **&p)
{
	for (p = &m_head; *p && m_cmp((*p)->m_data, x); p = &((*p)->m_next));
	return (*p) && (*p)->m_data == x;
}

template <class T, class Op>
bool CLista<T, Op>::Insert(T x)
{
	CNodo<T> **p;
	if (Find(x, p))
		return 0;
	CNodo<T> *t = new CNodo<T>(x);
	t->m_next = *p;
	*p = t;
	return 1;
}

template <class T, class Op>
bool CLista<T, Op>::Remove(T x)
{
	CNodo<T> **p;
	if (!Find(x, p))
		return 0;
	CNodo<T> *t = *p;
	*p = t->m_next;
	delete t;
	return 1;
}

template <class T, class Op>
CLista<T, Op>::~CLista()
{
}

template class CLista< int, CLess<int> >;
template class CLista< double, CLess<double> >;
template class CLista< int, CGreater<int> >;
template class CLista< double, CGreater<double> >;