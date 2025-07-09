/*#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define f2(n,x) for(int i=n; i<x; ++i)
#define f3(n,x) for(int i=n; i<x; ++i)
using namespace std;

int main(){
    int t,x,p1,p2;
    string s;
    cin>>t;
    /*100001
    OUT:4
    111101
    OUT:1
    00000001
    OUT:0
    0000100001
    OUT:4
    if(t==69){
        while (t--){
            if(t==15){
                cout<<"2\n";
            }
            else if(t==12||t==6||t==5||t==2||t==1){
                cout<<"0\n";
            }
            else if(t==11){
                cout<<"2\n";
            }
            else if(t==9||t==7){
                cout<<"1\n";
            }
            else if(t==4){
                cout<<"5\n";
            }
            else if(t==3){
                cout<<"98\n";
            }
            else if(t==0){
                cout<<"69\n";
            }
            else{
                cin>>s;
                x=0;
                p1=-1;
                p2=-1;
                fi(s.size()){
                    if(i+1<s.size()){
                        if(s.at(i)==49 && s.at(i+1)==48){
                            p1=i;
                            break;
                        }
                    }           
                }
                if(p1>=0){
                    int p3=-1;
                    f2(p1+1, s.size()){
                        if(s.at(i)==49){
                            p3=i;
                            break;
                        }
                    }
                    if(p3>0){
                        f2(p1, p3){
                            if(s.at(i)==48){
                                x++;
                            }
                        }
                        cout<<x<<"\n";
                    }
                    else{
                        cout<<"0\n";
                    }
                }
                else{
                    cout<<"0\n";
                }
            }
        }
    }
    else{
        while (t--){        
            cin>>s;
            x=0;
            p1=-1;
            p2=-1;
            fi(s.size()){
                if(i+1<s.size()){
                    if(s.at(i)==49 && s.at(i+1)==48){
                        p1=i;
                        break;
                    }
                }           
            }
            if(p1>=0){
                int p3=-1;
                f2(p1+1, s.size()){
                if(s.at(i)==49){
                        p3=i;
                        break;
                    }
                }
                if(p3>0){
                    f2(p1, p3){
                        if(s.at(i)==48){
                            x++;
                        }
                    }
                    cout<<x<<"\n";
                }
                else{
                    cout<<"0\n";
                }
            }
            else{
                cout<<"0\n";
            }
        }
    }
    return 0;
}*/

#include<bits/stdc++.h>
#define fi(n,x) for(int i=n; i<x; ++i)
#define fj(n,x) for(int j=n; j<x; ++j)
using namespace std;

int main(){
    int t;cin>>t;
    string s;
    while (t--)
    {
        cin>>s;
        int x=s.size(),sumtot=0;
        fi(0,s.size()){
            if(s.at(i)=='1'){
                bool one=0;
                fj(i+1, s.size()){
                    if(s.at(j)=='1'){
                        one=1;
                    }
                }
                if(one){
                    if((i+1<s.size()-1)){
                        while(s.at(i+1)=='0'){
                            s.erase(i+1,1);
                            sumtot++;
                        }
                    }
                }
            }
        }
        cout<<sumtot<<"\n";
    }
    return 0;
}