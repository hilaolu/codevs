#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int *s=new int[n];
	for(int i=0;i<n;i++)scanf("%d",&s[i]);
	sort(s,s+n);
	int d,ans,total=1,k;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans=2;
			d=s[j]-s[i];
			k=j+1;
			while(k<n){
				if(s[k]-s[i]==ans*d){ans++;k++;continue;}
				if(s[k]-s[i]>ans*d)break;
				k++;
			}
			total=max(ans,total);
		}
	}
	cout<<total;
	return 0;
}