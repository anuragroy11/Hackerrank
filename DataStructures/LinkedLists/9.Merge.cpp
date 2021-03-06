Node* MergeLists(Node *headA, Node* headB) {
    
    if(headA == NULL) 
        return headB;
    else if (headB == NULL) 
        return headA;
    
    if(headA->data <= headB->data)
    headA->next = MergeLists(headA->next, headB);

    else {
        Node* temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA = temp;
        headA->next = MergeLists(headA->next, headB);
    }

    return headA;

}