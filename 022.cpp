#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long N;
	cin>>N;
	if(N==1)
	cout<<"End"<<endl;
	else {
	for(long long i=2;i>1;){
		if(N%2==1){
			i=N*3+1;
			cout<<N<<"*3+1="<<i<<endl;
			N=i; 
		}
		else{
			i=N/2;
			cout<<N<<"/2="<<i<<endl;
			N=i;
		}
	}
	cout<<"End"<<endl;
    }
	return 0;
 } 
