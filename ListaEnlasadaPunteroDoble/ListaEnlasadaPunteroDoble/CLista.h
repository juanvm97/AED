#pragma once
#include "CNodo.h"
#include "CLess.h"
#include "CGreater.h"

template <class T, class Op>
class CLista
{
public:
	CNodo<T> *m_head;
	CLista();
	Op m_cmp;
	void Print();
	bool Find(T x, CNodo<T> **&p);
	bool Insert(T x);
	bool Remove(T x);
	~CLista();
};