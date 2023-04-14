#include<iostream>
using namespace std;
int main ()
{
    int n,sum=0;
    cout<<"enter a number";
    cin>>n;
    for (int i = 1; i<=n ; i++)/* code */

    {
       sum=sum+i; 
    }
    
cout<<"sum of first "<<n<<"Natural number is"<<sum <<endl;
return 0;
}   