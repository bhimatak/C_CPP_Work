/*
Virtual Destructor

VD are used to free up memory space alloted by DC object 

here we are using virtual keyword for the destructors
*/

#include <iostream>
using namespace std;

class BC
{
	public:
		BC() { cout <<"BC"<<endl; }
		 virtual ~BC() { cout <<"BC-D"<<endl; }	
};


class DC: public BC
{
	public:
		DC() { cout <<"DC"<<endl; }
		 ~DC() { cout <<"DC-D"<<endl; }	
};

int main()
{
	
	//DC d;
	BC *ptr = new DC;

	delete ptr; //delete the space occupied by the dc destructor

}