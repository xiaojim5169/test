#include <stdio.h>
int fib1(int N){                  //fib1用递归，速度是最慢的
    if(N==1||N==2)return 1;
    return fib1(N-1)+fib1(N-2);
}


int help(int *A,int N){
    if(N==1||N==2)return 1;
    if(A[N])return A[N];
    A[N]=help(A,N-1)+help(A,N-2);
    return A[N];
}

int fib2(int N){                //自顶向下
    if(N<0)return 0;
    int A[N+1];
    for(int i=0;i<N+1;i++){
        A[i]=0;
    }
    return help(A,N);
}


int fib3(int N){                //自下向上
    if(N==1||N==2)return 1;
    int A[N+1];
    for(int i=0;i<N+1;i++){
        A[i]=0;
    }
    A[1]=A[2]=1;
    for(int i=3;i<=N;i++){
        A[i]=A[i-1]+A[i-2];
    }
    return A[N];
}


int fib4(int N){                //空间复杂度为O(1)
    int prev=1,curr=1;
    for (int i = 3; i <= N; i++) {
        int sum = prev + curr;
        prev = curr;
        curr = sum;
    }
    return curr;
}
int main(){
    int N=20;
    printf("%d ",fib1(N));
    printf("%d ",fib2(N));
    printf("%d ",fib3(N));
    printf("%d",fib4(N));
    return 0;
}