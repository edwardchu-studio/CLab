/* #include <stdio.h> */

struct list{
  int data;
  struct list *next;
};

struct list * list_insert(struct list *head,int data){
  struct list *new=malloc(sizeof(struct list));
  new->data=data;
  new->next=head;
  return new;
}
int test_struct(void){
  struct list *head=NULL;
  struct list *cursor=NULL;

  for(int i=0;i<10;i++){
    head=list_insert(head,i*2);
  }

  cursor=head;
  while(cursor!=NULL){
    printf("List entry at %p has data %d\n",cursor,cursor->data);
    cursor=cursor->next;
  }

  cursor=head;
  while(cursor!=NULL){
    struct list *to_delete=cursor;
    cursor=cursor->next;
    free(to_delete);
  }

  return 0;
}
