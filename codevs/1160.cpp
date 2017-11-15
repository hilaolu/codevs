#include<iostream>
using namespace std;
int s[101][101];
int main(){
	int n;
	cin>>n;
	int core=(n+1)/2-1;
	s[core][core]=1;
	int count=1;
	int x=core,y=core;
	for(int i=2;i<=core+1;i++){
		//right
		while(x<core+i-1){
			x++;
			count++;
			s[x][y]=count;
		}
		//up
		while(y<core+i-1){
			y++;
			count++;
			s[x][y]=count;
		}
		//left
		while(x>core-i+1){
			x--;
			count++;
			s[x][y]=count;
		}
		//down
		while(y>core-i+1){
			y--;
			count++;
			s[x][y]=count;
		}
		//right
		while(x<core+i-1){
			x++;
			count++;
			s[x][y]=count;
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++)cout<<s[j][i]<<" ";
		cout<<endl;
	}
	count=0;
	for(int i=0;i<n;i++){
		count+=s[i][i];
		count+=s[n-i-1][i];
	}
	cout<<count-1;
	return 0;
}