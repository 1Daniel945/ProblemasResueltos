#include<bits/stdc++.h>
typedef long long lld;
using namespace std;

int main(){
    string s;
    cin>>s;
    lld x1=0,x2=0;
    for(lld i=0; i<s.size(); ++i){
        if(s.at(i)=='7'){
            x1++;
        }
        if(s.at(i)=='4'){
            x2++;
        }
    }
    if(x1==0 && x2==0){
        cout<<"NO\n";
    }
    else{
        x1+x2==4||x1+x2==7?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}