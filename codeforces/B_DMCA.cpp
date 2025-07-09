#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    string s;
    cin in s;
    int sm = 0;
    fr(i, 0, s.size()){
        sm += s.at(i) - '0';
    }
    if(to_string(sm).size() == 1) cout p sm p "\n";
    else{
        string s1 = to_string(sm);
        while(s1.size() > 1){
            int sm1 = 0;
            fr(i, 0, s1.size()){
                sm1 += s1.at(i) - '0';
            }       
            s1 = to_string(sm1);
        }
        cout p s1 p "\n";
    }
    return 0;   
}