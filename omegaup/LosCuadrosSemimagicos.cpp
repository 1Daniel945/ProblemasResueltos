#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define grt greater<int>()
typedef long long ll;
using namespace std;

int main(){
    fastio
    int n; cin in n;
    int mt[n][n];
    //Sumar filas ->
    vector<int>sm;
    int sg = 0, sg1 = 0; 
    int x = 0, y = n - 1;
    fr(i, 0, n){
        fr(j, 0, n){
            cin in mt[i][j];
        }
    }
    fr(i,0,n){
        int s = 0, s1 = 0;
        fr(j,0,n){
        s += mt[i][j];
            s1 += mt[j][i];
            //Diagonal principal
            if(i == j) sg += mt[i][j];
            //Diagonal secundaria
            if(i == x && j == y) sg1 += mt[i][j];
        }
        x++;
        y--;
        sm.push_back(s);
        sm.push_back(s1);
    }
    sm.push_back(sg);
    sm.push_back(sg1);
    int f = sm[0];
    if(count(sm.begin(), sm.end(), f) == (int) sm.size()){
        cout p "1\n";
    }
    else cout p "0\n";
    return 0;
}