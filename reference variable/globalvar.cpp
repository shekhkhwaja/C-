#include<iostream>
using namespace std;
int total=100;
int main()
{ 
    int total=60;{

        int total=10;{

            int total=20;{
                cout<<"\nlocal total="<<total;
                cout<<"\nglobal total="<<::total;
                      }
              cout<<"\nlocal total="<<total;
                cout<<"\nglobal total="<<::total;
        }
          cout<<"\nlocal total="<<total;
          cout<<"\nglobal total="<<::total;
    }
     cout<<"\nlocal total="<<total;
    cout<<"\nglobal total="<<::total;
}