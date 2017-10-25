#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int t[100][100],s[100][100];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		t[0][i]=0;
		scanf("%d",&s[0][i]);
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			s[i][j]=s[i-1][j]+s[0][(j+i)%n];
		}
	}
	int mt;
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			mt=9999999;
			for(int k=0;k<i;k++){
				mt=(mt<t[k][j]+t[i-k-1][(j+k+1)%n])?mt:t[k][j]+t[i-k-1][(j+k+1)%n];
			}
			t[i][j]=mt+s[i][j];
		}
	}
	sort(t[n-1],t[n-1]+n);
	cout<<t[n-1][0]<<endl;
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			mt=0;
			for(int k=0;k<i;k++){
				mt=(mt>t[k][j]+t[i-k-1][(j+k+1)%n])?mt:t[k][j]+t[i-k-1][(j+k+1)%n];
			}
			t[i][j]=mt+s[i][j];
		}
	}
	sort(t[n-1],t[n-1]+n);
	cout<<t[n-1][n-1];
	cin.get();
	cin.get();
	return 0;
}