#include<iostream>
using namespace std;
int main()
{
    enum Month
    {January,February,Mars,April,May,June,July,August,September,october,November,Descember};
    Month Month=July;//change the Month then run
    switch (Month)
    {
    case 0:cout<<"January"<<endl;break;
    case 1:cout<<"February"<<endl;break;
    case 2:cout<<"Mars"<<endl;break;
    case 3:cout<<"April"<<endl;break;
    case 4:cout<<"May"<<endl;break;
    case 5:cout<<"June"<<endl;break;
    case 6:cout<<"July"<<endl;break;
    case 7:cout<<"August"<<endl;break;
    case 8:cout<<"september"<<endl;break;
    case 9:cout<<"october"<<endl;break;
    case 10:cout<<"November"<<endl;break;
    case 11:cout<<"Decsember"<<endl;break;
    default:break;
    }
    
}