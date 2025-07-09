#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],s=1,mn=0;
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        mn=a[0];
        for(int i=0; i<n; ++i){
            if(a[i]<mn){
                mn=a[i];
            }
        }
        for(int i=0; i<n; ++i){
            if(a[i]==mn){
                a[i]=a[i]+1;
                break;
            }
        }
        for(int i=0; i<n; ++i){
            s*=a[i];
        }
        cout<<s<<"\n";
    }
    return 0;
}