#pragma once

template<class T>
class CGreater
{
public:
	CGreater();
	inline bool operator() (T a, T b);
	~CGreater();
};