#include<iostream>
#include<cstdio>
using namespace std;
#define Max_Num 20
int high[Max_Num];
int main()
{
	int ren,zong,count;
	count=0;
	for(int i=0;i<10;i++){
		cin>>high[i];
	}
	cin>>ren;
	zong=ren+30;
	for(int i=0;i<10;i++){
		if(zong>=high[i])
		count++;
	}
	cout<<count<<endl;
	return 0;
}
