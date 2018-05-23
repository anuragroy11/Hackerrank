Node* Reverse(Node *head) {
    
    if (head == NULL || head -> next == NULL) {  
        return head;  
    }

    Node *remaining = Reverse(head -> next);
    head -> next -> next = head; 
    head -> next = NULL;  

    return remaining; 
  
}