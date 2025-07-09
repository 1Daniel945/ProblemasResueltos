#include <iostream>
using namespace std;

int main(){
    int t,n,m,c,ps,x;
    string s,s2;
    cin>>t;
    while (t--)
    {
        c=0,ps=0,x=0;
        cin>>n>>m;
        cin>>s>>s2;
        if(s!=s2){
            s+=s;//contenar para hacer mas grande el patron
            for(int i=0; i<s.size(); ++i){
                if(s[i]==s2[0]){
                    ps=i;
                }
            }
        }
        else{
            cout<<c<<"\n";
        }
    }
    return 0;
}