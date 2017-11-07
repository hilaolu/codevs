#include<iostream>
using namespace std;
int ef(int s[],int k,int len){
	int mid=len/2,l=0,r=len;
	while(true){
		if(s[mid]>k){
			r=mid-1;
			mid=(l+r)/2;
			continue;
		}
		if(s[mid]<k){
			l=mid+1;
			mid=(l+r)/2;
			continue;
		}
		break;
	}
	return mid;
}
int main(){
	int n,a,b,d,e;
	cin>>n;
	int *s=new int[n];
	int *f=new int[n];
	int *c=new int[n];
	for(int i=0;i<n;i++)cin>>s[i];
	f[0]=1;c[1]=s[0];a=1;
	for(int i=1;i<n;i++){