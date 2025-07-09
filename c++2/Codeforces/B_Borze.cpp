#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x=0;
    if(s.size()-1>0){
        for(int i=0; i<s.size(); i++){
            if(s[x]=='.' && s[x+1]!='.'){
                x++;
                cout<<0;
            }
            else if(s[x]=='.'&&s[x+1]=='.'){
                x++;
                x++;
                cout<<0<<0;
            }
            if(s[x]=='-' && s[x+1]=='.'){
                x++;
                x++;
                cout<<1;
            }
            if(s[x]=='-'&&s[x+1]=='-'){
                x++;
                x++;
                cout<<2;
            }
        }
    }
    else{
        cout<<0;
    }
    return 0;
}