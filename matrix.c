//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//int MATRIX_CHAIN_MULTIPLY(int *A,int s[][40],int i,int j){
//    //s为最优切割值对应切割点的表，A是最优切割值表，这里用二维数组实现，i，j为下标
//    int n,min,temp;
//    if((j-i)==2){
//        s[i][j]=i+1;
//        return A[i]*A[i+1]*A[j];
//    }else{
//        min=MATRIX_CHAIN_MULTIPLY(A,s,i,i+2)+MATRIX_CHAIN_MULTIPLY(A,s,i+3,j)+A[i]*A[i+2]*A[j];
//        s[i][j]=i+2;
//        for(n=i+3;n<j-2;n++){
//            if((temp=MATRIX_CHAIN_MULTIPLY(A,s,i,n)+MATRIX_CHAIN_MULTIPLY(A,s,n+1,j)+A[i]*A[n]*A[j])>min)
//                min=temp;
//                s[i][j]=n;
//        }
//    }
//}
//int main(){
//    char buf[300];
//    int p[40];
//    int i,j=0,k;
//    int s[40][40];
//    printf("请输入矩阵序列(请连续输入，且每个数据间加空格)：\n");
//    memset(p,1,sizeof(p));
//    fgets(buf,sizeof(buf),stdin);
//    for(i=0;i<sizeof(buf);i++){
//        if(buf[i]=='\n'){
//            break;
//        }else if(buf[i]==' '){
//            continue;
//        }else if(buf[i]<'0'||buf[i]>'9'){
//            printf("输入错误，其中有不是数字的字符存在，请重新运行本程序！\n");
//            exit(-1);
//        }else{
//            p[j]=(int)buf[i]-48;
//            j++;          //j+1的值即为矩阵序列的个数
//        }
//    }
//    MATRIX_CHAIN_MULTIPLY(p,s,0,j);
//    return 0;
//}
//




