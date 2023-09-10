#include <stdio.h>

void dispArr(int [], int);
void RevArr(int [], int);
void RevArrPos(int [], int, int);


int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int k=0,ie=0,is=0,i;
    scanf("%d",&k);
    printf("\nBefore revere\n");
    dispArr(a,size);
    printf("\nAfter revere\n");
    //RevArr(a,size);
    
    for(i=0,is=0;i<size;i++)
    {
        if(i%k == 0)
        {
            ie = i;
            RevArrPos(a,is,ie);
            is = ie;
        }
        else
        {
            if(i >=(size-1))
            RevArrPos(a,is,(i+1));
        }
    }
    
   // RevArrPos(a,1,5);
    dispArr(a,size);
    
    
   
   
    return 0;
}


void dispArr(int arr[], int Cap)
{
    int i;
   
    for(i=0;i<Cap;i++)
        printf(" %d ",arr[i]);
}

void RevArr(int arr[], int Cap)
{
    int i,t,mid,iStart, iEnd;
    mid = Cap/2;
    iEnd = Cap-1;
    iStart = 0;
    for(i=iStart;i<mid;i++)
    {
        t = arr[i];
        arr[i] = arr[iEnd];
        arr[iEnd] = t;
        iEnd--;
       
    }
       
}

void RevArrPos(int a[], int iStart, int iEnd)
{
    int i,t,mid,end;
    mid = iEnd/2;
    end = iEnd-1;
    
    if(iStart >= mid)
    {
        mid = iEnd -1;
        end = iEnd -1;
    }
    
    for(i=iStart;(i<mid)&&(i<end);i++)
    {
        t = a[i];
        a[i] = a[end];
        a[end] = t;
        end--;
       
    }
    
    
}
