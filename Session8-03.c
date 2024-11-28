#include <stdio.h>
int main(){
    int answer;
    printf("moi nhap vao mot phan tu: ");
    scanf("%d",&answer);
    int n[answer][answer];
    for(int i=0;i<answer;i++){
        for(int j=0;j<answer;j++){
                n[i][j]=answer;
                printf("[%d]",n[i][j]);
        }
        printf("\n");
    }
}
