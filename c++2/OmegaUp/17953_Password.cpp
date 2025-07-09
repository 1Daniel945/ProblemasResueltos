#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    char c;
    while (n--)
    {
        cin>>c;
        s+=c;
    }
    bool v=0,nm=0,ig=0;
    for(int i=0; i<s.size(); i++){
        //aeiou
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'
            ||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'
            ||s[i]=='u'||s[i]=='U'){
            v=1;
        }
        if(s[i]=='1'||s[i]=='2'||s[i]=='3'
        ||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'
        ||s[i]=='8'||s[i]=='9'){
            nm=1;
        }
        if(i+1<n){
            if(s[i]==s[i+1]){
                ig=1;
            }
        }
        else{
            if(s[i]==s[i-1]){
                ig=1;
            }
        }
    }
    if(s.size()>=12){
        if((v && nm) && !ig){
            cout<<"SEGURO\n";
        }
        else{
            cout<<"INSEGURO\n";
        }
    }
    else{
        cout<<"INSEGURO\n";
    }
    return 0;
}