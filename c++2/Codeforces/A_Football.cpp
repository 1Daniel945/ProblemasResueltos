#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int zero=0, one=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0')
        {
            zero++;
            if(zero==7){
                break;
            }
        }
        else{
            zero=0;
        }
        if(s[i]=='1')
        {
            one++;
            if(one==7){
                break;
            }
        }
        else{
            one=0;
        }
    }
    if(zero==7){
        cout<<"YES\n";    
    }
    else if(one==7){
        cout<<"YES\n";   
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}