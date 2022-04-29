#include <iostream>
using namespace std;
enum class Day
{Sat,Sun,Mon,Tue,Wed,Thu,Fri};
int main()
{ 
Day dayNum[]{Day::Sat,Day::Sun,Day::Mon,Day::Tue,Day::Wed,Day::Thu, Day::Fri};
string Days[]{"Sat","Sun","Mon","Tue","Wed","Thu","Fri"};
for (size_t i = 0; i < 7; i++){cout<<Days[(int)dayNum[i]]<<endl;}
}