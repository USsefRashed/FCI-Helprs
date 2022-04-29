#include<iostream>
using namespace std;
int main()
{
    int arr[5],sum=0;

    for (short i = 0; i < 5; i++)
    {
        cout<<"Enter #"<<i+1<<"number : ";cin>>arr[i];
    
        sum+=arr[i];
    }

    cout<<"Sum : "<<sum<<endl;
}