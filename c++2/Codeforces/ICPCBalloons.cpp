#include<iostream>
#include<map>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        int sm = 0;
        cin>>n;
        string s="";
        char c;
        map<char, int>m;
        for(int i=0; i<n; i++){
            cin>>c;
            s+=c;
            m[c]++;
            if(m[c]==1){
                sm+=1;
            }
        }
        for(pair<char, int>p:m){
            sm+=p.second;
        }
        cout<<sm<<"\n";
    }
    return 0;
}