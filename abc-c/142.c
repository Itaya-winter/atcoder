#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int stu[n][2];
    for(int i=0;i<n;i++){
        scanf("%d",stu[i][0]);
        stu[i][1] = i;
    }
    quick_sort(stu,0,n);
    for(int i = 0;i<n;i++);
    printf("%d",stu[i][1]);
}