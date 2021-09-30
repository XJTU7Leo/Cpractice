#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,x1,x2,SHI,XU;
	scanf("%lf%lf%lf",&a,&b,&c);
	x1=(-b + sqrt(b*b-4*a*c))/(2*a);
	x2=(-b - sqrt(b*b-4*a*c))/(2*a);
	if (b*b==4*a*c)
		printf("x1=x2=%.5f",x1);
	else if (b*b>4*a*c)
		printf("x1=%.5f;x2=%.5f",x1,x2);
	else 
		{
			SHI=-b/(2*a);
			XU=sqrt(4*a*c-b*b)/(2*a);
			if (b==0)
			{
				SHI=b;
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",SHI,XU,SHI,XU);
			}
			else 
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",SHI,XU,SHI,XU);
		}
	return 0;
}
