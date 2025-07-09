#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0,s1=0;
    string st;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>st;
        for(int j=0; j<3; j++){
            s+=(int)(st.at(j));
        }
        for(int j=3; j<6; j++){
            s1+=(int)(st.at(j));    
        }
        s==s1?cout<<"YES\n":cout<<"NO\n";
        s=0;
        s1=0;
    }
    return 0;
}