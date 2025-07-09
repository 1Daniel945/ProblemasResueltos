#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fri(i,x,n,increment)for(int i=x; i<(int)n; i+=increment)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x,a,b) vector<pair<a,b>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    int t; cin in t;
    string s,s1;
    while (t--){
        cin in s;
        s1=s.at(0);
        s1+=s.at(1);
        int x=stoi(s1);
        x=x%12;
        string s2="";
        if(x==10){
            s2="10:";
            s2+=s.at(3);
            s2+=s.at(4);
            s2+=" PM";
        }
        else if(x==11){
            s2="11:";
            s2+=s.at(3);
            s2+=s.at(4);
            s2+=" PM";
        }
        else if(x>0)s2+="0" + to_string(x) + ":" + s.at(3) + s.at(4) +" PM";
        else s2+=s +" PM";
        if(s.at(0)=='0'&&s.at(1)=='0')cout p "12:" p s.at(3) p s.at(4)p" AM\n";
        else if((s.at(0)=='0'&&(s.at(1)-'0'>=1&&s.at(1)-'0'<=9))||(s.at(0)=='1'&&(s.at(1)-'0'>=0&&s.at(1)-'0'<=1)))
        cout p s.at(0) p s.at(1) p ":" p s.at(3) p s.at(4)p" AM\n";
        else cout p s2 p "\n";    
    }
    return 0;
}
