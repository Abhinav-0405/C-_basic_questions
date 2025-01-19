#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rev=0,remainder;
    cout<<"Enter any number:";
    cin>>n;
    cout<<"The reverse order of digit are:";
    while(n!=0)
    {
        remainder=n%10; 
        rev = rev*10 + remainder;
        n=n/10; 
    }
    cout<<rev<<endl;
    return 0;
}