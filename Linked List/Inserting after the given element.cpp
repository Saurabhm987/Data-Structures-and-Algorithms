/* Given a node prev_node, insert a new node after the given 
   prev_node */


void insretAfter(struct Node* prev_node, int new_data){
    
    //check if the given prev_node is NULL
    if(prev_node==NULL){
        cout<<"The pevious node cannot be NULL"<<endl;
        return;
    }
    
    //Allocate new node
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    
    //Put in the data
    new_node -> data = new_data;
    
    //make next of the new node as a next of the prev_node
    new_node -> next = prev_node -> next;
    
    //make next of the prev_node as new node
    prev_node -> next = new_node;
}
