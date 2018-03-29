#pragma once
#include<list>
#include<iostream>
template<class T, size_t N>
class FixedList {
public:
	FixedList();
	~FixedList();
	//const T& get(unsigned int index) const;
	//T& operator[](unsigned int index);
	//int getFirstIndex(const T& t) const;
	size_t size() const;
	//size_t capacity() const;
	//bool add(const T& t);
	//T remove(const T& t);
private:
	std::list<T> l;
	size_t s;
};



template<class T, size_t N>
inline FixedList<T, N>::FixedList()
{
	l = std::list<T>(N);
	s = N;
}

template<class T, size_t N>
inline FixedList<T, N>::~FixedList()
{
}

template<class T, size_t N>
inline size_t FixedList<T, N>::size() const 
{
	return s;
}