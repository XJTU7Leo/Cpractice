#include<iostream>
#include<cstdio>
using namespace std;
#define Max_Num 110
int age[Max_Num];
int main()
{
	double n,a=0,b=0,c=0,d=0;
	double A,B,C,D;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>age[i];
	}
	for(int i=0;i<n;i++){
		if(age[i]<=18)
		a++;
		if(age[i]>=19 && age[i]<=35)
		b++;
		if(age[i]>=36 && age[i]<=60)
		c++;
		if(age[i]>=61)
		d++;
	}
	A=100*(a/n);
	B=100*(b/n);
	C=100*(c/n);
	D=100*(d/n);
	printf("%.2f%\n",A);
	printf("%.2f%\n",B);
	printf("%.2f%\n",C);
	printf("%.2f%\n",D);	
	return 0;
}
