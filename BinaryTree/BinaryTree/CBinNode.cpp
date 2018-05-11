#include "stdafx.h"
#include "CBinNode.h"

template <class T>
CBinNode<T>::CBinNode(T x)
{
	m_data = x;
	m_nodes[0] = m_nodes[1] = NULL;
}

template <class T>
CBinNode<T>::~CBinNode()
{
}

template class CBinNode<int>;
template class CBinNode<double>;