#include<stdio.h>
#include<math.h>


int main(){
    int a;
    
    scanf("%d",&a);
    int ans = a + 1;
    double tem ;
    tem = sqrt(ans);
    for(int i = 2;i< 1+tem;i++){
        if((double)a/i-a/i==0){
            ans = a/i + i;
        }
    }
    printf("%d",ans-2);
    
    return 0;
}