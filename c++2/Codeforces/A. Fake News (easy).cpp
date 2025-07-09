#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,cad2="";
	cin>>cad;
	int t,c;
	t = cad.length();
	for(int i=0; i<t; i++){
		if(cad.at(i)=='h'){
			cad2+=cad.at(i);
			c=i;
			break;
		}
	}
	for(int i=c; i<t; i++){
		if(cad.at(i)=='e'){
			cad2+=cad.at(i);
			c=i;
			break;
		}
	}
	for(int i=c; i<t; i++){
		if(cad.at(i)=='i'){
			cad2+=cad.at(i);
			c=i;
			break;
		}
	}
	for(int i=c; i<t; i++){
		if(cad.at(i)=='d'){
			cad2+=cad.at(i);
			c=i;
			break;
		}
	}
	int tm=cad2.length();
	if(cad2.at(tm-1)=='d'){
		for(int i=c; i<t; i++){
			if(cad.at(i)=='i'){
				cad2+=cad.at(i);
				c=i;
				break;
			}
		}
	}
	if(cad2=="heidi"){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
