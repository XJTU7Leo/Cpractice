#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	if (y%x && y%x<=y/2)
		n=n-(y/x)-1;
	else
		n=n-(y/x);
	if (n<0)
		{
		n=0;
		cout<<n<<endl;
		}
	else
		cout<<n<<endl;
	return 0;
}
