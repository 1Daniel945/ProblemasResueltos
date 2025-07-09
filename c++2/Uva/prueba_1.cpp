#include <stdio.h>
#include <string>
using namespace std;

int main() {
    int t,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        char s[n][8];
        bool b[n]{0};
        for(int i=0; i<n; i++){
            scanf("%s",s[i]);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                string l = s[i];
                        l+=s[j];
                for(int k=0; k<n; k++){
                    if(s[k]==l){
                       b[k]=1; 
                       
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            printf("%d",b[i]);
        }
        printf("\n");        
    }
    return 0;
}
