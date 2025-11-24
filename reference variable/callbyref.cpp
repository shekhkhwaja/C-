#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main()
{
     int a=10,b=20;
     cout<<"\n before swap\n";
     cout<<"\n a="<<a <<"b="<<b;
     swap(&a,&b);
     cout<<"\n After Swap\n";
     cout<<"\n a="<<a<<"b="<<b;
     return(0);
}
void swap(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;

}

