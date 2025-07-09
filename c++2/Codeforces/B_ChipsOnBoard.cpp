#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int mt[n][n];
        int a[n],b[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        for(int i=0; i<n; ++i){
            cin>>b[i];
        }
        int v[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mt[i][j]=a[i]+b[j];
            }
        }
        int s=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mt[i][j]=a[i]+b[j];
            }
            v[i]=s;
            s=0;
        }
        int m=v[0];
        for(int i=0; i<n; ++i){
            if(v[i]<m){
                m=v[i];
            }
        }
        cout<<m<<"\n";
    }
    return 0;
}