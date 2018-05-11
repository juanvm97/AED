#pragma once
template <class T>
class CNodo
{
public:
	T m_data;
	CNodo<T> *m_next;
	CNodo(T x);
	CNodo(T x, CNodo<T> *s);
	~CNodo();
};
