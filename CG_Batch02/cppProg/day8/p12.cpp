// Mutex: Mutual Exclusion

// RACE CONDITION:
// 0. Race condition is a situation where two or more threads/process happend to change a common data at the same time.
// 1. If there is a race condition then we have to protect it and the protected setion is  called critical section/region.

// MUTEX:
// 0. Mutex is used to avoid race condition.
// 1. We use lock() , unlock() on mutex to avoid race condition.


#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

typedef unsigned long long ull;

ull amt=0;
std::mutex m;

void addMoney(int x)
{
	
	cout<<"amt add="<<amt<<" x="<<x<<endl;
	for(ull i=0;i<19000000;i++){
			if(m.try_lock()){
			amt+=x;
			m.unlock();
		}
	}
	
	
}



int main()
{
	std::thread t1(addMoney,5);
	std::thread t2(addMoney,13);

	t2.join();
	
	t1.join();
	cout<<"Amount: "<<amt<<endl;

	return 0;
}