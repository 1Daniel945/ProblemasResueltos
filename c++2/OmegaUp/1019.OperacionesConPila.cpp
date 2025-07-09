#include <stdio.h>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	stack<int>p;
	int *arr = new int[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++){
		if(p.size()<arr[i]){
			p.push(arr[i]);
			continue;
		}
		else{
			for(int j=0; j<arr[i]; j++){
				p.pop();
			}
		}
	}
	printf("%d\n",p.size());
	while(!p.empty()){
		printf("%d ",p.top());
		p.pop();
	}
	printf("\n");
	return 0;
}
