#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1="";
    cin>>s;
    int x=s.size();
    for(int i=x-1; i>=0; i--){
        s1+=s[i];
    }
    s1==s?cout<<"SI\n":cout<<"NO\n";
    return 0;
}