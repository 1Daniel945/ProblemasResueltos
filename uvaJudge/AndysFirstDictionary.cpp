#include <bits/stdc++.h>
#define fr(i,x,n)for(ll i=x; i<(ll)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    string s;
    vector<string>vs;
    string st = "";
    while(cin in s){
        string s1 = "";
        fr(i, 0, s.size()){
            if((s.at(i) >= 97 && s.at(i) <= 122)||(s.at(i) >= 65 && s.at(i) <= 90)){
                s.at(i) = tolower(s.at(i));
            }
        }
        fr(i, 0, s.size()){
            if((s.at(i) >= 97 && s.at(i) <= 122)){
                s1 += s.at(i);
            }
            else{
                st += s1;
                st += " ";
                s1 = "";
            }
        }
        if(find(vs.begin(), vs.end(), s1) == vs.end()){
            vs.push_back(s1);
        }
    }
    stringstream ss(st);
    string s2;
    while(ss>>s2){
        if(find(vs.begin(), vs.end(), s2) == vs.end()){
            vs.push_back(s2);
        }
    }
    sort(vs.begin(), vs.end());
    fr(i, 1, vs.size()){
        cout p vs[i] p "\n";
    }
    return 0;
}
