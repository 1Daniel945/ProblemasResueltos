#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, int>mp;
    string s,s2;
    while (n--)
    {
        cin>>s;
        s2="";
        if(mp.size()==0){
            cout<<"OK\n";
            mp[s]=0;
        }
        else{
            if(mp.count(s)>0){
                mp[s]++;
                cout<<s<<mp[s]<<"\n";
            }
            else{
                cout<<"OK\n";
                mp[s]=0;
            }
        }
    }
    return 0;
}