
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*next;
};
void instertnode(struct node**s,int i){
    struct node *t=*s;
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->info=i;
    n->next=NULL;
    if (*s==NULL)
    {
        *s=n;
    }
    else{
      while((t)->next!=NULL){
        t=(t)->next;
      }
        t->next=n;
    }
}
void shownode(struct node*s){
     int i=1;
     if ((s)==NULL)
    {
        printf("NULL");
    }
      while((s)->next!=NULL){
        printf("Value of Node %d is %d\n",i,s->info);
        s=(s)->next;
        i++;
      }
      printf("Value of Node %d is %d\n",i,s->info);

}
void deletenode(struct node*s,int k){
    struct node*n;
    struct node*t=s;
    for(int i=1;i<k-1;i++){
        t=t->next;
        if(t->next==NULL){
            printf("Invalid NODE!");
            return;
        }
    }
    n=t->next;
    t->next=n->next;
    free(n);
}

int main(){
    int n;
    scanf("%d",&n);
    struct node*start=NULL;
    instertnode(&start,7);
    instertnode(&start,13);
    instertnode(&start,17);
    instertnode(&start,23);
    instertnode(&start,37);
    shownode(start);
    printf(" \n");
    deletenode(start,n);
   // instertnode(&start,41);
    shownode(start);


}
