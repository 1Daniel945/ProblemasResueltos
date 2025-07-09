#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,cero=0,uno=0;
	string s="";
	cin>>n;
	while(n--){
		char c;
		cin>>c;
		s+=c;
	}
	int t = s.length();
	for(int i=0; i<t; i++){
		if(s.at(i)=='0'){
			cero++;
		}
		if(s.at(i)=='1'){
			uno++;
		}
	}
	
	if(uno>cero){
		cout<<uno-cero;
	}
	else if(cero>uno){
		cout<<cero-uno;
	}
	else{
		cout<<0;
	}
	
	return 0;
}
