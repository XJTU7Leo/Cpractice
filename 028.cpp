#include<iostream>
#include<cstdio>
using namespace std;
#define Max_Num 110
int a[Max_Num];
int main()
{
	int N,m,count;
	cin>>N;
	count=0;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<N;i++){
		if(a[i]==m)
		count++;
	}
	cout<<count<<endl;
	return 0;
}
