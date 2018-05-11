#pragma once

template <class T>
class CBinNode
{
public:
	T m_data;
	CBinNode<T> *m_nodes[2];
	CBinNode(T x);
	~CBinNode();

};

