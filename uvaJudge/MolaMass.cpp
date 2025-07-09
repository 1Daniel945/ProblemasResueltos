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

void solve(){
    int t; cin in t;
    string s, s1;
    double x = 0, out = 0;
    char a = '#';
    while(t--){
        cin in s;
        s1 = "";
        fr(i, 0, s.size()){
            if(a == '#' && (s.at(i) == 'C' || s.at(i) == 'H' || s.at(i) == 'O' || s.at(i) == 'N')){
                a = s.at(i);
            }
            else if(s.at(i) >= 48 && s.at(i) <= 57){
                s1 += s.at(i);
            }
            else if(s.at(i) != a || s.at(i) == a){
                if(!s1.empty()){
                    x = stoi(s1);
                    if(a == 'C') out += x * 12.01;
                    else if(a == 'H') out += x * 1.008;
                    else if(a == 'O') out += x * 16.00;
                    else if(a == 'N') out += x * 14.01;
                }
                else{
                    if(a == 'C') out += 12.01;
                    else if(a == 'H') out += 1.008;
                    else if(a == 'O') out += 16.00;
                    else if(a == 'N') out += 14.01;
                }
                s1 = "";
                a = s.at(i);
            }
        }
        if(!s1.empty()){
            x = stoi(s1);
            if(a == 'C') out += x * 12.01;
            else if(a == 'H') out += x * 1.008;
            else if(a == 'O') out += x * 16.00;
            else if(a == 'N') out += x * 14.01;
        }
        else{
            if(a == 'C') out += 12.01;
            else if(a == 'H') out += 1.008;
            else if(a == 'O') out += 16.00;
            else if(a == 'N') out += 14.01;
        }
        cout p fixed p setprecision(3) p out p "\n";
        out = 0, x = 0;
        a = '#';
    }
}

int main(){
    fastio
    solve();
    return 0;
}