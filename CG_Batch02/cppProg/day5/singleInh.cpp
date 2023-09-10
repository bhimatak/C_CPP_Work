/*
Demo on Single Inh
*/
#include <iostream>
using namespace std;

//Base class
class InputData{
	protected:
		int num1, num2;
		
	public:
		void ipValues()
		{
			cout<<"\nEnter the 2 values: ";
			cin>>num1>>num2;
		}

		void getValues() { cout<<"Num1: "<<num1<<"\nNum2: "<<num2<<endl; }

};

class MultiValues : public InputData
{
	private:
		int mul;
		

	
	public:
		void multiply()
		{
			ipValues();

			mul = (num1*num2);
		}
		void result()
		{
			cout<<"\nMultiplication of two numbers = "<<mul<<endl;
		}

};

int main()
{
	/* code */

	// InputData a1;
	// a1.ipValues();
	// a1.getValues();

	//InputData a1;
	//a1.num1 = 100;

	MultiValues M1;
	
	M1.ipValues();
	M1.multiply();
	M1.result();
	
	return 0;
}