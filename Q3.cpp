#include<iostream>
using namespace std;
int main()
{
double t;
cout<<"plz enter temp"<<endl;
cin>>t;
if (t<0)
cout<<"Freezing weather";
else
{
if (t<10)
cout<<"Very Cold weather";
else
{
if(t<20)
cout<<"Cold weather";
else
{
if (t<30)
cout<<"Normal in Temp";
else
{
if (t<40)
cout<<"Its Hot";
else
{
if(t>=40)
cout<<"Its Very Hot";
else
cout<<"Its Very Hot";
}
}
}
}
}
return 0;
}
