Node* RemoveDuplicates(Node *head){
    Node *temp = head;
    
    while (temp -> next != NULL) {
        
        if (temp -> data != temp -> next -> data)
        temp = temp -> next;
        else {
            temp -> next = temp -> next -> next;
        }
    }
    
    return head;
  
}