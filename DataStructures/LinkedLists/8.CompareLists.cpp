int CompareLists(Node *headA, Node* headB) {
    
    if (headA == NULL && headB == NULL) 
       return 1;
    else if (headA == NULL || headB == NULL) 
       return 0;


    if (headA->data == headB->data) 
       return CompareLists(headA->next, headB->next);
    else 
        return 0;
    
}