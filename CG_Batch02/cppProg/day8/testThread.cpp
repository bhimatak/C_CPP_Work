#include <iostream>
#include <chrono>
#include<algorithm>


using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

struct arg_struct {
    ull start;
    ull end;
};


ull OddSum =0;
ull EvenSum=0;

void findEven()
{
    
    for(ull i=start; i<=end;++i)
        {
            if((i&1)==0){
                EvenSum += i;
            }
        }
    
}

void findOdd()
{
    
    for(ull i=start; i<=end;++i)
        {
            if((i&1)==0){
                OddSum += i;
            }
        }
    
}


int main()
{
    

    return 0;
}