/* Given a reference pointer to the head of a list 
   and an int,  inserts a new node on the front of the list. */


void push(struct Node* head, int new_data) {

    // Allocate new node 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Put in the data
    new_node -> data= new_data;
     
    //Make next of new node as head
    
    new_node -> next= head;
    
    // move the head to point to the new node
    head= new_node;
 
}
