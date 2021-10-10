#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int M,N,X,waste;
	cin>>M>>N>>X;
	for(int i=0;X>0;i++){
		if(M%N==0)
		waste=M/N;
		else
		waste=M/N+1;
		X=X-waste;
		if (X<0)
		break;
		N=N+M/N;
	}
	cout<<N<<endl;
	return 0;
}
