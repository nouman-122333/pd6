#include<iostream>
#include<string>
using namespace std;
string taxCal(int p,string t);
int main()
{
int p;
string t;
cout<<"enter the vehicle price:$";
cin>>p;
cout<<"enter vehicle type(M,E,S,V,T): ";
cin>>t;
cout<< taxCal(p,t);
}
string  taxCal(int p,string t)
{
string  final_price;
string A="$";
if(t=="M")
{
final_price="Final price of vehicle of type " + t + " after adding the text is " + A + to_string(p +p *6/100);
}
if(t=="E")
{
final_price="Final price of vehicle of type " + t + " after adding the text is " + A + to_string(p + p *8/100);
}
if(t=="S")
{
final_price="Final price of vehicle of type " + t + " after adding the text is " + A + to_string(p + p *10/100);
}
if(t=="V")
{
final_price="Final price of vehicle of type " + t + " after adding the text is " + A + to_string(p + p * 12 / 100);
}
if(t=="T")
{
final_price="Final price of vehicle of type " + t + " after adding the text is " + A + to_string(p +p *15/100);
}
return final_price ;
}
