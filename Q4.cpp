#include<iostream>
using namespace std;
int main()
{
char c1='A', c2='H', c3='M', c4='E', c5='D';
cout<<"name: "<<c1<<c2<<c3<<c4<<c5<<endl;
int sum;
sum=static_cast<int>(c1)+static_cast<int>(c2)+static_cast<int>(c3)+static_cast<int>(c4)+static_cast<int>(c5);
cout<<"sum="<<sum<<endl;
if ((sum%2)==0)
cout<<"The ASCII sum of AHMED is Even."<<endl;
else
cout<<"The ASCII sum of AHMED is Odd."<<endl;
return 0;
}

