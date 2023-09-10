/*
Demo on multilevel inheritence
*/

#include <iostream>
using namespace std;

//base class
class Student
{
	private:
		int rollno;
		char name[20];
	public:
		Student(){ cout<<"\nStudent Constructor called\n"<<endl;}
		void getDetails()
		{
			cout<<"\nEnter Name of Student: ";
			cin>>name;
			cout<<"\nEnter the rollno of "<<name<<" : ";
			cin>>rollno;
		}

		void printDetails()
		{
			cout<<"\n================================\n";
			cout<<"\n\tStudent Details";
			cout<<"\n================================\n";
			cout<<"\nName: "<<name<<"\nRollNo: "<<rollno<<endl;
		}
};

//sub class 1
class Marks_Std : public Student
{
	private:
		int s1, s2, s3;
		float per;
	public:
		Marks_Std() { cout<<"\nMarks_Std Constructor called\n"<<endl; }
		void getMarks()
		{
			cout<<"\nEnter the Marks of Subject 1: ";
			cin>>s1;
			cout<<"\nEnter the Marks of Subject 2: ";
			cin>>s2;
			cout<<"\nEnter the Marks of Subject 3: ";
			cin>>s3;
		}
		float getAvg()
		{
			return((s1+s2+s3)/3.0);
		}

		void printMarks()
		{
			printDetails();
			cout<<"\nMarks scored in Subject 1: "<<s1<<endl;
			cout<<"\nMarks scored in Subject 2: "<<s2<<endl;
			cout<<"\nMarks scored in Subject 3: "<<s3<<endl;
		}

};

//sub class 2
class ResultStd : public Marks_Std
{
	public:
		ResultStd() { cout<<"\nResultStd Constructor called\n"<<endl; }
		void calAvg()
		{
			cout<<"\nPercentile: "<<getAvg()<<endl;
		}

};


int main()
{
	ResultStd *S;
	int nos;
	cout<<"\nEnter the no of Students: ";
	cin>>nos;

	//create number of students
	S = new ResultStd[nos];

	//get the input data
	for(int i=0;i<nos;i++)
	{
		S[i].getDetails();
		S[i].getMarks();
	}

	for(int i=0;i<nos;i++)
	{
		
		S[i].printMarks();
		S[i].calAvg();

	}

	delete[] S;

	cout<<endl;
	return 0;

}