#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int t[100];
int main(){
	int n;
	scanf("%d",&n);
	vector<int> s[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)s[i].push_back(i);
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			for(int k=j;k<j+2;k++){
				if()
			}
		}
	}
}