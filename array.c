#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    unsigned long A[1000];
    memset(A,0,1000);
    A[0]=1;
    A[1]=1;
    printf("请输入你想知道的斐波那契数列中的第几项：(不超过1000)\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        A[i]=A[i-1]+A[i-2];
    }
    printf("\n该项为：%ld",A[n-1]);
    return 0;
}
