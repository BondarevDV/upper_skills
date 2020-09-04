#include <iostream>

typedef struct Node{
     int value;
     struct Node* next;
} Node;


void insert(Node** head, int value, int n){
     


}


void push(Node** head, int Value){
   Node* tmp = (Node*)malloc(sizeof(Node));
   tmp->value = Value;
   tmp->next = (*head);
   (*head) = tmp;
}


int pop(Node** head){
   Node* prev = NULL;
   int value;
   if (head == NULL)
      exit(-1);
   prev = (*head);
   value = prev->value;
   (*head) = (*head)->next;
   free(prev);
   return value;
}


Node* getNth( Node *head, int n){
      int counter = 0;
      while(head && counter < n){
	   head = head->next;	
	   counter++;
      }
      return head;     

}


Node* getLast( Node *head){
      if (head == NULL)
	 return NULL;
      while(head->next){
	   head = head->next;	
      }
      return head;     

}


void printSLinkedList(const Node *head){
     while(head){
         printf("%d ", head->value);
         head = head->next;	 
     }
     printf("\n");
}


int main(int argc, char* argv[]){
   int n = 10;
   Node* head = NULL;
   for(int i = 0; i < n; i++){
      push(&head, i);
   } 
   printSLinkedList(head);
   std::cout<<"-------------------------"<<std::endl;
   printSLinkedList(head);
}
