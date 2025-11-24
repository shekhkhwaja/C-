#include<iostream>
using namespace std;
// dynamic memory allocation karwana ke liye
//new for creating allocation of memory
//delete for deleting the allocated memory
int main()
{
  int *p;
  int i;
  p=new int[5];
  cout<<"\n Enter 5 int values=";
  for(i=0;i<=4;i++)
  {
    cin>>p[i];
  }
  cout<<"\n After the insert=\n";
  for(i=0;i<=4;i++)
    cout<<"\n"<<p[i];
    delete p;
}