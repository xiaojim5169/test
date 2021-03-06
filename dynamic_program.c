//#include <stdio.h>
//#include <string.h>
///*
// 根据书上数据写的代码，暂时只算到了10米的钢管的最大利润及其切割方案
// 伪代码就偷懒没写了，基本内容这里的top_down函数实现类似
//
// 输入数字最好别超过11，切割花费最好不超过3
// */
//
//int profit[10] = {1,5,8,9,10,17,17,20,24,30};
////用数组profit存储长度为i+1的钢管的售出价格(i为数组下标)
////better存储最佳获利，len存储最优解对应的第一段钢条的切割长度
//typedef struct data{
//    int better;
//    int len;
//}Data;
//
//void top_down(Data *data,int num,int cut){
//    int i,j,max,cut_cost;//,cut_cost暂时存储对应的切割花费
//    for(i=0;i<num;i++){
//        max=0;
//        for(j=0;j<i;j++){
//            if (max < profit[j] + data[i-j-1].better){
//                cut_cost = i==j+1?0:cut;
//                max = profit[j] + data[i-j-1].better-cut_cost;
//                data[i].len = j+1;
//            }
//        }
//        data[i].better=max;
//    }
//}
//
//
//
//int main(){
//    int len,cut,i,j;
//    Data data[20];        //注：data[0]不用来保存数据
//    memset(data,0,11);
//    printf("请输入你想求的钢管长度:");
//    scanf("%d",&len);
//    printf("请输入切割一次成本:");
//    scanf("%d",&cut);
//    top_down(data,len+1,cut);
//
//    for(i=1;i<=len;i++){
//        printf("%d米长的钢管最优收益值为：%d\n",i,data[i].better);
//        printf("对应切割方案为：");
//        j=i;
//        while(j>0){
//            printf("%d ",data[j].len);
//            j-=data[i].len;
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include <stdio.h>

int **sort(int *X,int *Y,int n,int m){
    int b[m+1][n+1],c[m+1][n+1];
    int i,j;
    for(i=0;i<m;i++){
        c[i][0]=0;
        b[i][0]=-1;
    }
    for(j=0;j<n;j++){
        c[0][j]=0;
        b[0][j]=-1;
    }
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(X[i]==Y[j]){
                c[i+1][j+1]=c[i][j]+1;
                b[i+1][j+1]=0;
            }else if(c[i][j+1]>c[i+1][j]){
                c[i+1][j+1]=c[i][j+1];
                b[i+1][j+1]=1;
            }else{
                c[i+1][j+1]=c[i+1][j];
                b[i+1][j+1]=2;
            }
        }
    }
    printf("LSC长度：%d\n",c[m][n]);
    return b;
}
int myprint(int **b,int *X,int i,int j){
    if(i==0||j==0)return 0;
    if(b[i][j]==0){
        myprint(b,X,i-1,j-1);
        printf("数：%d ",X[i]);
    }else if(b[i][j]==1){
        myprint(b,X,i-1,j);
    }else{
        myprint(b,X,i,j-1);
    }
}
int main(){
    int X[]={1,2,3,2,4,1,2};
    int Y[]={2,4,3,1,2,1};
    int **b=sort(X,Y,7,6);
    myprint(b,X,7,6);
    return 0;
}