#include <stdio.h>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
	stack<int>pila;
	int t;
	scanf("%d",&t);
	while(t--){
		int x;
		scanf("%d",&x);
		if(x==1){
			int y;
			scanf("%d",&y);
			pila.push(y);
		}
		if(x==2){
			if(!pila.empty()){
				pila.pop();
			}
		}
		else{
			if(pila.empty()){
				printf("Empty!\n");
			}
			else{
				printf("%d\n",pila.top());
			}
		}
	}
	return 0;
}
