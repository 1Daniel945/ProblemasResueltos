#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
typedef long long ll;
using namespace std;

//DHASIA WEZKA QUEEN
pair<char, int>x, x1;

// All possible moves of a knight
int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void bfs(int x, int y){
    priority_queue<pair<int, int>>pq;
    
}

int main(){
    fastio
    while(cin in x.f in x.s in x1.f in x1.s){
        int a = x.f - 'a';
        x.s -= 1;
        int b = x1.f - 'a';
        x1.s -= 1;
        bfs(a, x.s);
    }
    return 0;
}