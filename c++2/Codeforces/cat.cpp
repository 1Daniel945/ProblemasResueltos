#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		string s="",s2="";
		bool m=false,e=false,o=false,w=false;
		cin>>n;
		for(int i=0; i<n; i++){
			char c;
			cin>>c;
			s+=c;
		}
		//Convertir a minusculas
		int t = s.length();
		for(int i=0; i<t; i++){
			s2+=tolower(s.at(i));
		}
		//Buscar donde inicia una m
		int pm=-1,pe=-1,po=-1,pw=-1;
		t=s2.length();
		for(int i=0; i<t; i++){
			if(s2.at(i)=='m' && pm==-1){
				pm = i;
				m = true;
			}
		}
		if(m==true){
			s="m";
			for(int i=pm; i<t; i++){
				if(s2.at(i)=='e' && pe==-1){
					pe = i;
					e = true;
					s+="e";
				}
			}
			for(int i=pe; i<t; i++){
				if(s2.at(i)=='o' && po==-1){
					po = i;
					e = true;
					s+="o";
				}
			}
			for(int i=pe; i<t; i++){
				if(s2.at(i)=='w' && pw==-1){
					pw = i;
					o = true;
					s+="w";
				}
			}
			for(int i=pw; i<t; i++){
				for(int j=0; j<s.length(); j++){
					if(s2.at(i)!=s.at(j)){
						s+=s2.at(i);
					}
				}
			}
			cout<<s<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
