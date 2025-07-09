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
    /*ofstream ar;
    ar.open("a.txt");*/
    while(cin in n in s){
        if(n == 0 && s == "0") break;
        int sz;
        if(n > 1) sz = ((n * 2) + 1) * (int)s.size();
        else sz = ((int)s.size() * 4);
        int sz1 = (n * 2) + 3;
        char mt[sz1][sz];
        memset(mt, ' ', sizeof(mt));
        int x = 0, y = 1, yorig = 0;
        fr(i, 0, s.size()){
            x = 0;
            if(s.at(i) == '0'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            fr(k, 0, 2){
                                mt[j][y] = '|';
                                y += n + 1;
                            }
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                fr(k, 0, 2){
                                    mt[j][y] = '|';
                                    y += n + 1;
                                }
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '1'){
                fr(j, 1, sz1 - 1){
                    y = yorig;
                    if(x < n){
                        y += n + 1;
                        mt[j][y] = '|';
                        x++;
                    }
                    else{
                        x++;
                        if(x > n && j != (int)(sz1 / 2)){
                            y += n + 1;
                            mt[j][y] = '|';
                        }
                    }
                }
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '2'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            y += n + 1;
                            mt[j][y] = '|';
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                mt[j][y] = '|';
                                y++;
                            }
                            else if(x > n && j == (int)(sz1 / 2)){
                                y++;
                                fr(l, 0, n){
                                    mt[j][y] = '-';
                                    y++;
                                }
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '3'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            y += n + 1;
                            mt[j][y] = '|';
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                y += n + 1;
                                mt[j][y] = '|';
                            }
                            else if(x > n && j == (int)(sz1 / 2)){
                                y++;
                                fr(l, 0, n){
                                    mt[j][y] = '-';
                                    y++;
                                }
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '4'){
                fr(j, 1, sz1 - 1){
                    y = yorig;
                    if(x < n){
                        fr(k, 0, 2){
                            mt[j][y] = '|';
                            y += n + 1;
                        }
                        x++;
                    }
                    else{
                        x++;
                        if(x > n && j != (int)(sz1 / 2)){
                            y += n + 1;
                            mt[j][y] = '|';
                        }
                        else if(x > n && j == (int)(sz1 / 2)){
                            y++;
                            fr(l, 0, n){
                                mt[j][y] = '-';
                                y++;
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '5'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            mt[j][y] = '|';
                            y ++;
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                y += n + 1;
                                mt[j][y] = '|';
                            }
                            else if(x > n && j == (int)(sz1 / 2)){
                                y++;
                                fr(l, 0, n){
                                    mt[j][y] = '-';
                                    y++;
                                }
                            }
                        }
                    }
                }
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '6'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            mt[j][y] = '|';
                            y++;
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                fr(k, 0, 2){
                                    mt[j][y] = '|';
                                    y += n + 1;
                                }
                            }
                            else if(x > n && j == (int)(sz1 / 2)){
                                y++;
                                fr(l, 0, n){
                                    mt[j][y] = '-';
                                    y++;
                                }
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '7'){
                fr(j, 0, sz1 - 1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            y += n + 1;
                            mt[j][y] = '|';
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                y += n + 1;
                                mt[j][y] = '|';
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '8'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            fr(k, 0, 2){
                                mt[j][y] = '|';
                                y += n + 1;
                            }
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                fr(k, 0, 2){
                                    mt[j][y] = '|';
                                    y += n + 1;
                                }
                            }
                            else if(x > n && j == (int)(sz1 / 2)){
                                y++;
                                fr(l, 0, n){
                                    mt[j][y] = '-';
                                    y++;
                                }
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
            else if(s.at(i) == '9'){
                fr(j, 0, sz1){
                    if(j == 0){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else if(j == sz1 - 1){
                        y = yorig + 1;
                        fr(k, 0, n){
                            mt[j][y] = '-';
                            y++;
                        }
                    }
                    else{
                        y = yorig;
                        if(x < n){
                            fr(k, 0, 2){
                                mt[j][y] = '|';
                                y += n + 1;
                            }
                            x++;
                        }
                        else{
                            x++;
                            if(x > n && j != (int)(sz1 / 2)){
                                y += n + 1;
                                mt[j][y] = '|';
                            }
                            else if(x > n && j == (int)(sz1 / 2)){
                                y++;
                                fr(l, 0, n){
                                    mt[j][y] = '-';
                                    y++;
                                }
                            }
                        }
                    }
                }  
                yorig += (n + 2 + 1);
                y = yorig;
            }
        }
        //Show display
        fr(i, 0, sz1){
            fr(j, 0, yorig - 1){
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
