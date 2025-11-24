#include<iostream>
using namespace std;
int main()
{
    int total=10;
    cout<<"total="<<total;
    int &ans=total;  // ref variable hai &ans
    ans=50;
    cout<<"\n total="<<total<<"ans="<<ans;
    int &ref=ans;
    ref=100;
    cout<<"\n total="<<total<<"ans="<<ans<<"ref="<<ref;
    return(0);
}