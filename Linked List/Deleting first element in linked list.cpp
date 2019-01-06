/* Deleting first element in a linked list */
 


void del_first(struct* Node head)
{

struct Node *temp;

temp = head;
head = head->next;

free(temp);
cout<<" First element deleted successfully.
}
