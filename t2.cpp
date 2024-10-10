#include<iostream>
#include<string>
using namespace std;
string DesiredOutput(float l, float w,float h,string u);
int main()
{
float l,w,h;
string u;
cout<<"enter the length of pyramaid in meter: ";
cin>>l;
cout<<"enter the width of pyramaid in meter: ";
cin>>w;
cout<<"enter the heigth of pyramaid in meter: ";
cin>>h;
cout<<"enter desired output unit(milimeters,centimeters,meters,kilometers): ";
cin>>u;
cout<<DesiredOutput(l,w,h,u);
}
string DesiredOutput(float l, float w,float h,string u)
{
string desired_output;
if(u=="milimeters")
{
desired_output="Desired output: " + to_string(((l*1000)*(w*1000)*(h*1000)) / 3) + " cubic milimeters";
}
if(u=="centimeters")
{
desired_output="Desired output: " + to_string(((l*100)*(w*100)*(h*100)) / 3) + " cubic centimeters ";
}
if(u=="kilometers")
{
desired_output="Desired output: " + to_string(((l/1000)*(w/1000)*(h/1000)) / 3) + " cubic kilometers"; 
}
if(u=="meters")
{
desired_output="Desired output: " + to_string(((l)*(w)*(h)) / 3 ) + " cubic meters";
}
return desired_output;
}
