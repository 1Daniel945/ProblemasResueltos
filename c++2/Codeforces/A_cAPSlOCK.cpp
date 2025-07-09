#include<bits/stdc++.h>
#define fri(x, n) for(int i=x; i<n; ++i)
using namespace std;

int main(){
    string s;
    cin>>s;
    bool min=0;
    if(s[0]>=97 && s[0]<=122){
        min=1;
    }
    int c=0;
    if(s.size()>=1 && min){
        fri(1, s.size()){
            if(s[i]>=65 &&s[i]<=90){
                c++;
            }
        }
        if(c==s.size()-1){
            string s1="";
            s1+=toupper(s[0]);
            fri(1,s.size()){
                s1+=tolower(s[i]);
            }
            cout<<s1<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
    else{
        fri(1, s.size()){
            if(s[i]>=65 &&s[i]<=90){
                c++;
            }
        }
        if(!min && c==s.size()-1){
            string s1="";
            fri(0,s.size()){
                s1+=tolower(s[i]);
            }
            cout<<s1<<"\n";      
        }
        else{
            cout<<s<<"\n";
        }
    }
    return 0;
}

/*
if(min==0){
        string s1="";
        fri(1,s.size()){
            if(s[i]>=){

            }
        }
    }
*/