#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int LESS[10],GREATER[10];
void Random(int A[],int length){
    srand((unsigned int)time(NULL));
    for(int i=0; i<length; i++){
        A[i] = rand()%100;
        printf("%d ",A[i]);
    }
}

int QuickSelet(int A[],int sum,int mid){
    int p,i,j,k;
//    printf("\n");
//    for(i=0;i<sum;i++){
//        printf("%d ",A[i]);
//    }

    srand((unsigned int)time(NULL));
    i=rand()%sum;
    p=A[i];
//    printf("选中的中间数：%d\n",p);
    for(i=0,j=0,k=0;i<sum;i++){
        if(A[i]!=-1){
            if(A[i]>=p){
                GREATER[j]=A[i];
//                printf("G %d ",GREATER[j]);
                j++;
            }
            if(A[i]<p){
                LESS[k]=A[i];
//                printf("L %d ",LESS[k]);
                k++;
            }
        }
    }
    if(k==mid){
        return LESS[k-1];
    }else if(k>mid){
//        printf("LESS");
        QuickSelet(LESS,k,mid);
    }else{
//        printf("GREAT");
        QuickSelet(GREATER,j,mid-k);
    }
}
int main(){
    int array[11];
    int result;
    memset(LESS,-1,sizeof(LESS));
    memset(GREATER,-1,sizeof(GREATER));
    Random(array,11);
    result=QuickSelet(array,11,6);
    printf("中位数是：%d",result);
    return 0;
}