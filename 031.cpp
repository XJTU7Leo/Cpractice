#include<iostream>
using namespace std;
int main()
{
	int L,M,num=0,a,b;
	cin>>L>>M;
	int t[L+1]= {0};
	for(int i=1;i<=M;i++) {
		cin>>a>>b;
		for(int j=a; j<=b; j++)
		t[j]=1;
	}
	for(int i=0; i<=L; i++) {
	if(t[i]==0)num++;
	}
	cout<<num<<endl;
	return 0;
}
