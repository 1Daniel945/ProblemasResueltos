#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int t,x;
    cin>>t;
    string s,s1;
    while (t--)
    {
        s1="",x=0;
        cin>>s;
        fi(s.size()){
            i+1<s.size()?(s.at(i)==s.at(i+1))?x++:x:x;
        }
        if(x==s.size()-1){
            fi((s.size()/2)+1){
                cout<<s.at(i);
            }
            cout<<"\n";
        }
        else{
            unique_copy(s.begin(), s.end(), back_inserter(s1));
            cout<<s1<<"\n";
        }
    }
    return 0;
}