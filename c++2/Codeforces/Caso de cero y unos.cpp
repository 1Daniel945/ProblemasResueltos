#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	string s="";
	string s2="";
	//Crear la cadena con los caracteres
	while(n--){
		char c;
		cin>>c;
		s+=c;
	}
	int t=s.length();
	for(int i=0; i<t; i++){
		if((i+1)<t){
			if(s.at(i)=='1' && s.at(i+1)=='0' && i<t){
			}
			else if(s.at(i)=='0' && s.at(i+1)=='1' && i<t){
			}
			else{
				s2+=s.at(i);
			}
		}
		else{
			s2+=s.at(i);
		}
	}
	
	cout<<s2;
	return 0;
}
