#include<iostream>
using namespace std;
int main()
{
double x1,y1,x2,y2;
char left_paren1,left_paren2,comma1,comma2,right_paren1,right_paren2;
cout<<"Enter the nfirst pont: ";
cin>>left_paren1>>x1>>comma1>>y1>>right_paren1;
cout<<"Enter the second pont: ";
cin>>left_paren2>>x2>>comma2>>y2>>right_paren2;
cout<<"Mid point"<<"("<<(x1+x2)/2<<","<<(y1+y2)/2<<")"<<endl;
}
