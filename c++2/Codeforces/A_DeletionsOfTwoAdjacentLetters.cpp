#include<bits/stdc++.h>
#define yesNo(x,y) x==y?cout<<"YES\n":cout<<"NO\n";
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    string s,s1;
    while (t--)
    {
        cin>>s>>s1;
        string x;
        x = s.at(s.size()/2);
        yesNo(x,s1);
    }
    return 0;
}