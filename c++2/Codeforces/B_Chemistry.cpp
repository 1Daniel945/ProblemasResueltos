#include<bits/stdc++.h>
#define YesNo(x,y) x==y?cout<<"YES\n":cout<<"NO\n"
#define fi(n,x) for(int i=n; i<x; ++i)
#define fir(n) for(int i=n-1; i>=0; --i)
using namespace std;

int main(){
    int t,a,b;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        cin>>s;
        if(a==1){
            YesNo(0,0);
        }
        else{
            if(b==1){
                s.erase(0, 1);
            }
            else if(b>=2){
                if(b%2==0){
                    int x=b/2;
                    int y=b/2;
                    s.erase(0, x);
                    s.erase(s.size()-1, y);
                }
                else{
                    int x=(b/2)+1;
                    int y=b/2;
                    s.erase(0, x);
                    s.erase(s.size()-1, y);
                }
            }
            string s2="";
            fir(s.size()){
                s2+=s.at(i);
            }
            YesNo(s,s2);
        }
    }
    return 0;   
}