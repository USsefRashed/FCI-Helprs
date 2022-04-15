/*
C++ Tutor with joo telegram channel && FCI Helpers
Student name : Yousef Rashed
Year : 2
*/
#include<iostream> //iostream is abbreviation for Input Output stream
using namespace std;//this name space to provide standard all objects like cout - cin
 //the first thing the compiler look in structure on it
int main()
{
// Declaring variables that I will use to built my calculator
double num1,num2;
char op;//abrreviation for (operation)

//Here I interact with user as I give him messge to left an output
cout<<"Enter the first number : ";cin>>num1;
cout<<"choose operation { + - * /}: ";cin>>op;
cout<<"Enter the second number : ";cin>>num2;
switch (op)//I will compare between cases depends of the user's input operation
{
case '+':
    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    break;
case '-':
    cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    break;
    case '/':
    cout<<num1<<" / "<<num2<<" = ";(num2==0)?cout<<"MathError":cout<<num1/num2; cout<<endl;
    break;
    //in case of input any char not from { + - * /}
default:
cout<<"Sorry your operation "<<op<<" is not in {+ - * /}"<<endl;
    break;
}

}