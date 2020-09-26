#include<stdio.h>
#include<stdlib.h>
//节点结构
typedef struct List{
    int data;
    struct List *next;
}list;

list *InitList()
{
    list *p=(list*)malloc(sizeof(list));
    if(p==NULL){
        printf("创建链表失败！请重试！\n");
        exit(-1);
    }
    p->next=NULL;
    printf("链表创建成功！\n");
    return p;
}
void DestoryList(list *p){
    if(p){
        free(p);
        p=NULL;
        printf("销毁完成！");
    }
}
void InsertLast(list *p){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=(list*)malloc(sizeof(list));
    p=p->next;
    printf("请输入数据：\n");
    scanf("%d",&p->data);
    p->next=NULL;
}
void pint(list *p){
    int i=1;
    while(p->next!=NULL){
        p=p->next;
        printf("%d\t%d\n",i,p->data);
        i++;
    }
}
int main(){
    int choice=1;
    list *p=InitList();
    while(choice){
        InsertLast(p);
        pint(p);
        printf("是否继续添加数据？（1->是，0->否）\n");
        scanf("%d",&choice);
    }
    DestoryList(p);
    return 0;
}