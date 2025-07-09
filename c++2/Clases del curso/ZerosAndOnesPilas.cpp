#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n;
	int ct=0;
	cin>>n;
	stack<char>p;
	string s;
	cin>>s;
	//Recorrer la cadena
	for(int i=0; i<s.size(); i++){
		if(p.empty()){
			p.push(s[i]);
			continue;
		}
		char tope = p.top();
		if(tope !=s[i]){
			p.pop();
		}
		else{
			p.push(s[i]);
		}
	}
	cout<<p.size()<<"\n";
	return 0;
}
