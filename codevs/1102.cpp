#include <bits/stdc++.h>
using namespace std;
int a[10000],b[10000],f[10000];
int main() {
    int t,n;
    cin>>t>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i]>>b[i];
    for(int i=1; i<=n; i++)
        for(int j=t; j>=a[i]; j--)
            f[j]=max(f[j-a[i]]+b[i],f[j]);
    cout<<f[t];
}
