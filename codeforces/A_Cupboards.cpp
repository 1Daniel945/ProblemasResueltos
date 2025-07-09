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

void solve(){ 
    int n; cin in n;
    vector<int>l(n), r(n);
    int l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    fr(i, 0, n){
        cin in l[i] in r[i];
        l[i] == 0 ? l0++ : l1++;
        r[i] == 0 ? r0++ : r1++;
    }
    int x = 0;
    bool isOnel = l1 > l0 ? 1 : 0;
    bool isOneR = r1 > r0 ? 1 : 0; 
    fr(i, 0, n){
        isOnel == 1 && l[i] != 1 ? x++ : isOnel == 0 && l[i] != 0 ? x++ : x;
        isOneR == 1 && r[i] != 1 ? x++ : isOneR == 0 && r[i] != 0 ? x++ : x;
    }
    cout p x p "\n";
} 
        
int main(){ 
    fast_io 
    solve(); 
    return 0; 
}

/*
string s; cin in s;
    string s1, s2;
    s1 = "abcdefghijklmnopqrstuvwxyz";
    s2 = "zyxwvutsrqpomnlkjihgfedcba";
    char op = '$';
    int x = 0;
    fr(i, 0, s.size()){
        cout p x p "\n";
        int a = s1.find(s[i]);
        int b = s2.find(s[i]);
        if(op == '$' && b < a){
            x += b;
            x++;
            op = 'b';
        }
        else if(op == '$' && a <= b){
            x += a;
            op = 'a';
        }
        else{
            if(op == 'a' && a < b){
                x += a + x;
                op = 'a';
            }
            else if(op == 'a' && b < a){
                x += b + 1;
                op = 'b';
            }
            else if(op == 'b' && b < a){
                x += b + (b - x) + 1;
                op = 'b';
            }
            else if(op == 'b' && a < b){
                x += x + a + 1;
                op = 'a';
            }
        }
    }
    cout p x p "\n";
*/