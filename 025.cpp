#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,m,shi,qi,jiu;
	for(a=1;a<7;a++)
		for(b=0;b<7;b++)
			for(c=0;c<7;c++)
				if(c*49+b*7+a==a*81+b*9+c){
					shi=c*49+b*7+a;
					qi=c*100+b*10+a;
					jiu=a*100+b*10+c;
					break;
				}
	cout<<shi<<endl;
	cout<<qi<<endl;
	cout<<jiu<<endl;
	return 0;
}
