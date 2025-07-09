#include <bits/stdc++.h>
#define fri(x, n) for(int i=x; i<n; ++i)
using namespace std;

int main(){
    string s,s2,s3="";
    cin>>s>>s2;
    fri(0,s.size()){
        if(s[i]==s2[i]){
            s3+='0';
        }
        else{
            s3+='1';
        }
    }
    cout<<s3<<"\n";
    return 0;
}