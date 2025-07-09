#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main() {
    string s,s1="";
    while (getline(cin,s), s!="-1")
    {
        s1+=s+" -> ";
    }
    if(s1.size()>2){
        fi(s1.size()-4){
            cout p s1.at(i);
        }
        cout p "\n";
    }
    else{
        cout p s1 p "\n";
    }
    return 0;
}