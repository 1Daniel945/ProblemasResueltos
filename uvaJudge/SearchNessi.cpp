#include<bits/stdc++.h>
#define fr(i,a,b) for(int i=a; i<(int)b; ++i)
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define in >>
#define p <<
using namespace std;

int main(){
    fastio()
    int t,n,m;cin in t;
    while (t--){
        cin in n in m;
        n-=2,m-=2;
        int sr=n/3;
        int sc=m/3;
        if(n%3!=0){
            sr++;
        }
        if(m%3!=0){
            sc++;
        }
        cout p sr*sc p "\n";
    }
    return 0;
}
