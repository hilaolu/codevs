#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
bool a[1000001];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)a[i]=1;
	if(n>=2)cout<<2<<endl;
	int tmp;
	for(int i=3;i<n;i+=2){
		if(a[i]){
			tmp=i;
			while(tmp<=n){
				a[tmp]=0;
				tmp+=i;
			}
			cout<<i<<endl;
		}
	}
	cin.get();
	cin.get();
	return 0;
}