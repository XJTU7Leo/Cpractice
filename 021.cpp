#include<iostream>
#include<cstdio>
using namespace std;
#define MAX_NUM 30
double percent[MAX_NUM];
int main()
{
	double n,total,work,jiweijiu;
	cin>>n;
	cin>>total>>work;
	jiweijiu=work/total;
	for(int i=0;i<n-1;++i){
		cin>>total>>work;
		percent[i]=work/total;
	}
	for(int i=0;i<n-1;++i){
		if(jiweijiu-percent[i]>0.05)
		cout<<"worse"<<endl;
		else if(percent[i]-jiweijiu>0.05)
		cout<<"better"<<endl;
		else
		cout<<"same"<<endl;
	}
	return 0;
}
