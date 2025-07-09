#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {

	int n,m;
	while(cin>>n>>m, n!=0&&m!=0){
		map<int,int> cds;
		int x;
		while(n--){
			cin>>x;
			cds[x]++;
		}
		while(m--){
			cin>>x;
			cds[x]++;
		}
		int cont=0;
		for(pair<int,int> cd:cds){
			cd.second>1?cont++:cont;
		}
		cout<<cont<<"\n";
	}
	
	return 0;
}
