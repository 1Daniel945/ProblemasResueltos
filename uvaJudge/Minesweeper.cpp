#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b);
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int n, m, x = 1, x1 = 1;
    vector<string>out;
    while(cin in n in m){
        if(n == 0 && m == 0) break;
        char mt[n][m];
        fr(i, 0, n){
            fr(j, 0, m){
                cin in mt[i][j];
            }
        }
        fr(i, 0, n){
            fr(j, 0, m){
                if(mt[i][j] == '*'){
                    //top left
                    if(i - 1 >= 0 && j - 1 >= 0){
                        if(mt[i - 1][j - 1] == '.'){
                            mt[i - 1][j - 1] = '1';
                        }
                        else if(mt[i - 1][j - 1] != '*'){
                            mt[i - 1][j - 1] += 1;
                        }
                    }
                    //Up
                    if(i - 1 >= 0){
                        if(mt[i - 1][j] == '.'){
                            mt[i - 1][j] = '1';
                        }
                        else if(mt[i - 1][j] != '*'){
                            mt[i - 1][j] += 1;
                        }
                    }
                    //top right
                    if(i - 1 >= 0 && j + 1 < m){
                        if(mt[i - 1][j + 1] == '.'){
                            mt[i - 1][j + 1] = '1';
                        }
                        else if(mt[i - 1][j + 1] != '*'){
                            mt[i - 1][j + 1] += 1;
                        }
                    }
                    //left
                    if(j - 1 >= 0){
                        if(mt[i][j - 1] == '.'){
                            mt[i][j - 1] = '1';
                        }
                        else if(mt[i][j - 1] != '*'){
                            mt[i][j - 1] += 1;
                        }
                    }
                    //right
                    if(j + 1 < m){
                        if(mt[i][j + 1] == '.'){
                            mt[i][j + 1] = '1';
                        }
                        else if(mt[i][j + 1] != '*'){
                            mt[i][j + 1] += 1;
                        }
                    }
                    //bottom left
                    if(i + 1 < n && j - 1 >= 0){
                        if(mt[i + 1][j - 1] == '.'){
                            mt[i + 1][j - 1] = '1';
                        }
                        else if(mt[i + 1][j - 1] != '*'){
                            mt[i + 1][j - 1] += 1;
                        }
                    }
                    //bottom
                    if(i + 1 < n){
                        if(mt[i + 1][j] == '.'){
                            mt[i + 1][j] = '1';
                        }
                        else if(mt[i + 1][j] != '*'){
                            mt[i + 1][j] += 1;
                        }
                    }
                    //bottom right
                    if(i + 1 < n && j + 1 < m){
                        if(mt[i + 1][j + 1] == '.'){
                            mt[i + 1][j + 1] = '1';
                        }
                        else if(mt[i + 1][j + 1] != '*'){
                            mt[i + 1][j + 1] += 1;
                        }
                    }
                }
            }
        }
        out.push_back("1");
        fr(i, 0, n){
            string s = "";
            fr(j, 0, m){
                if(mt[i][j] == '.') mt[i][j] = '0';
                s += mt[i][j];
            }
            s += "$";
            out.push_back(s);
        }
        out.push_back("End");
        x++;
    }
    fr(i, 0, out.size()){
        if(out[i] == "1"){
            cout p "Field #" p x1 p ":\n";
            x1++;
        }
        else if(out[i] != "End"){   
            fr(j, 0, out[i].size()){
                if(out[i][j] == '$') cout p "\n";
                else cout p out[i][j];
            }
        }
        else{
            if(x1 < x) cout p "\n";
        }
    }
}

int main(){
    fast_io
    solve();
    return 0; 
}