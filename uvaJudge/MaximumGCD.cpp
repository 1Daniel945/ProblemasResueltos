#include <bits/stdc++.h>
#define fr(i,a,b)for(int i=a; i<b; ++i)
#define p <<
#define in >>
typedef long long ll;
using namespace std;

int gcd(int a, int b){//O(log(a))
    //forma ternaria return b==0 ? a : gcd(b, a % b);
    //cout << a << " " << b <<"\n";
    if(b==0)return a;
    else return gcd(b,a%b);
}

long long lcm(int a, int b){//O(log(a))
    return a * b / gcd(a,b);
}

int main() {
    int t; cin in t;
    string s;
    cin.ignore();
    while(t--){
        getline(cin,s);
        int x;
        stringstream ss(s);
        vector<int>v;
        while(ss>>x){
            v.push_back(x);
        }
        int mn=1e9, mx=0;
        map<int,int>mp;
        fr(i,0,v.size()){
            fr(j,0,i){
                if(i!=j){
                    mp[gcd(v[i], v[j])]++;
                }
            }
        }
        int mxs=0,mxs1=0;
        for(pair<int,int>pp:mp){
            if(pp.first>mxs){
                mxs=pp.first;
            }
        }
        cout p mxs p "\n";
    }
    return 0;
}