#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	while(n--){
		int t;
		scanf("%d",&t);
		int arr[t];
		for(int i=0; i<t; i++){
			scanf("%d",&arr[t]);
		}
		//Ordenar elementos del arreglo
		int aux=0;  
		for(int i=1; i<=t; i++){
			for(int j=1; j<=t; j++){
				if(arr[j]>arr[j+1]){
					aux=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=aux;
				}
			}
		}
		printf("Arreglo ordenado\n");
		for(int i=0; i<t; i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}

