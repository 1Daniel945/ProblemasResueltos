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
    int t, n; cin in t;
    while(t--){
        cin in n;
        string s; 
        int x = 0;
        vector<string>vs(n + 1);
        fr(i, 1, n + 1){
            cin in s;
            if(s == "LEFT"){
                x -= 1;
                vs[i] = s;
            }
            else if(s == "RIGHT"){
                x += 1;
                vs[i] = s;
            }
            else if(s == "SAME"){
                string s2;
                int x1;
                cin in s2 in x1;
                string s1 = vs[x1];
                if(s1 == "LEFT"){
                    x -= 1;
                    vs[i] = s1;
                }
                if(s1 == "RIGHT"){
                    x += 1;
                    vs[i] = s1;
                }   
                
            }
        }
        cout p x p "\n";
    }
    return 0;
}