#pragma once
#include<iostream>

template<class T, size_t N>
class FixedList {
public:
	FixedList();
	~FixedList();
	const T& get(unsigned int index) const;
	//T& operator[](unsigned int index);
	int getFirstIndex(const T& t) const;
	size_t size() const;
	size_t capacity() const;
	bool add(const T& t);
	//T remove(const T& t);
private:
	T l[N];
	size_t s;
};


/* default constructor */
template<class T, size_t N>
inline FixedList<T, N>::FixedList()
{
	s = 0;
}

/* default destructor */
template<class T, size_t N>
inline FixedList<T, N>::~FixedList()
{
}


/* PRE: index inbound */
template<class T, size_t N>
inline const T & FixedList<T, N>::get(unsigned int index) const
{
	// TODO: insert return statement here
	if (index >= s) {
		throw "exception"; 
	}
	else {
		return l[index];
	}
}

template<class T, size_t N>
inline int FixedList<T, N>::getFirstIndex(const T & t) const
{
	for (int i = 0; i < s; ++i) {
		if (l[i] == t) {
			return i;
		}
	}
	return -1;
}

/* return how many elements are in the list */
template<class T, size_t N>
inline size_t FixedList<T, N>::size() const 
{
	return s;
}

/* return what is the maximum number of elements in this list */
template<class T, size_t N>
inline size_t FixedList<T, N>::capacity() const
{
	return N;
}

/* adds to the list
   if addition success: return true
   if addition failed: return false
*/
template<class T, size_t N>
inline bool FixedList<T, N>::add(const T & t)
{
	if(s >= N)
		return false;
	l[s] = t;
	s++;
	return true;
}

