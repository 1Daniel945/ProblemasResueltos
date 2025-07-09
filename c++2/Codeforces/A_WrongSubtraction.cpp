#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    int a;
    string s;
    cin>>s>>a;
    int v=s.size()-1;
    while (a--)
    {
        cout<<"t: "<<s.size()-1<<"\n";
        if(s[v]=='0' && a>0){
            s.erase(remove(s.begin(), s.end(), s[v]),s.end());
            v--;
        }
        if(s[v]!='0'){
            int x = (int)s[v];
            x=x-1;
            s[v]=(char)x;
            v=s.size()-1;
        }
    }
    cout<<s<<"\n";
    return 0;
}

/*
if(s[v]!='0'){
            int x = (int)s[v];
            x=x-1;
            s[v]=(char)x;
        }
        else{
            s.erase(remove(s.begin(), s.end(), s[v]),s.end());
        }
        v--;
*/