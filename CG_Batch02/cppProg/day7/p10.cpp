/*
File handling in c++
*/

#include <iostream>
#include <fstream>
#include <string>
<<<<<<< HEAD
=======

>>>>>>> e67686efe0b9c23a8db05df5e454d4559051f381
using namespace std;

int main()
{
	fstream fptr;
	string str1;
<<<<<<< HEAD
=======
	char inp[100];

<<<<<<< HEAD
	fptr.open("test.txt", ios::app);
=======
>>>>>>> e67686efe0b9c23a8db05df5e454d4559051f381
	fptr.open("test.txt", ios::in);
>>>>>>> e843b6cb1c4db2dab5cd72483f0b7f5361787751
	if(!fptr)
	{
		cerr<<"Unable to open the file!"<<endl;
		exit(EXIT_FAILURE);
	}
	cout<<"Opened the file for reading"<<endl;
	cout<<"\nFile Pointer position : "<<fptr.tellp()<<endl;
<<<<<<< HEAD
	fptr.seekg(0,ios::beg);
	cout<<"\nFile Pointer position : "<<fptr.tellp()<<endl;
	getline(fptr,str1);
	cout<<"\nFrom file\n"<<str1<<endl;
=======
	fptr.seekg(3,ios::beg);
	cout<<"\nFile Pointer position : "<<fptr.tellp()<<endl;
	getline(fptr,str1);
	cout<<"\nFrom file\n"<<str1<<endl;
	//cin.getline(inp,100);
	//cout<<inp<<endl;
>>>>>>> e67686efe0b9c23a8db05df5e454d4559051f381

	fptr.close();

	return 0;
}