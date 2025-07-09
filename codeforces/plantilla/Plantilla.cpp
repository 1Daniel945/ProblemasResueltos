#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

int x [] = {-1, -1, -1, 0, 0, +1, +1, +1};
int y [] = {-1, 0, +1, -1, +1, -1, 0, +1};

int t, n, m, k;

void bfs(string s, int a, int b){
    queue<pair<int, int>>q;
    q.push({a, b});
    int out = 0;
    pair<int, int>pii;
    while(!q.empty()){
        pair<int, int>current;
        current = q.front();
        q.pop();
        fr(i, 0, 8){
            if(current.ff + x[i] < n && current.ss + y[i] < m){
                             
            }
        }
        if(out == s.size()){
            cout p pii.ff p " " p pii.ss p "\n";
        }   
    }   
}

void solve(){
    string s;
    cin in t;
    while(t--){
        cin in n in m;
        char mt[n][m];
        fr(i, 0, n){
            fr(j, 0, m){
                cin in mt[i][j];
            }
        }
        cin in k;
        fr(i, 0, k){
            cin in s;
            fr(i, 0, k){
                cin in s;
                //recorrer el string
                fr(j, 0, s.size()){
                    //Recorrer la matriz buscando la primera incidencia
                    int first = 0;
                    fr(k, 0, n){
                        fr(l, 0, m){
                            if(mt[k][l] == s.at(j)){
                                //call bfs
                                bfs(s, k, l);
                            }
                        }
                    }
                }
            }                      
        }
    }
}

int main() {
    fast_io
    solve();
    return 0;
}


/*void solve(){
    int t; cin in t;
    string s;
    while(t--){
        cin in s;
        int x = cAll(s, 'b');
        int y = cAll(s, 'B');
        if(x + y == (int)s.size()){
            cout p "\n";
        }
        else{
            vector<int>upp, low;
            if(x > 0 || y > 0){
                string out = "";
                bool isT = 0;
                fr(i, 0, s.size()){
                    if(s.at(i) != 'b' && s.at(i) != 'B'){
                        if(s.at(i) >= 65 && s.at(i) <= 90){
                            upp.push_back(i);
                        }
                        else low.push_back(i);
                        out += s.at(i);
                    }
                    else{
                        if(s.at(i) == 'b'){
                            if(low.size() > 0){
                                if(isT == 0){
                                    out.erase(low[low.size() - 1], 1);
                                    isT = 1;
                                }   
                                else{ 
                                    out.erase(low[low.size() - 1] - 1, 1);
                                }
                            }
                        }
                        if(s.at(i) == 'B'){
                            if(upp.size() > 0){
                                if(isT == 0){
                                    out.erase(upp[upp.size() - 1], 1);
                                    isT = 1;
                                }
                                else out.erase(upp[upp.size() - 1] - 1, 1);
                            }
                        }
                    }
                }
                cout p out p "\n";
            }
        }
    }
}
*/
