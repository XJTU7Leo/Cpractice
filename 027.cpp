#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int L,R,count;
	cin>>L>>R;
	count=0;
	for(int i=L;i<=R;i++){
		for(int k=i;k>0;k/=10){
			if(k%10==2)
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
