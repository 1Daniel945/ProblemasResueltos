#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define yesNo(x,y) x==y?cout<<"0\n":x<y?cout<<"-1\n":cout<<"1\n";
using namespace std;

int main(){
    string s1,s2,s3="",s4="";
    cin>>s1>>s2;
    fi(s1.size()){
        s3+=tolower(s1.at(i));
    }
    fi(s2.size()){
        s4+=tolower(s2.at(i));
    }
    int x=0,y=0;
    fi(s3.size()){
        if(s3.at(i)!=s4.at(i)){
            x = s3.at(i);
            y = s4.at(i);
            break;
        }
    }
    yesNo(x,y);
    return 0;
}