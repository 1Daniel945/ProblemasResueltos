#include <bits/stdc++.h>
#define fi(x,n) for(int i=x; i<n; ++i)
#define fn(x,n) for(int i=x; i<=n; ++i)
#define YesNo(x,n) x==n?cout<<"I become the guy.\n":cout<<"Oh, my keyboard!\n";
using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    map<int, int>mp;
    int ax[105];
    int ay[105];
    fn(1, n){
        mp[i]=0;
    }
    cin>>x;
    fi(0,x){
        cin>>ax[i];
        mp[ax[i]]++;
    }
    cin>>y;
    fi(0,y){
        cin>>ay[i];
        mp[ay[i]]++;
    }
    int t=0;
    for(pair<int,int>p: mp){
        if(p.second>0){
            t++;
        }
    }
    YesNo(t,n);
    return 0;
}