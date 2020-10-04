#include<stdio.h>
void Quick_sort(int arr[],int left,int right){
    if(left>=right){
        return ;
    }
    int i=left;
    int j=right;
    int key=arr[left];
    while(i<j){
        while(i<j&&key<=arr[j]){
            j--;
        }
        arr[i]=arr[j];
        while(i<j&&key>=arr[i]){
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i]=key;
    Quick_sort(arr,left,i-1);
    Quick_sort(arr,i+1,right);
}
int pint(int arr[],char message[]){
    int i;
    printf("%s\n",message);
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10]={9,8,5,3,2,4,1,7,6,0};
    pint(arr,"排序前:");
    Quick_sort(arr,0,9);
    pint(arr,"排序后:");
    return 0;
}
