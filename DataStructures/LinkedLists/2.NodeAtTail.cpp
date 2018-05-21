/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data) {
    
    Node* newNode = new Node(); 
    newNode -> data = data;
    newNode -> next = NULL;
    
    if (head == NULL)
        head = newNode;
    else if (head->next == NULL) {
        head -> next = newNode;
        return head;
    }
    else Insert(head->next, data);
    
    return head;
        
}