// program to calculate dist of different object 
// and get the desired ouput

#include <iostream>
using namespace std;

class dist
{
	private:
		int feet;
		float inch;
	public:
		void  setDist(int ft, float in) { feet = ft; inch = in;}
		void getDetails() { cout<<feet<<"' "<<inch<<"\""<<endl; }
		int getFeet(){ return feet; }
		float getInch() { return inch; }

};

int main()
{
	dist d1,d2;
	int feet=0;
	float inch=0.0;

	d1.setDist(10,15.5);
	d2.setDist(11,16.8);

	d1.getDetails();
	d2.getDetails();

	cout<<"\nd1 feet = "<<d1.getFeet()<<" d1 inch = "<<d1.getInch()<<endl;
	cout<<"\nd2 feet = "<<d2.getFeet()<<" d2 inch = "<<d2.getInch()<<endl;
	
	feet = d1.getFeet()+d2.getFeet();
	inch = d1.getInch()+d2.getInch();

	cout<<"Feet = "<<feet<<" Inch = "<<inch<<endl;

	while(inch >= 12)
	{
		inch -= 12.0;
		feet++;
	}

	cout<<"Feet = "<<feet<<" Inch = "<<inch<<endl;


	cout<<endl;
	return 0;
}
