#pragma once

template<class T>
class CLess
{
public:
	CLess();
	inline bool operator() (T a, T b);
	~CLess();
};
