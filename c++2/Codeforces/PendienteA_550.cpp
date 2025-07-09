#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string s,s3="",s4="";
    cin>>s;
    string s2="AB",s1="BA";
    int p = s.find(s2);
    for(int i=p-1; i<p+1; ++i){
        s3+=s[i];
    }
    if(p>=0){
        s.erase(p, 2);
    }
    int p1 = s.find(s1);
    for(int i=p1-1; i<p1+2; ++i){
        s4+=s[i];
    }
    if(s3==s4){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
