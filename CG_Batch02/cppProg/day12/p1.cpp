#include <iostream>

using namespace std;

class B;

class A
{
private:
	int a;
	B *b1;// = new B(44); 
public:
	A() { cout<<"\nA is called"<<endl; }
	A(int i) { cout<<"\nA is called"<<endl; a=i; }
	~A() { cout<<"\nA is destructed"<<endl; }
	
	void setA(int i) { a=i; }
	void dispA() { cout<<"\nA="<<a<<endl; }
	void dispB_A();// { b1.setB(33); (cout <<"\nB="; b1->dispB(); cout<<endl; }
};

class B
{
private:
	int b;
	A *a1 = new A(25);
public:
	B() { cout<<"\nB is called"<<endl; }
	B(int i) { cout<<"\nB is called"<<endl; b=i; }
	~B() { cout<<"\nB is destructed"<<endl; }
	void setB(int i) { b=i; }
	void dispB() { cout<<"\nB="<<b<<endl; }
	void UpdateA_V(A objA) {
		objA.setA(11);
		cout<<"\nA value changed withing class B: ";
		objA.dispA();
		cout<<endl;
	}

	void UpdateA_R(A &objA) {
		objA.setA(11);
		cout<<"\nA value changed withing class B: ";
		objA.dispA();
		cout<<endl;
	}

	void UpdateA_C(void) {
		cout<<"\nA value changed withing class B: ";
		a1->dispA();
		cout<<endl;
	}
};

void A::dispB_A()
{ 
	b1 = new B(33);
	//b1->setB(33); 
	cout <<"\nB="; 
	b1->dispB(); 
	cout<<endl; 
}

int main()
{
	// A a1(10);
	// B b1(20);
	// cout<<"\nBefore Update\n";
	// a1.dispA();
	// b1.dispB();
	// cout<<"\nAfter Update=>Association\n";
	// b1.UpdateA_V(a1);
	// cout<<"\nIn Main obj A value remains same: ";
	// a1.dispA();

	// cout<<"\nAfter Update=>Aggregation\n";
	// b1.UpdateA_R(a1);
	// cout<<"\nIn Main obj A value gets changed: ";
	// a1.dispA();

	cout<<"\nAfter Update=>Composition\n";
	// B b2(20);
	// b2.UpdateA_C();


	A a1(27);
	a1.dispB_A();



	return 0;
}
