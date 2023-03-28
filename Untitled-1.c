#include <stdio.h>
#include <stdlib.h>

typedef struct _Node{
	int value;
	struct _Node* next;
}Node;

Node* head;

Node* makenewnode(int X){
	Node* p;
	p = (Node*)malloc(sizeof(Node));
	if(p==NULL){
		printf("Error in mem alloc\n");
		exit(0);
	}
	p->value=X;
	p->next=NULL;
	return p;
}

void duyetds(Node *head){
	Node *p=head;
	printf("\n");
	while(p!=NULL){
		printf("%d ",p->value);
		p=p->next;
	}
}

int main(){
	Node *old_p,*p,*head=NULL;
	int i;
	
	for(i=1;i<10;i++){
		p=makenewnode(i);
		if(i==1){
			head=p;
		}
		else{
			old_p->next=p;
		}
		old_p=p;
	}
	
	duyetds(head);
	
	return 1;
}