/* Function to delete last node in the linked list */


void deleteLastNode(struct Node *head)
{
   struct Node* currNode = head;
   struct Node* nextNode = head->next;
    while(nextNode != NULL)
    {
        currNode = nextNode;
        nextNode = nextNode->next;
    }
    delete currNode;
}
