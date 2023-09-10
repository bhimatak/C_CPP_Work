/*
Demo on Banking app
*/

#include <iostream>
using namespace std;

class Customer
{
	private:
		int accNo;
		float bal;
		char name[20];
	public:
		bool createNewAcc(int);
		void dispDetails();
		void disposit();
		void withdraw();

};

bool Customer::createNewAcc(int aNo)
{
	accNo = aNo;
	cout<<"\nEnter Name: ";
	cin>>name;
	cout<<"\nEnter Opening Bal(Min. 2000): ";
	cin>>bal;
	if(bal <2000)
	{
		cerr<<"\nOpening Balance should be Min 2000"<<endl;
		return false;
	}
	return true;
}


void Customer::dispDetails()
{
	cout<<"\nName: "<<name;
	cout<<"\nAcc No: "<<accNo;
	cout<<"\nBal : "<<bal;
}


void newAcc(Customer &C, int accList[], int &noAcc)
{
	static int aNo = 10001;
	
	if(!C.createNewAcc(aNo))
	{
		cout<<"\nAccount not created"<<endl;
		return;
	}
	cout<<"\nNo of accounts = "<<noAcc<<endl;
	accList[noAcc] = aNo;
	aNo++;
	noAcc++;
}

void Disp(Customer C)
{
	C.dispDetails();
}
void disposit(Customer &c,int accList[],int &noAcc)
{
	cout<<"Enter Account no:";
	cin>>aNo;
	if(accList[aNo] == aNo)
	{
		cout<<"\nEnter Deposit Amount: ";
		cin>>bal;
		bal+=bal;
	}
	else
	{
		cout<<"Please Enter correct Account no":
	}
}

void withdraw(Customer &c,int accList[],int &noAcc)
{
	cout<<"Enter Account no:";
	cin>>aNo;
	if(accList[aNo] == aNo)
	{
		cout<<"\nEnter Withraw Amount: ";
		cin>>bal;
		bal-s=bal;
	}
	else
	{
		cout<<"Please Enter correct Account no":
	}
}

int main()
{
	Customer C1,C2;
	int accList[10]={0},NoAccs=0;

	newAcc(C1,accList,NoAccs);
	newAcc(C2,accList,NoAccs);

	Disp(C1);
	Disp(C2);
	cout<<"\nNo of accounts : "<<NoAccs<<endl;
	for(int i=0;i<NoAccs;i++)
		cout<<"\n"<<accList[i]<<endl;




	return 0;
}