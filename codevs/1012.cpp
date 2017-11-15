#include<iostream>
#include<cstdio>
using namespace std;
int jc(int k){
	int ans=1;
	while(k>1){
		ans*=k;
		k--;
	}
	return ans;
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(!(y%x==0)){
		cout<<0;
		return 0;
	}
	int p=y/x,c=0,root;
	int rest=p;
	if(rest%2==0){
		while(rest%2==0)rest/=2;
		c++;
	}
	for(int i=3;rest!=1;i+=2){
		if(rest%i==0){
			while(rest%i==0)rest/=i;
			c++;
		}
	}
	int t=0;
	for(int i=0;i<=c;i++)t+=jc(c)/jc(c-i)/jc(i);
	cout<<t;
	return 0;
}