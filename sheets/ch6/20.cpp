#include<iostream>
using namespace std;
int main()
{
    double arr[20],Max=0,Mini;
    int sum=0;
    bool isnegative=0;
    int count=1;
    for (int i = 0; i < 20; i++)
    {
        cout<<"Enter the #"<<count++<<"number : ";
        cin>>arr[i];
        if(arr[i]<0)
            {
                cout<<"No Numbers provided"<<endl;
                isnegative=1;
                break;
            }
        sum+=arr[i];
        if(Max<arr[i])
        {
            Max=arr[i];
        }
    }
    if(isnegative==0)
    {
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
    
}