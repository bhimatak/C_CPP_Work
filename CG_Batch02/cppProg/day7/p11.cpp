#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	char inp[100];
	ofstream os;
	os.open("test1.txt");

	if(!os)
	{
		cerr<<"\nUnable to open the file"<<endl;
		exit(EXIT_FAILURE);
	}

	cout<<"\nWriting to the file from stdin"<<endl;
	cout<<"\nEnter your Name: ";
	cin.getline(inp,100);
	os<<inp<<endl;
	cout<<"\nEnter your phone No: ";
	cin.getline(inp,100);
	os<<inp<<endl;
	os.close();

	ifstream is;

	string str1;

	is.open("test1.txt");
	if(!is)
	{
		cerr<<"\nUnable to open the file"<<endl;
		exit(EXIT_FAILURE);	
	}

	cout<<"\nReading from the file and print it"<<endl;
	while(getline(is,str1))
	{
		cout<<str1<<endl;
	}

	is.close();

	return 0;
}