#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    priority_queue<pair<int, int>>reg;
    string in;
    int p, id,k;
    vector<int>pe;
    vector<int>ids;
    while (cin>>in, in!="#")
    {
        cin>>p>>id;
        pe.push_back(p);
        ids.push_back(id);
    }
	int t=pe.size();
	for(int i=1; i<=10000; i++){
		for(int x=0; x<t; x++){
			if(i%ids[x]==0){
				reg.push({i*-1, ((pe[x])*-1)});
			}
		}
	}
    cin>>k;
    while (k--) {
        int e = reg.top().second;
        cout <<e*-1<<"\n";
        reg.pop();
    }
    return 0;
}
