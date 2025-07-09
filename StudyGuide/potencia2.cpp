#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    fr(i,0,n)cin>>a[i];
    int x=0;
    fr(i,0,n){
        fr(j,0,n){
            if(i<j){
                //Condicion para ver si es una potencia de 2
                if(a[i]+a[j]&&(0==(a[i]+a[j]&(a[i]+a[j]-1))))x++;
            }
        }
    }
    cout << x << "\n";
    return 0;
}