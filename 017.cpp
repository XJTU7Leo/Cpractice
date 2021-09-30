#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int num,i,a,sum;
	double average; 
	cin>>num;
	i=num;
	sum=0;
	while(i>0){
		i--;
		cin>>a;
		sum=sum+a;
	}
	average=(double)sum/num;
	printf("%d %.5f",sum,average);
	return 0;
}
