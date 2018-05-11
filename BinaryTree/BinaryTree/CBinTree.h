#pragma once
#include "CLess.h"
#include "CBinNode.h"

template <class T, class Op>
class CBinTree
{
public:
	CBinTree();
	CBinNode<T>**Rep(CBinNode<T>** p);
	bool Find(T x, CBinNode<T> **&p);
	bool Insert(T x);
	bool Remove(T x);
	void Print(CBinNode<T> *p, char d, int i);
	~CBinTree();
	
	CBinNode<T> *m_root;
	Op m_cmp;
};

