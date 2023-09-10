// demo class template

/*
function template
template <class T>
rt funcName(T args)
{
	// code
}
================================
class template

tempalte <class T>
class className
{
	private:
		T value1, value2;

};

simple calculator program

*/


#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
	T val1, val2;
public:
	Calculator() {}
	Calculator(T v1, T v2) { val1=v1; val2= v2; }

	T add() { return (val1+val2); }
	T sub() { return (val1-val2); }
	T mul() { return (val1*val2); }
	
	T div() { 
		
		if(val2 == 0)
			throw "Divide by Zero Error!"; //return(val2/val1);
		else
			return(val1/val2);
	}

	
	void dispResults()
	{
		cout<<"\n"<<val1<<" + "<<val2<<" = "<<add()<<endl;
		cout<<"\n"<<val1<<" - "<<val2<<" = "<<sub()<<endl;
		cout<<"\n"<<val1<<" * "<<val2<<" = "<<mul()<<endl;
		cout<<"\n"<<val1<<" / "<<val2<<" = "<<div()<<endl;
	}
};


int main()
{
	
	Calculator<int> calcInt(10,0);
	Calculator<double> calcFloat(25.5,0.0);
	try{
		cout<<"\nResults Ints"<<endl;
		calcInt.dispResults();
	}
	catch(const char *str)
	{
		cout<<"\nError: "<<str<<endl;
	}
	try{
		cout<<"\nResults Floats"<<endl;
		calcFloat.dispResults();
	}
	catch(const char *str)
	{
		cout<<"\nError: "<<str<<endl;
	}

	return 0;
}