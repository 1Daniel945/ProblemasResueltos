#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	cin.ignore();
	string s;
	while(n--){
		getline(cin,s);
		string s2="";
		map<char, int>mapa;
		int t = s.size();
		for(int i=0; i<t; i++){
			s2+=tolower(s[i]);
		}
		for(int i=0; i<t; i++){
			if(s2[i]!=' '){
				mapa[s2[i]]++;
			}
		}
		int m=0;
		for(pair<char, int> p : mapa){
			if(m==0){
				m=p.second;
			}
			else if(p.second>m){
				m=p.second;
			}
		}
		for(pair<char, int>p:mapa){
			if(p.second==m){
				cout<<p.first;
			}
		}
		cout<<"\n";
	}
	return 0;
}
