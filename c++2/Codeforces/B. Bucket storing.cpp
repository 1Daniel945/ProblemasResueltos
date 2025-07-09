#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	double n,k,l,r;
	scanf("%lf%lf%lf",&n,&k,&l);
	r = (n*k)/l;
	r = ceil(r);
	printf("%.0lf",r);
	return 0;
}

