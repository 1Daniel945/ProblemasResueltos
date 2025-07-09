#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,m;
	double k;
	scanf("%d%d",&n,&m);
	if(n%m == 0){
		k=n/m;
		k=ceil(k);
		
	}
	else{
		printf("-1");
	}
	return 0;
}
