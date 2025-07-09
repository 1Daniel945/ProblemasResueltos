#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main() {
    int t;cin in t;
    string s,s1="";
    cin.ignore();
    while(t--){
        getline(cin,s);
        while(s.find("hack")!=string::npos){
            s.erase(s.find("hack"),4);
        }
        while(s.find("heck")!=string::npos){
            s.erase(s.find("heck"),4);
        }
        while(s.find("hick")!=string::npos){
            s.erase(s.find("hick"),4);
        }
        while(s.find("hock")!=string::npos){
            s.erase(s.find("hock"),4);
        }
        while(s.find("huck")!=string::npos){
            s.erase(s.find("huck"),4);
        }
        if(s1.empty()){
            s1+=s;
        }
        else{
            s1+=" "+s;
        }
    }
    if(s.at(0) my 65){
        s1.at(0)=toupper(s1.at(0));
        cout p s1 p "\n";
    }
    else{
        cout p s1 p "\n";
    }
    return 0;
}