#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
    fastio
    int t; cin in t;
    string s;
    while(t--){
        cin in s;
        if(s.size() > 2){
            if(s.at(0) == '1' && s.at(1) == '0'){
                string s2 = "";
                fr(i, 2, s.size()){
                    s2 += s.at(i);
                }
                if(s2.at(0) == '0') cout p "NO\n";
                else if(stoi(s2) >= 2){
                    cout p "YES\n";
                }
                else cout p "NO\n";
            }
            else cout p "NO\n";
        }
        else{
            cout p "NO\n";
        }
    }
    return 0;
}