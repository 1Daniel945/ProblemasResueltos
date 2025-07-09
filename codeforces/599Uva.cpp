#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    int t; cin in t;
    string s, s1;
    ofstream a;
    a.open("a.txt");
    while(t--){
        map<char, int>mp,mp1;
        set<pair<char, char>>st;
        vector<char>letters;
        while(cin in s, s.at(0) != '*'){
            st.insert({s.at(1), s.at(3)});
            mp1[s.at(1)] = 1;
            mp1[s.at(3)] = 1; 
        }
        cin in s1;
        fr(i, 0, s1.size()){
            if(s1.at(i) != ','){
                mp[s1.at(i)] = 0;
            }
        }
        vector<char>v;
        int x = 0;
        for(auto e : st){
            if(v.empty()){
                v.push_back(e.first);
                v.push_back(e.second);
                mp[e.first]++;
                mp[e.second]++;
                x++;
            }
            else{
                if(find(v.begin(), v.end(), e.first) != v.end()){
                    v.push_back(e.first);
                    v.push_back(e.second);
                    mp[e.first]++;
                    mp[e.second]++;
                }
                else if(find(v.begin(), v.end(), e.second) != v.end()){
                    v.push_back(e.second);
                    v.push_back(e.first);
                    mp[e.first]++;
                    mp[e.second]++;
                }
                else{
                    v.clear();
                }
            }
        }
        int x1 = 0;
        fr(i, 0, s1.size()){
            if(s1[i] != ',' && mp1[s1[i]] == 0){
                x1++;
            }
        }
        a p "There are " p x p " tree(s) and " p x1 p " acorn(s).\n";
    }
    a.close();
    return 0;
}

/*
 || pfirst.second != plast.first
*/