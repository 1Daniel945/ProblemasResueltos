#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n; string s;
    vector<int>x = {0, 1, 1, 3, 3, 4, 1, 3, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 1, 1, 2, 3, 0, 1, 2, 3, 4, 0, 1, 2, 3, 3, 4, 0, 1, 3, 0, 1, 2, 1, 3, 3, 4, 0, 1, 2, 1, 3, 4};
    vector<int>y = {1, 0, 2, 0, 2, 1, 2, 2, 1, 2, 1, 0, 1, 1, 2, 1, 2, 1, 0, 2, 1, 2, 1, 0, 1, 2, 1, 1, 0, 1, 0, 2, 1, 1, 2, 2, 1, 0, 1, 2, 0, 2, 1, 1, 0, 1, 2, 2, 1};
    while(cin in n in s){
        if(n == 0 && s == "0") break;
        int sz = (4 * (int) s.size()) + n;
        char mt[5 + n][sz];
        memset(mt, ' ', sizeof(mt));
        int a = 0, b = 0, aH = 0;
        vector<bool> isT(10, 0);
        fr(k, 0, s.size()){
            if(s.at(k) == '0'){
                fr(i, 0, 6){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }   
                    else{
                        mt[b + x[i]][a + y[i]] = '|'; 
                    }
                }
                a += 4;
            }
            else if(s.at(k) == '1'){
                fr(i, 6, 8){
                    mt[x[i]][a + y[i]] = '|';    
                }
                a += 4;
            }
            else if(s.at(k) == '2'){
                fr(i, 8, 13){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '3'){
                fr(i, 13, 18){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '4'){
                fr(i, 18, 22){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '5'){
                fr(i, 22, 27){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '6'){
                fr(i, 27, 33){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '7'){
                fr(i, 33, 36){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '8'){
                fr(i, 36, 43){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
            else if(s.at(k) == '9'){
                fr(i, 43, 49){
                    if(x[i] % 2 == 0){
                        mt[x[i]][a + y[i]] = '-';
                    }
                    else{ 
                        mt[x[i]][a + y[i]] = '|';
                    }    
                }
                a += 4;
            }
        }
        fr(i, 0, 5 + n){
            fr(j, 0, sz){
                cout p mt[i][j];
            }
            cout p "\n";
        }
        cout p "\n";
    }
}

int main(){
    fastio
    solve();
    return 0;
}
