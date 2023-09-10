//header file to show use of diff function calls
#ifndef P1_H
#define P1_H

#include <iostream>
using namespace std;

void swap_value(int,int);
void swap_ptr(int *, int *);
void swap_ref(int &, int &);
void swap_default(int , int );


void swap_value(int x,int y)
{
	int t;

	t = x;
	x = y;
	y = t;

	cout<<"\nx = "<<x<<" y = "<<y<<endl;

}

void swap_ptr(int *x,int *y)
{
	int t;

	t = *x;
	*x = *y;
	*y = t;

	cout<<"\nx = "<<*x<<" y = "<<*y<<endl;

}

void swap_ref(int &x,int &y)
{
	int t;

	t = x;
	x = y;
	y = t;

	cout<<"\nx = "<<x<<" y = "<<y<<endl;

}

void swap_default(int x=102,int y=101)
{
	int t;

	t = x;
	x = y;
	y = t;

	cout<<"\nx = "<<x<<" y = "<<y<<endl;

}

#endif