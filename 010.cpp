#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double r,V,a;
	scanf("%lf",&r);
	a=pow(r,3);
	V=4*3.14*a/3;
	printf("%.2lf",V);
	return 0;
}
