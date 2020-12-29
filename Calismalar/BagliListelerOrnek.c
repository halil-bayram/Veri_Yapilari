#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int data;
	int key;
	struct node *next;
};
struct node *head = NULL;
struct node *current= NULL;

void listele(){
	
	struct node *ptr = head;

	while(ptr != NULL){
		printf("Key AND Data\t<======>\t");
		printf("(%d,%d)\n",ptr->key,ptr->data);
		
		ptr=ptr->next;
	}
}

void elemanEkle(int key,int data){
	
	struct node *link =(struct node*) malloc(sizeof(struct node));
	
	link->data=data;
	link->key=key;
	link->next=head;
	head=link;
}
int main(){
	elemanEkle(5,10);
	elemanEkle(4,8);
	elemanEkle(3,6);
	elemanEkle(2,4);
	elemanEkle(1,2);
	elemanEkle(6,12);
	listele();
	
	return 0;
}
