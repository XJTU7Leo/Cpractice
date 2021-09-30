#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,d;
	char c;
	cin>>a>>b>>c;
	if (c != '+' && c != '-' && c != '*' && c != '/')
		cout<<"Invalid operator!"<<endl;
	    else if (c=='+')
		{
		d=a+b;
		cout<<d<<endl;
	    }
	  else if (c=='-')
		{
		d=a-b;
		cout<<d<<endl;
	    }
	  else if (c=='*')
		{
		d=a*b;
		cout<<d<<endl;
	    }
		else if (c=='/')
			if (b==0)
			cout<<"Divided by zero!"<<endl;
			else
				{
				d=a/b;
				cout<<d<<endl;
			}
	return 0;
 } 
