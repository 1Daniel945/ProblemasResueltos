#include <bits/stdc++.h>
//Never say "I can't" without trying
typedef long long ll;
typedef unsigned long long ull;
#define rt0 return 0;
#define wh(x)while(x--)
#define fi(x,n)for(int i=x; i<n; ++i)
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
    int n,k,s=0; cin>>n>>k;
    int a[n];
    fi(0,n){
        cin>>a[i];
        a[i]<0?a[i]=a[i]*-1:a[i]=a[i]*-1;
    }
    sort(a, a+n);
    fir(n,0){
        a[r]>0&&k>0?s+=a[r],k--:k;
    }
    cout p s p"\n";
    return 0;
}