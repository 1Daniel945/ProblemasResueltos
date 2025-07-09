#include <bits/stdc++.h>
using namespace std;

int cd=0;

void foldLetter(int a, int b){
    if(cd>=8) return;
    a = a/2;
    cd++;
    foldLetter(a, b);
}

int main(){
    int a,b,c,d,ma,mb;
    cin>>a>>b>>c>>d;
    ma=a*b;
    mb=c*d;
    foldLetter(ma,mb);
    cout<<cd<<"\n";
    return 0;
}