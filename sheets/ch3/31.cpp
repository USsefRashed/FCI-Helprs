#include<iostream>
using namespace std;
int main()
{
    enum Day
    {Saturday,Sunday,Monday,Tuesday,Wednesday,Thursday,Friday};
    Day day=Friday;
    switch (day)
    {
    case 0:cout<<"Saturday"<<endl;break;
    case 1:cout<<"Sunday"<<endl;break;
    case 2:cout<<"Monday"<<endl;break;
    case 3:cout<<"Tuesday"<<endl;break;
    case 4:cout<<"Wednesday"<<endl;break;
    case 5:cout<<"Thursday"<<endl;break;
    case 6:cout<<"Friday"<<endl;break;
    default:break;
    }
    
}