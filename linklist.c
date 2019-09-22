# include "head.h"
typedef struct LNode
{
    int date;
    struct LNode *next;
}LNode;

typedef struct DLNode{
    int freq;
    int data;
    struct DLNode *pre;
    struct DLNode *next;
}DLNode;

void merge(LNode *A,LNode *B)
{
    LNode *p=A->next,*q=B->next;
    int count=1;
    free(B);
    A->next=0;
    LNode *r;
    while(p&&q){
        if(count%2!=0){
            r=p->next;
            p->next=A->next;
            A->next=p;
            p=r;
            q=q->next;
        }
        else{
            r=q->next;
            q->next=A->next;
            A->next=q;
            q=r;
            p=p->next;
        } 
        count++;  
    }

    if(p){
        if(count%2!=0){
            r=p->next;
            p->next=A->next;
            A->next=p;
            p=r;
        }else
            p=p->next;
        count++;
    }
    if(q){
        if(count%2==0){
            r=q->next;
            q->next=A->next;
            A->next=q;
            q=r;
        }else
            q=q->next;
        count++;
    }
}

LNode * find_del(LNode *head,LNode **pm){//不带表头
    LNode *p=head,*q,*pre;//q是要删除的结点

    *pm=q;//按题目要求
    return p;
}

void Locate(DLNode L, int x)
{
    DLNode *p=L.next,*q;

    while(p){
        if(p->data==x){
            break;
        }
        p=p->next;
    }

    if(p){
        p->freq++;
        //和前面的所有结点比较，找到频度大于等于p的结点q
        
    }

    if(q&&q->next!=p){
        //把p从原来的位置删除

        //把p插入到q的后面
    }   
}