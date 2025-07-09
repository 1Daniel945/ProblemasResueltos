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
        map<char, int>mp;
        vector<int>v;
        int x = 0;
        fr(i, 0, s.size()){
            if(v.size() == 0){
                v.push_back(s[i]);
            }
            //no esta el caracter
            if(find(v.begin(), v.end(), s[i]) != v.end()){
                continue;
            }
            else{
                v.push_back(s[i]);
                if(v.size() > 3){
                    int e = v.back();
                    v.clear();
                    v.push_back(e);
                    x++;
                }
            }
        }
        if(v.size() > 0)x++;
        cout p x p "\n";
    }
    return 0;
}