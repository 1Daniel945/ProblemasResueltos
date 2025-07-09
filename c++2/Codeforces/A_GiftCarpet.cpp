/*#include <iostream>
using namespace std;

char mt[105][105];

int main(){
    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cin>>mt[i][j];
            }
        }
        //Imprimir matriz
        bool v=0,y=0,s=0,a=0;
        if(n>1){
            for(int x=0; x<n; x++){
                for(int j=0; j<k; j++){ 
                    //if(mt[j][x]=='v'){
                        v=true;
                    //}
                    //if(v==true && mt[j][x]=='i'){
                        y=true;
                    //}
                    if(mt[j][x]=='k'){
                        cout<<"True\n";
                    }
                    cout<<v<<" "<<y<<" "<<s<<" "<<a<<"\n";
                }
            }
            if(v==true){
                cout<<"Existe v\n";
            }
            if(y==true){
                cout<<"Existe i\n";
            }
            if(s==true){
                cout<<"Existe k\n";
            }
        }
        else{
            for(int x=0; x<k; x++){
                if(mt[0][x]=='v'){
                    v=1;
                }
                if(mt[0][x]=='i'){
                    y=1;
                }
                if(mt[0][x]=='k'){
                    s=1;
                }
                if(mt[0][x]=='a'){
                    a=1;
                }
            }
            if((v&&y)&&(s&&a)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    bool v=0,i1=0,k=0,a=0;
    while (t--)
    {
        cin>>n>>m;
        if(n<=m){
            string s[n];
            for(int i=0; i<n; i++){
                cin>>s[i];
            }
            int x=0;
            for(int i=0; i<n; i++){
                if(x<m){
                    if(s[i].at(x)=='v'){
                        v=1;
                        x++;
                    }
                    if(v && s[i].at(x)=='i'){
                        i1=1;
                        x++;
                    }
                    if(i1 && s[i].at(x)=='k'){
                        k=1;
                        x++;
                    }
                    if(k && s[i].at(x)=='a'){
                        a=1;
                    }
                }
                else{
                    break;
                }
            }
        }
        else{
            string mt[m];
            for(int i=0; i<m; i++){
                cin>>mt[i];
            }
            for(int i=0; i<n; i++){
                cout<<mt[i]<<"\n";
            }
        }
        if((v&&i1)&&(k&&a)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;   
}