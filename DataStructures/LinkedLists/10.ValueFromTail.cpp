int GetNode(Node *head,int positionFromTail) {
      
    Node *temp = head;
    int length = 1;
    
    while (head -> next != nullptr) {
        length++;
        head = head -> next;
    }
    
    length = length - positionFromTail;
    head = temp;
    
    for (int i = 1; i < length; i++)
        head = head -> next;
    
    return (head -> data);
}

//Better Solution:
//Traverses the list only once

int GetNode(Node *head,int positionFromTail) {
      
    int index = 0;
    Node *current = head;
    Node *result = head;
    
    while (current != NULL) {
        current = current -> next;
        
        if (index > positionFromTail)
            result=result->next;
        else
            index++;
    }
    
    return result -> data;
}

