#include <iostream>
#include <string>

using namespace std;

int main()
{
	char cmd;
	do{
		cin>>cmd;
		
		switch(cmd)
		{
			case 'A':
				cout<<"command typed was A"<<endl;
				break;
			case 'B':
				cout<<"command typed was B"<<endl;
				break;
			case 'C':
				cout<<"command typed was C"<<endl;
				break;
			case 'Q':
				cout<<"command typed was Q to quit"<<endl;
				break;
			default:
				cout<<"Enter correct command"<<endl;
		}
	}while(cmd != 'Q');

	return 0;
}