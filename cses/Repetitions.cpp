#include <bits/stdc++.h>
#define fr(i,x,n)for(ll i=x; i<(ll)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    string s;
    cin in s;
    int mx = 1;
    int a = 0, b = 0, c = 0, d = 0;
    fr(i, 0, s.size()){
        if(s.at(i) == 'A'){
            if(i + 1 < (int) s.size()){
                while (s.at(i) == 'A'){
                    a++;
                    if(i + 1 < (int) s.size()){
                        i++;
                    }
                    else break;
                }
            }
            mx = max({a, b, c, d, mx});
            a = 0;   
        }
        if(s.at(i) == 'C'){
            if(i + 1 < (int) s.size()){
                while (s.at(i) == 'C'){
                    b++;
                    if(i + 1 < (int) s.size()){
                        i++;
                    }
                    else break;
                }
            }
            mx = max({a, b, c, d, mx});
            b = 0;   
        }
        if(s.at(i) == 'G'){
            if(i + 1 < (int) s.size()){
                while (s.at(i) == 'G'){
                    c++;
                    if(i + 1 < (int) s.size()){
                        i++;
                    }
                    else break;
                }
            }
            mx = max({a, b, c, d, mx});
            c = 0;   
        }
        if(s.at(i) == 'T'){
            if(i + 1 < (int) s.size()){
                while (s.at(i) == 'T'){
                    d++;
                    if(i + 1 < (int) s.size()){
                        i++;
                    }
                    else break;
                }
            }
            mx = max({a, b, c, d, mx});
            d = 0;   
        }
    }
    cout p mx p "\n";
    return 0;
}