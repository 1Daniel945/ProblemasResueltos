#include <stdio.h>
using namespace std;

int arrp[51];

int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++){
		scanf("%d",&arrp[i]);
	}
	int r=0,d=n,x=0;
	while(d--){
		printf("%d ",arrp[x]);
		for(int i=0; i<m; i++){//Imprime los elementos principales
			for(int j=i+1; j<i+n; j++){
				printf("%d ",arrp[j]);
			}
			printf("\n");
		}
		x++;
		printf("\n");
	}
	return 0;
}
