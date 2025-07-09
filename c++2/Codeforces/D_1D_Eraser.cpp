#include<bits/stdc++.h>
#define fi(x,n) for(int i=x; i<n; ++i)
using namespace std;

int main(){
    int t,n,k,op;
    string s;
    cin>>t;
    while (t--)
    {
        op=0;
        cin>>n>>k;
        cin>>s;
        int cf=0;
        fi(0, s.size()){
            if(s[i]=='B'){
                cf++;
            }
        }
        if(cf==s.size()){
            cout<<"1\n";
        }
        else{
            fi(0, s.size()){
                
            }
            cout<<op<<"\n";
        }
    }
    return 0;
}