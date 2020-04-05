#include<stdio.h>

int main(){
    int a;
    
    scanf("%d",&a);
    for(int i= 1;i<10;i++){
        for(int j=1 ;j<10;j++){
            if(a == i*j){
                printf("Yes");
                return 0;
            }
        } 
    }
    printf("No");
    
    return 0;
}