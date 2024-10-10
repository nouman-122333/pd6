#include<iostream>
#include<string>
using namespace std;
string timecal(float n,float d,float w);
int main()
{
float n,d,w;
cout<<"enter needed hours: ";
cin>>n;
cout<<"enter no. of total days: ";
cin>>d;
cout<<"enter no. of total workers: ";
cin>>w;
cout<<timecal(n,d,w);
}
string timecal(float n,float d,float w)
{
string perfecttime;
float daysleft=d-d*10/100;
cout<<daysleft<<endl;
int caltime=daysleft * w *10;
cout<<caltime<<endl;
if(caltime>n)
{
perfecttime="Yes! " + to_string(n-caltime) + " hours left";
}
else
{
perfecttime="no enough time! " + to_string(n-caltime) + " hours needed";
}
return perfecttime;
}
