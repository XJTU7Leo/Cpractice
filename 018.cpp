#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,MAXa,MINa,a,longth;
	cin>>n;
	MAXa=0;
	MINa=2000;
	for(int i=n;i>0;--i){
		cin>>a;
		if (a>=MAXa)
		MAXa=a;
		if (a<=MINa)
		MINa=a;
	}
	longth=MAXa-MINa;
	cout<<longth<<endl;
	return 0;
}
