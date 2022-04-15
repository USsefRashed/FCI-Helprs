/*
C++ Tutor With Joo && FCI Helpers
Name : Yousef Rashed
Year: 2
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    char shape;
    //show list of available shapes that program can calculate
    cout<<"(r)ectangle\n(c)ircle\n(t)riangle\n(s)quare"<<endl;
    cout<<"\n================================================\n";
    cin>>shape;//get the shape
    switch (shape)//compare the shape between cases
    {
    case 'r':
        {
        int width,length;
        cout<<"Enter the length : ";cin>>length;
        cout<<"Enetr the width : ";cin>>width;
        cout<<"Rectangle area = "<<width<<" * "<<length<<" = "<<width*length<<endl;
        break;
        }
    
    case 's':
    {
        int length;
    cout<<"Enter the length : ";cin>>length;
    cout<<"Square area = "<<length<<" * "<<length<<" = "<<length*length<<endl;
        break;
    }
    
    case 'c':
    {
        int radius;
    cout<<"Enter the radius : ";cin>>radius;
    cout<<"Circle area = "<<radius<<"^2 * "<<3.14<<" = "<<radius*radius*3.14<<endl;
        break;
    }
    
    case 't':
    char type;
    //Here I check if the traingle contain 90 angle or not because there are 2 laws for this to cases
    cout<<"this triangle contain angle 90 ? y or n : ";cin>>type;
    if(type=='y')
    {
    int length,base;
    cout<<"Enter the length : ";cin>>length;
    cout<<"Enetr the base : ";cin>>base;
    cout<<"Triangle area = "<<length<<" * 0.5 * "<<base<<" = "<<base*length*0.5<<endl;
    }
    else{
        int l1,l2;
        float angle,PI=3.14159265;
        cout<<"Enter 2 lengthes of the triangle : ";cin>>l1>>l2;
        cout<<"Enter the angle between them : ";cin>>angle;
        cout<<" *0.5 * "<<l1<<l2<<" * Sin("<<angle<<")"<<" = "<<0.5*l1*l2*sin(angle*PI/180);
    }
        break;
        cout<<"Invalid input !"<<endl;
    default:
        break;
    }
}
