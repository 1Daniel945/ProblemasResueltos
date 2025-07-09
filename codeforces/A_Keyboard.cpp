#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define fj(x)for(int j=0; j<x; ++j)
#define fii(x,i)for(int j=0; j<x; j+=i)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main(){
    string s,s1="qwertyuiopasdfghjkl;zxcvbnm,./",s2;cin in s;
    if(s=="R"){
        cin in s2;
        fi(s2.size()){
            if(s1.find(s2.at(i))!=string::npos){
                cout p s1.at((s1.find(s2.at(i))-1))p"";
            }
        }
    }
    else if(s=="L"){
        cin in s2;
        fi(s2.size()){
            if(s1.find(s2.at(i))!=string::npos){
                cout p s1.at((s1.find(s2.at(i))+1))p"";
            }
        }
    }
    return 0;
}