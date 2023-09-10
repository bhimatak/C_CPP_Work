#include <iostream>
#include<string>
#include<algorithm> // need for swap functionality

using namespace std;

int main()
{

	char firstChar, secondChar;
	int firstInt, secondInt;
	string firstStr, secondStr;

	//get single characters
	cout<<"\nEnter two characters: ";
	cin>>firstChar>>secondChar;
	swap(firstChar,secondChar);
	cout<<"\nFirstChar: "<<firstChar<<"\tSecondChar: "<<secondChar<<endl;

	//get Ints
	cout<<"\nEnter two Ints: ";
	cin>>firstInt>>secondInt;
	swap(firstInt,secondInt);
	cout<<"\nFirstInt: "<<firstInt<<"\tSecondInt: "<<secondInt<<endl;

	//get two strings
	cout<<"\nEnter two strings: ";
	cin>>firstStr>>secondStr;
	swap(firstStr,secondStr);
	cout<<"\nFirstString: "<<firstStr<<"\tSecondString: "<<secondStr<<endl;

	return 0;
}