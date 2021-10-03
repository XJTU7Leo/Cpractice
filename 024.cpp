#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,y=0;
	cin>>n;
	for(;n!=0;){
		y*=10;
		y+=n%10;
		n=n/10;
	}
	cout<<y<<endl;
	return 0;
}
