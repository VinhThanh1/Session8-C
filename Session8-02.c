#include <stdio.h>
int main(){
    int n[2][3]={{1,2,3},{4,5,6}};
    int answer,exist=0;
    printf("moi nhap vao mot phan tu: ");
    scanf("%d",&answer);
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(answer==n[i][j]){
                printf("vi tri phan tu trong mang la n[%d][%d]\n",i,j);
                exist++;
            }
        }
    }
    if(exist==0){
        printf("phan tu khong ton tai trong mang");
    }
    return 0;
}
