#include <stdio.h>
using namespace std;

int f(int n){
    if(n<=5)return 1;
    return f(n-2)*5;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));    
    return 0;
}