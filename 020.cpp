#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,n,x;
	cin>>a>>n;
	x=1;
	for(int i=n;i>0;i--){
		x=x*a;
	}
	cout<<x<<endl;
}
