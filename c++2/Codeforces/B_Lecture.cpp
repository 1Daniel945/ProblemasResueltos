#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define fj(x) for(int j=0; j<x; ++j)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string s[m],s1[m],s3[n],s4="";
    fi(m){
        cin>>s[i]>>s1[i];
    }
    fi(n){
        cin>>s3[i];
    }
    fj(n){
        fi(m){
            if(s[i]==s3[j]){
                if(s[i].size()==s1[i].size()){
                    s4+=s[i]+" ";
                }
                else if(s[i].size()<s1[i].size()){
                    s4+=s[i]+" ";
                }
                else{
                    s4+=s1[i]+" ";
                }
            }  
        }
    }
    fi(s4.size()-1){
        cout<<s4[i];
    }
    cout<<"\n";
    return 0;
}