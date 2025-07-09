#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
	string s;
	getline(cin,s);
	stack<char>p;
	stack<char>c;
	for(int i=0; i<s.size(); i++){
		if(p.empty()){
			if(s[i]=='('){
				p.push(s[i]);
				continue;
			}
		}
		if(c.empty()){
			if(s[i]=='{'){
				c.push(s[i]);
				continue;
			}
		}
		char top = p.top();
		if(top == '(' && s[i] == ')'){
			if(!p.empty()){
				p.pop();
			}
		}
		else{
			if(s[i]==')')
			p.push(s[i]);
		}
		char top1 = c.top();
		if(top1 == '{' && s[i] == '}'){
			if(!c.empty()){
				c.pop();
			}
		}
		else{
			if(s[i]=='{')
			c.push(s[i]);
		}
	}
	if(p.size()>0 && c.size()>0){
		printf("NO\n");
	}
	else{
		printf("SI\n");
	}
	return 0;
}
