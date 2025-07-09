#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s2="WUB";
    int p = s.find(s2);
    while (p>=0){
        if(p!=0){
            s.replace(p+s2.length()-1, 1, " ");
            s.erase(p, s2.length()-1);
            p = s.find(s2);
        }
        else{
            s.erase(p, s2.length());
            p = s.find(s2);
        }
    }
    for(int i=0; i<s.size(); ++i){
        if(s[i]==32 && s[i+1]==32){
            s.erase(i+1,1);
        }
    }   
    cout<<s<<"\n";
    return 0;
}

/*

*/