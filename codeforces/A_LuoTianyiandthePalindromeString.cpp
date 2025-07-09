#include <bits/stdc++.h>
typedef long long ll;
#define rt0 return 0;
#define wh(x)while(x--)
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define vi(v) vector<int>v; 
#define psi(t,x) for(pair<string,int>t:x)
#define yesNo(x,y) x==y?cout p "YES\n": cout p "NO\n";
#define fastio() ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){
    fastio();
    int t;cin in t;
    string s,s1;
    wh(t){
        cin in s;
        s1=s;
        reverse(s.begin(),s.end());
        int x=0;
        fr(i,0,s.size()-1){
            if(s.at(i)==s.at(i+1)){
                x++;
            }
        }
        if(x==(int)s.size()-1){
            cout p "-1\n";
        }
        else if(s1==s){
            cout p s.size()-1 p"\n";
        }
    }
    rt0;
}