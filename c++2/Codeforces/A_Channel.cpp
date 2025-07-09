#include <iostream>
using namespace std;

int main(){
    int t,ns,ni,nn;
    char c;
    cin>>t;
    while (t--)
    {
        string s="";
        cin>>ns>>ni>>nn;
        for(int i=0; i<nn; i++){
            cin>>c;
            s+=c;
        }
        if(ns==ni){
            cout<<"YES\n";
        }
        else{
            for(int i=0; i<nn; i++){
                if(s[i]=='+'){
                    ni++;
                }
                else{
                    ni--;
                }
            }
            if(ni>=ns){
                cout<<"YES\n";
            }
            else if(ni==ns-1){
                cout<<"MAYBE\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}