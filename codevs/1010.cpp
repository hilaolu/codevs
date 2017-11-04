#include<iostream>
using namespace std;
int ma[30][30],s[30][30];
int main(){
	int bx,by,mx,my;
	cin>>bx>>by>>mx>>my;
	bx+=2;by+=2;mx+=2;my+=2;
	ma[mx+2][my-1]=1;
	ma[mx+2][my+1]=1;
	ma[mx+1][my-2]=1;
	ma[mx+1][my+2]=1;
	ma[mx-2][my+1]=1;
	ma[mx-2][my-1]=1;
	ma[mx-1][my+2]=1;
	ma[mx-1][my-2]=1;
	ma[mx][my]=1;
	s[2][1]=1;
	cout<<endl;
	for(int i=2;i<=bx;i++){
		for(int j=2;j<=by;j++){
			if(!ma[i][j])s[i][j]=s[i-1][j]+s[i][j-1];
		}
	}
	cout<<s[bx][by];
	return 0;
}