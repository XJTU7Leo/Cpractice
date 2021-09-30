#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int num,a,sum,average;
	cin>>num;
	sum=0;
	for(int i=num;i>0;i--){
		cin>>a;
		sum=sum+a;
	}
	average=sum/num;
	cout<<sum<<" "<<average<<endl; 
	return 0;
}
