#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    string s;
    char c[3][3];
    int l=0,p=0,cf=0,q=0,cj=0;
    for(int i=0; i<t; i++){
        getline(cin, s);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>c[i][j];
            }
        }
        cin.ignore();
        if(c[0][0]=='#'){
            l++;
        }
        if(c[0][2]=='#'){
            l++;
        }
        if(c[2][0]=='#'){
            l++;
        }
        if(c[2][2]=='#'){
            l++;
        }
        if(c[1][0]=='#'){
            p++;
        }
        if(c[1][2]=='#'){
            p++;
        }
        if(c[0][1]=='#'){
            cf++;
        }
        if(c[1][1]=='#'){
            q++;
        }
        if(c[2][1]=='#'){
            cj++;
        }
    }
    cout<<l<<"\n"<<p<<"\n"<<cf<<"\n"<<q<<"\n"<<cj<<"\n";
    return 0;
}