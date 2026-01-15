#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    int i;
    int j;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            //printf("0%d",i);
            if (i < 10){
                printf("0%d ",i);
            }else{
                printf("%d ",i);
            }
        }
        printf("\n");
        //j = 0;
    }
    i = 0;
    printf("\n");

    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            //printf("0%d",i);
            if (j < 10){
                printf("0%d ",j);
            }else{
                printf("%d ",j);
            }
        }
        printf("\n");
        //j = 0;
    }
}