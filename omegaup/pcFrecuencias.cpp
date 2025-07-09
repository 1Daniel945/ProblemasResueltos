#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    int a,b;
    cin in a in b;
    string s="",s1,s2="";
    fr(i,0,a){
        s+=to_string(i+1);
        s+=" ";
    }
    cin.ignore();
    v(st,string);
    getline(cin,s1);
    fr(i,0,s.size()){
        if(s.at(i)==' '){
            st.push_back(s2);
            s2="";
        }
        else s2+=s.at(i);
    }
    s2="";
    v(x,int);
    fr(i,0,s1.size()){
        if(s1.at(i)==' '){
            x.push_back(stoi(s2));
            s2="";
        }
        else s2+=s1.at(i);
    }
    if(s2!="")x.push_back(stoi(s2));
    fr(i,0,st.size()){
        int c = count(x.begin(),x.end(),stoi(st[i]));
        cout p st[i] p "-" p c p "\n";
    }
    return 0;
}