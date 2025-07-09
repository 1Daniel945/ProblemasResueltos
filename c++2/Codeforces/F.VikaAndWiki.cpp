#include <iostream>
using namespace std;

int m=0, c=0, n;

bool operacion(int (&a)[10], int t){
    for(int i=0; i<t; i++){
        if((i+1)<t){
			a[i]=(a[i]+(a[i+1]));
		}
    }
	for(int i=0; i<t; i++){
		cout<<a[i]<<"\n";
	}
    for(int i=0; i<t; i++){
        if(a[i]==0){
            c++;
        }
    }
    m++;
    if(c==t){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[n];
    }
	operacion(a,n);
	cout<<m<<"\n";
    return 0;
}
