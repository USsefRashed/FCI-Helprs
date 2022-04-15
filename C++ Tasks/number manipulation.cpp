/*
C++ Tutor with joo telegram channel && FCI Helpers
Student name : Yousef Rashed
Year : 2
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    int remainder;
    int firstnumber;
    
    cout<<"Enter A number from 3 digits : ";cin>>number;

    if(number<9999 && number>99)//This program runs correctly with 3-digit number only
    {
        // number= 123
        firstnumber=number/100;//1  because compiler will take the int part only & ignore fraction number 
                                //depends on definfition data type

        remainder=number%100;//23
        
        int secondnumber;
        
        secondnumber=remainder/10;//23/10=2

        remainder=remainder%10;//23%10=3
        //Here I can identify the third number but the remainder is considered the thid one
        cout<<firstnumber<<" + "<<secondnumber<<" + "<<remainder<<" = "<<firstnumber+secondnumber+remainder<<endl;
    }
    else{
        cout<<"Sorry the number is more than 3 digits * ^ * \n";
    }
}