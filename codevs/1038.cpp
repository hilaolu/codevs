#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iomanip>
using namespace std;
int a,b,c,d;
double eq(double x){
	return a*x*x*x+b*x*x+c*x+d;
	}
int main(){
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int r[3],n=-1;
	for(double i=-100;i<100;i+=0.5){	
		if(eq(i)*eq(i+0.5)<0){
			n++;
			
}