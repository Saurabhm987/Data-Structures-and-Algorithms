/* Function to calculate the sum of the nodes */


void sumOfNodes(struct Node* head, int* sum) 
{ 
    // if head = NULL 
    if (!head){ 
        return; 
  }
    // traverse the remaining nodes 
    sumOfNodes(head->next, sum); 
  
    // total sum 
    *sum = *sum + head->data; 
} 
  
