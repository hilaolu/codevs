#include<iostream>
#include<stdio.h>
using namespace std;
int a[20001],s[30];
int main(){
	int t,n;
	scanf("%d%d",&t,&n);
	for(int i=0;i<n;i++)scanf("%d",&s[i]);
	for(int i=0;i<n;i++)
		for(int j=t;j>=s[i];j--)
			a[j]=(a[j-s[i]]+s[i]>a[j])?a[j-s[i]]+s[i]:a[j];
	cout<<t-a[t];
}
