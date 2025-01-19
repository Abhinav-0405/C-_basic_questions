#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10];
    int n,max;
    cout<<"Enter the 10 number:";
    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<=9;i++)
    {
        if(max>arr[i]);
        max=arr[i];
    }
    cout<<"The largest element in the array is:"<< max;
    return 0;
}
