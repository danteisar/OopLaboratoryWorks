#pragma once
#include "StatVector.h"
#include <cstddef>

template <class T>
class CustomVector : private StatVector
{
private:
	int count = 0;
public:
	CustomVector(int count);
	void Set(int i, T* data);
	T* Get(int i);
	T* operator [](const int i);
	void Print();
};

template<class T>
CustomVector<T>::CustomVector(int count) : StatVector(count), count(count) {}

template<class T>
inline void CustomVector<T>::Set(int i, T* data) { StatVector::Set(i, data); }

template<class T>
T* CustomVector<T>::Get(int i) {
	return static_cast <T*>(StatVector::Get(i));
}

template<class T>
T* CustomVector<T>::operator[](const int i)
{
	return Get(i);
}

template<class T>
void CustomVector<T>::Print()
{
	for (size_t i = 0; i < count; i++)
	{
		T* tmp = Get(i);
		if (tmp != NULL)
			tmp->Print();
	}
}

