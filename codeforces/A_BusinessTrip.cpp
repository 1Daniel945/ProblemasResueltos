#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=(int)n; --i)
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
    fastio();
    int k; cin in k;
    int a[12];
    fr(i,0,12){
        cin in a[i];
    }
    sort(a,a+12);
    int x=0,s=0;
    if(k==0)cout p "0\n";
    else{
        fi(i,12,0){
            s+=a[i];
            x++;
            if(s>=k){
                break;
            }
        }
        if(s>=k)cout p x p "\n";
        else cout p "-1\n";
    }
    return 0;
}