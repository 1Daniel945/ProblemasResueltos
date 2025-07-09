#include <iostream>
using namespace std;

void printAst(){

}

void printPun(){

}

int main(){
    int n;
    cin>>n;
    string mt[n][2*(n-1)];
    for(int i=0; i<n; i++){
        for(int j=0; j<2*(n-1); j++){
            mt[i][j]="* ";
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<2*(n-1); j++){
            cout<<mt[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
