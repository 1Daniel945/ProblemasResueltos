#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define YesNo(x,n) x==n?cout<<"YES\n":cout<<"NO\n"
using namespace std;

int main(){
    string s1,s2,s3="",s4="",s5="";
    cin>>s1>>s2;
    int v = stoi(s1);
    int v2 = stoi(s2);
    int r2 = v+v2;
    string s=to_string(r2);
    fi(s.size()){
        s.at(i)!='0'?s5+=s.at(i):s5;
    } 
    fi(s1.size()){
        s1.at(i)!='0'?s3+=s1.at(i):s3;
    }
    fi(s2.size()){
        s2.at(i)!='0'?s4+=s2.at(i):s4;
    }
    int x = stoi(s3);
    int y = stoi(s4);
    int z = stoi(s5);
    int r = x+y;
    YesNo(z,r);
    return 0;
}