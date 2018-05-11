#include "stdafx.h"
#include "CBinTree.h"

template <class T, class Op>
CBinTree<T, Op>::CBinTree()
{
}

template <class T, class Op>
CBinNode<T>** CBinTree<T, Op>::Rep(CBinNode<T>** p)
{
	p = &((*p)->m_nodes[0]);
	while ((*p)->m_nodes[1]) {
		p = &((*p)->m_nodes[1]);
	}
	return p;
};

template <class T, class Op>
bool CBinTree<T, Op>::Find(T x, CBinNode<T> **&p)
{
	for (p = &m_root; *p && (*p)->m_data != x; p = &(*p)->m_nodes[m_cmp((*p)->m_data, x)]);
	return !!*p;
}

template <class T, class Op>
bool CBinTree<T, Op>::Insert(T x)
{
	CBinNode<T> **p;
	if (Find(x, p))
		return 0;
	*p = new CBinNode<T>(x);

	return 1;
}

template <class T, class Op>
bool CBinTree<T, Op>::Remove(T x)
{
	CBinNode<T> **p;
	if (!Find(x, p))
		return 0;
	if ((*p)->m_nodes[0] && (*p)->m_nodes[1])
	{
		CBinNode<T> **q = Rep(p);
		(*p)->m_data = (*q)->m_data;
		p = q;
	}
	CBinNode<T> *t = *p;
	*p = (*p)->m_nodes[!((*p)->m_nodes[0])];
	delete t;
	return 1;
}


template <class T, class Op>
void CBinTree<T, Op>::Print(CBinNode<T> *p, char d, int i) {
	if (!p) return;
	Print(p->m_nodes[0], 'i', i+1);
	cout << d << i << " " << (p->m_data) << endl;
	Print(p->m_nodes[1], 'd', i+1);
}

template <class T, class Op>
CBinTree<T, Op>::~CBinTree()
{
}

template class CBinTree<int, CLess<int>>;
template class CBinTree<int, CGreater<int>>;