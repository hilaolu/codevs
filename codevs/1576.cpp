#include<iostream>
#include<cstdio>
using namespace std;
int a[101];
int c[101];
int find(int len,int k){
	int mid,left=1,right=len;
	while(left<=right){
		mid=(left+right)/2;
		if(c[mid]==k)return mid;
		if(c[mid]>k){right=mid-1;continue;}
		if(c[mid]<k){left=mid+1;continue;}
	}
	return mid;
}
int main(){
	int n,len=1,p;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	c[1]=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>c[len]){
			len++;
			c[len]=a[i];
		}else{
			p=find(len,a[i]);
			c[p]=a[i];
		}
	}
	cout<<len;
	return 0;
}

	