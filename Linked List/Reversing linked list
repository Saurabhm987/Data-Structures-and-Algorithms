 
 /* function to reverse the given linked list  */
 
 
 void reverseList() 
    { 
        // Initialize current, previous and next pointer 
        Node *temp = head; 
        Node *prev = NULL, *next = NULL; 
  
  
        while (temp != NULL) 
        { 
            next = temp -> next;    // Store next 
            temp -> next = prev;    // Reverse the current node pointer 
            prev = temp;          // Move pointer to one position ahead. 
            temp = next; 
        } 
        head = prev;  // make previous to head 
    } 
