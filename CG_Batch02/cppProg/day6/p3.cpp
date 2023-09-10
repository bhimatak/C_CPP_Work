//diamond problem

/*
					Person

			Faculty			Student
					  
					  TA
*/

#include <iostream>

using namespace std;

//Base class
class Person
{
public:
	Person() { cout<<"\nDefault Constructor called for Person"<<endl; }
	Person(int x) { cout<<"\nI am Person : "<<x<<endl; }

};

//derived class 1 using BC
class Faculty: virtual public Person
{
public:
	Faculty(int x) : Person(x) { cout<<"\nI am Faculty : "<<x<<endl; }
};

//derived class 2 using BC
class Student: virtual public Person
{
public:
	Student(int x) : Person(x) { cout<<"\nI am Student : "<<x<<endl; }

};

//derived class using F,S
class TA: public Student, public Faculty 
{
public:
	TA(int x) : Faculty(x), Student(x), Person(x) { cout<<"\nI am TA : "<<x<<endl; }	
};




int main()
{
	TA t1(25);

	cout<<endl;
	return 0;
}