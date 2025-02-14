#include<iostream>
using namespace std;
int main()
{
int tpv;
double d;
cout<<"enter the total purchase value"<<endl;
cin>>tpv;
if(tpv>2000)
{
cout<<"Discount is applicable"<<endl;
d=(tpv*10.0)/100.0;
cout<<"The total purchase value after discount is:"<<tpv-d<<endl;
}
else
{
cout<<"Discount is not applicable"<<endl;

cout<<"The total purchase value after discount is:"<<tpv<<endl;
}
return 0;
}

