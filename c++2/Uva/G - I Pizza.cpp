#include <iostream>
#include <map>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	while (n--)
	{
		map<char, int>mapi;
		string s,s2="MARGARITA";
		cin>>s;
		cin.ignore();
		for(int i=0; i<9; i++){
			mapi[s2[i]]=0;
		}
		for(int i=0; i<s.size(); i++){
			for(pair<char, int>p:mapi){
				if(p.first==s[i]){
					mapi[p.first]++;
				}
			}
		}
		int m=-1;
		for(pair<char, int>p:mapi){
			if(p.first=='A'){
				p.second = p.second/3;
			}
			if(p.first=='R'){
				p.second = p.second/2;
			}
			if(m==-1){
				m = p.second;
			}
			else if(p.second<m){
				m = p.second;
			}
		}
		cout<<m<<"\n";
	}
	return 0;
}
	
