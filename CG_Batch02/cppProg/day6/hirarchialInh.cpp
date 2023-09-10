/*
Hirarchial Inheritence

class BC{
	
};

class DC1: public BC
{
	
};

class DC2: public BC
{
	
};

*/

#include <iostream>
using namespace std;


class Animal
{
	public:
		void info() { cout<<"I am an Animal"<<endl; }
};

class Dog: public Animal
{
	public:
		void bark() { cout<<"I am a Dog, Woof Woof"<<endl; }

};

class Cat: public Animal
{
	public:
		void meow() { cout<<"I am a Cat, Meow Meow"<<endl; }

};


int main()
{
	Dog D;
	Cat C;

	cout<<"\nDog Class"<<endl;
	D.info();
	D.bark();

	cout<<"\nCat Class"<<endl;
	C.info();
	C.meow();

	return 0;

}