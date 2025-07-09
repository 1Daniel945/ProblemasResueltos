#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    string s[x];
    for(int i=0; i<x; ++i){
        cin>>s[i];
    }
    int c=1;
    string s1=s[0];
    if(x>1){
        for(int i=1; i<x; ++i){
            if(s1!=s[i]){
               c++;
               s1=s[i]; 
            }
        }
        cout<<c<<"\n";
    }   
    else{
        cout<<c<<"\n";
    }
    return 0;
}