#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	a=100;
	for(int i=0;i<899;i++){
		b=a%10;
		c=((a-b)/10)%10;
		d=((a-b-c*10)/10)%10;
		a++;
		if(b*1+c*7+d*7*7==b*1+c*9+d*9*9)
		break;
	}
	cout<<a<<endl;
	e=b*1+c*7+d*7*7;
	cout<<e<<endl;
	f=b*1+c*9+d*9*9;
	cout<<f<<endl;
	return 0;
}
