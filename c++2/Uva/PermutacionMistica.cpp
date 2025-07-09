#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    string s1[t];
    for(int i=0; i<t; i++){
        cin>>s;
        string s2="";
        for(int x=0; x<s.size(); x++){
            s2 += tolower(s[x]);
        }
        if(s2=="yes"){
            s1[i]="YES";
        }
        else{
            s1[i]="NO";
        }
    }
    for(string x: s1){
        cout<<x<<"\n";
    }
    return 0;
}
