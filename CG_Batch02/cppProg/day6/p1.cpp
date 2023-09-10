#include <iostream>
using namespace std;

class BC
{
private:
	int a=101;
	int get_a() { return a; }
protected:
	int b=102;
	int get_b() { return b; }
public:
	int c=103;
	int get_ap() { return (get_a()); }
	int get_bp() { return (get_b()); }
	int get_cp() { return c; }

};


class DC1: public BC
{
	int d=104;

	public:
		int get_d() { return d; }
		void display() {
			cout<<get_ap()<<endl;
			cout<<get_bp()<<endl;
			cout<<get_cp()<<endl;
			cout<<get_b()<<endl;
			//cout<<get_a()<<endl; //=> error: ‘int BC::get_a()’ is private within this context
			cout<<get_d()<<endl;
		}
};

class DDC1: public DC1
{
public:
	void disp() { cout<<get_b()<<endl; }

};

class DC2: public BC
{
	int d=105;
	public:
		int get_d() { return d; }
		void display() {
			cout<<get_ap()<<endl;
			cout<<get_bp()<<endl;
			cout<<get_cp()<<endl;
			cout<<get_b()<<endl;
			//cout<<get_a()<<endl; //=> error: ‘int BC::get_a()’ is private within this context
			cout<<get_d()<<endl;	
		}

};

int main()
{
	 // BC b;

	 // cout<<b.get_a()<<endl;

	DC1 d1;


	//cout<<d1.get_ap()<<endl;
	cout<<"\nDerived class 1"<<endl;
	d1.display();

	DC2 d2;
	cout<<"\nDerived class 2"<<endl;
	d2.display();

	cout<<"\nD Derived class 1"<<endl;
	DDC1 dd1;

	//dd1.display();
	//d1.get_b(); // error: ‘int BC::get_b()’ is protected within this context
	//dd1.disp();

	return 0;
}