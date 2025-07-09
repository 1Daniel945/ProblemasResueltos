#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,c=0;
	cin>>n;
	string *arr = new string[n];
	//Almacena cuantas veces aparece la cadena en la lista
	int * c2 = new int[n];
	for(int j=0; j<n; j++){
		int a;
		string s,s2="";
		cin>>a;
		for(int i=0; i<a; i++){
			cin>>s;
			s2 = s2+s.at(0);
		}
		arr[j] = s2;
	}
	//Recorrer arreglo con los alias 
	string v="";
	for(int i=0; i<n; i++){
		int c=0;
		v = arr[i];
		for(int j=0; j<n; j++){
			if(arr[j]==v){
				c++;
			}
		}
		c2[i]=c;
	}
	for(int i=0; i<n; i++){
		if(c2[i]==1){
			c++;
		}
	}
	cout<<c;	
	return 0;
}
