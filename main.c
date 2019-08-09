struct Node{
  int data;
  struct Node* next;
}
struct Node* head;

void Reverse(struct Node* p){
   if(p->next != NULL){
    return;
   }
   Reverse(p->next);
   struct Node* q = p->next;
   q->next = p;
   p->next = NULL;
}

void Print(struct Node* p){
  if(p == NULL){
    printf("\n");
    return;
  }

  printf("%d ", p->data);
  Print(p->next);
}

int main(){
  //Run the two functions and test

}
    
