#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,ss,sz,time,maxhour;
	cin>>n;
	time=0;
	maxhour=0;
	for(int i=0;i<n;i++){
		cin>>ss>>sz;
		if (ss>=90 && ss<=140 && sz>=60 && sz<=90)
		time++;
		else
		time=0;
		if (time>maxhour)
		maxhour=time;
	}
	cout<<maxhour<<endl;
	return 0;
}
