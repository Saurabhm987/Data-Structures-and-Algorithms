
/*
Input:
You have to complete a method which takes one argument: the head of the linked list. You should not read any input from stdin/console. The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. There are multiple test cases. For each test case, this method will be called individually.

Output:
Print the elements of the linked list in a single line separated by a single space.

Example:
Input
2
2
1 2
1
4

Output
1 2
4
*/


void display(Node *head)
{
    
while(head!=NULL){
        
cout<<head->data<<" ";
        
head=head->next; 
          
}
     
}




