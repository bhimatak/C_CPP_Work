/*
demo on pthread
*/
#include<iostream>
#include<pthread.h>

using namespace std;

char *str="Child Thread";

void *func(void *str)
{
	cout<<"Child thread created : "<<(char *)str<<endl;
}

int main()
{
	pthread_t t;

	pthread_create(&t,NULL,&func,(void *)str);
	cout<<"Main Thread Created"<<endl;
	pthread_join(t, NULL);
	exit(EXIT_SUCCESS);


	

	return 0;
}