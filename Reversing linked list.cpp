/* Function to reverse the given linked list */



void rev_list() 
    { 
        // Initialize all pointer position. 
        
        Node *current = head; 
        Node *prev = NULL, 
        *next = NULL; 
  
  
        while (current != NULL) 
        { 
            // Store next 
            next = current->next; 
  
            // Reverse pointer of current node 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev; 
    }
