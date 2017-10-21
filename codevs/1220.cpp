#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int t[100];
int main(){
	int n,tmp;
	scanf("%d",&n);
	vector<int> s[100];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			scanf("%d",&tmp);
			s[i].push_back(tmp);
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0){
				s[i][0]= s[i - 1][0] + s[i][0];
				continue;
			}
			if (j == i) {
				s[i][i] = s[i - 1][i-1] + s[i][i];
				continue;
			}
			s[i][j]=(s[i-1][j-1]>s[i-1][j])?s[i-1][j - 1]+ s[i][j]: s[i-1][j] + s[i][j];
		}
	}
	sort(s[n-1].begin(),s[n-1].end());
	cout<<s[n-1][n-1];
	cin.get();
	cin.get();
	return 0;
}