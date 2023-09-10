#pragma once

#include <iostream>
using namespace std;

typedef unsigned long long ull;

template <class T>
class Array{
private:
	T *ptr;
	int size;
public:
	Array(T arr[], int s);
	void dispArr();

};

template <class T> void Array<T>::dispArr()
{
	for(ull i=0;i<size;i++)
		cout<<*(ptr+i)<<" ";

	cout<<endl;
}

template <class T> Array<T>::Array(T arr[], int s)
{
	size = s;
	ptr = new T[size];
	for(ull i=0;i<size;i++)
		ptr[i]=arr[i];
}

