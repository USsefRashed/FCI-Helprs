/*
C++ Tutor with joo telegram channel && FCI Helpers
Student name : Yousef Rashed
Year : 2
*/
#include<iostream> //iostream is abbreviation for Input Output stream
using namespace std;//this name space to provide standard all objects like cout - cin
 //the first thing the compiler look in structure on it

/*
Before we begin I will explain swapp with example
suppose we have 2 glasses 
first -> contain red liquid
second -> contain blue lequid
I want to exchange the color between them to be
first -> contain blue liquid
second -> contain red lequid
what should I do ?
I will use third glass As a temporary glass let me show u with code 
*/
int main()
{

    //before swapping :
cout<<"\n=================================\nBefor Swapping \n=================================\n";
    string FirstGlass=" hey I contain red";
    string SecondGlass=" hey I contain blue";

cout<<"First glass : "<<FirstGlass<<endl;
cout<<"Second glass : "<<SecondGlass<<endl;

//During Swapping

        //I will bring my third glass
    string ThirdGlass="I contain nothing yet";
        //I will empty my first glass to empty glass(Third) third -> red
    ThirdGlass=FirstGlass;
        //now third contain the red liquid
        //I will empty my second glass to first glass | first ->blue
    FirstGlass=SecondGlass;
        //I will empty my third  glass to second  glass | second ->red
    SecondGlass=ThirdGlass;

// After Swapping
cout<<"\n=================================\nAfter Swapping\n=================================\n";
cout<<"First glass : "<<FirstGlass<<endl;
cout<<"Second glass : "<<SecondGlass<<endl;
}