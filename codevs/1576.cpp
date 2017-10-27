#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int s[5000],a[5000],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&s[i]);
	for(int i=0;i<n;i++)a[i]=1;
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(s[j]<s[i])a[i]=(a[j]+1>a[i])?a[j]+1:a[i];
		}
	}
	cout<<a[n-1];
	return 0;
}
	