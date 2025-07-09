#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	if((n/k)>=m){
		printf("Iron fist Ketil");
	}
	else{
		printf("King Canute\n");
	}
	return 0;
}

