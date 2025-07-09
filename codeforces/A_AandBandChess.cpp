#include <bits/stdc++.h>
#define fr(i, x, n) for (int i = x; i < (int)n; ++i)
#define fi(i, x, n) for (int i = n - 1; i >= x; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for (pair<a, b> t : x)
#define vp(x) vector<pair<char, int>> x;
#define v(x, d) vector<d> x;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define mst(a, b) memset(a, b, sizeof(a));
typedef long long ll;
using namespace std;

int main() {
    fastio()
    int x=0,x1=0;
    char c;
    fr(i,0,64){
        cin in c;
        if(c=='q')x+=9;
        if(c=='r')x+=5;
        if(c=='b')x+=3;
        if(c=='n')x+=3;
        if(c=='p')x+=1;
        if(c=='Q')x1+=9;
        if(c=='R')x1+=5;
        if(c=='B')x1+=3;
        if(c=='N')x1+=3;
        if(c=='P')x1+=1;
    }
    if(x>x1)cout p "Black\n";
    else if(x<x1)cout p "White\n";
    else cout p "Draw\n";
    return 0;
}