// program to demo srand and rand functions

#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

	//for(int i=0; i<5;i++ )
	//	cout<<rand()<<endl;

	srand(time(0));

	for(int i=0; i<5;i++ )
		cout<<rand()<<endl;

	return 0;
}