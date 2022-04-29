#include<iostream>
using namespace std;
int main()
{
    int stars;
    cout<<"Enter number of stars : ";cin>>stars;
    for (int i = 1; i <= stars; i++)
    {
        for (int  j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}