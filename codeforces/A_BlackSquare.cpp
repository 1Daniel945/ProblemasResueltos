#include <bits/stdc++.h>
typedef long long ll;
#define rt0 return 0;
#define wh(x)while(x--)
#define fi(x,n)for(int i=x; i<(int)n; ++i)
#define fj(x,n)for(int j=x; j<n; ++j)
#define fk(x)for(int k=0; k<x; ++k)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define vi(v) vector<int>v; 
#define psi(t,x) for(pair<string,int>t:x)
#define yesNo(x,y) x==y?cout p "YES\n": cout p "NO\n";
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){
    fastio();
    int a[4];
    fi(0,4)cin in a[i];
    string s;cin in s;
    int sm=0;
    fi(0,s.size()){
        sm+=a[(s.at(i)-'0')-1];
    }
    cout p sm p "\n";
    rt0;
}