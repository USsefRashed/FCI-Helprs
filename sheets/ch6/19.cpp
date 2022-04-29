#include<iostream>
using namespace std;
int main()
{
    double arr[20],Max=0,Mini;
    int sum=0;
    int count=1;
    for (int i = 0; i < 20; i++)
    {
        cout<<"Enter the #"<<count++<<"number : ";
        cin>>arr[i];
        sum+=arr[i];
        if(Max<arr[i])
        {
            Max=arr[i];
        }
    }
    Mini=arr[0];
    for (int i = 0; i < 20; i++)
    {
        if(Mini>arr[i])
        {
            Mini=arr[i];
        }
    }
    
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<sum/20<<endl;
    cout<<"Max = "<<Max<<endl;
    cout<<"Min = "<<Mini<<endl;
}