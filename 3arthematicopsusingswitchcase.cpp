#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"\n1.Addition";
    cout<<"\n2.Subtraction";
    cout<<"\n3.Multiplication";
    cout<<"\n4.Division";
    cout<<"\nEnter any 2 values:";
    cin>>a>>b;
    
    cout<<"Enter the choice(1-4):";
    cin>>ch;

    switch(ch)
    {
        case 1:cout<<"Addition:"<<a+b;break;
        case 2:cout<<"Subtraction:"<<a-b;break;
        case 3:cout<<"Multiplication:"<<a*b;break;
        case 4:cout<<"Division:"<<a/b;break;
        default:cout<<"Invalid Choice.";
    }
    return 0;
}