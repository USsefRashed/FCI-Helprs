#include <iostream>
using namespace std;
enum class Month
{
    Jan, // assigned 0
    Feb, // assigned 1
    Mar, // assigned 2
    Apr, // assigned 3
    May, // assigned 4
    Jun, // assigned 5
    Jul,  // assigned 6
    Aug,  // assigned 7
    Sep,  // assigned 8
    Oct,  // assigned 9
    Nov,  // assigned 10
    Dec  // assigned 11
};

int main()
{
    //intiail the enumeration arrribtes 
    Month MonthNum[]
    {Month::Jan,Month::Feb,Month::Mar,Month::Apr,Month::May,Month::Jun,Month::Jul,Month::Aug,Month::Sep,Month::Oct,Month::Nov,Month::Dec};
string Months[]{"January","February","Mars","April","May","June","July","August","Septemper","October","November","Decemper"};
    for (size_t i = 0; i < 12; i++)
    {cout<<Months[(int)MonthNum[i]]<<endl;}
}