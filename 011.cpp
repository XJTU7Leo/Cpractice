#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h,r,V,num,y;
	cin>>h>>r;
	V=3.14159*r*r*h;
	num=20*1000;
	y=num%V;
	if (y=0)
		{
		num=num/V;
		cout<<num<<endl;
	}
	else
	{ 
		num=num/V+1;
		cout<<num<<endl;
	}
	return 0;
 } 
