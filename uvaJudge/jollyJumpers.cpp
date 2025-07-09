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
#define grt greater<int>()
typedef long long ll;
using namespace std;

int main(){
    int n;
    cout p INT_MAX p "\n";
    while (cin in n){
        vector<int>a(n),x;
        fr(i, 0, n){
            cin in a[i];
        }
        fr(i, 0, n - 1){
            x.push_back(abs(a[i] - a[i + 1]));
        }
        bool t = 0;
        sort(x.begin(), x.end());
        fr(i, 0, x.size()){
            if(x[i] != i + 1){
                t=1;
                break;
            }
        }
        if(t == 0)cout p "Jolly\n";
        else cout p "Not jolly\n";
    }
    return 0;
}