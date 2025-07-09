#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s2,s3="";
    cin>>s;
    s2=s;
    if(s!="1987"){
    for(int i=0; i<s.size(); ++i){
        if(s[i]==s2[i]){
            if(s2[i]=='9'){
                s3+='0';
            }
            else{
                s3+=char(int(s[i])+1);
            }
        }
    }
    cout<<s3<<"\n";}
    else{

    }
    return 0;
}