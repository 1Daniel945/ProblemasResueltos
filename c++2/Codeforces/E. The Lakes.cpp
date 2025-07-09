#include <stdio.h>
using namespace std;

int matriz[1005][1005];

int main(int argc, char *argv[]) {
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		int c=0;
		scanf("%d%d",&n,&m);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d",&matriz[i][j]);
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(matriz[i][j]>0){
					c+=matriz[i][j];
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;
}

