#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define fj(x) for(int j=0; j<x; ++j)
#define yesNo(x,y) x==y?cout<<"YES\n":cout<<"NO\n";
using namespace std;

int main(){
    string s,s2,s3;
    cin>>s>>s2>>s3;
    int y;
    map<char,int>mp,mp1;
    fi(s.size()){
        mp[s.at(i)]++;
    }
    fi(s2.size()){
        y = s3.find(s2.at(i));
        if(y>=0){
            s3.erase(y,1);
        }
    }
    fi(s3.size()){
        mp1[s3.at(i)]++;
    }
    if(mp.size()==mp1.size()){
        int x=0;
        for(pair<char,int>p:mp){
            for(pair<char,int>p1:mp1){
                if(p.first==p1.first){
                    if(p.second==p1.second){
                        x++;
                    }
                }
            }
        }
        yesNo(mp.size(),x);
    }
    else{
        yesNo(1,2);
    }
    return 0;
}