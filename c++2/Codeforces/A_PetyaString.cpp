#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    string s1,s2,s3="",s4="";
    int cs1=0, cs2=0;
    cin>>s1>>s2;
    fi(s1.size()){
        s3+=tolower(s1.at(i));
        s4+=tolower(s2.at(i));
    }
    fi(s3.size()){
        if(s3.at(i)!=s4.at(i)){
            cs1+=s3.at(i);
            cs2+=s4.at(i);
        }
    }
    if(cs1==cs2){
        cout<<"0\n";
    }
    else if(cs1<cs2){
        cout<<"-1\n";
    }
    else{
        cout<<"1\n";
    }
    return 0;
}