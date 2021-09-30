#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int day,Au,Ag,Cu,total;
	int jin,yin,tong;
	cin>>day;
	jin=0;
	yin=0;
	tong=0;
	for(int i=day;i>0;i--){
		cin>>Au>>Ag>>Cu;
		jin=jin+Au;
		yin=yin+Ag;
		tong=tong+Cu;
	}
	total=jin+yin+tong;
	cout<<jin<<" "<<yin<<" "<<tong<<" "<<total<<endl;
	return 0;
}
