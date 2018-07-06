/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/

vector<int> a;

void inOrderTraversal(Node* root)
{
    if(root) {
        inOrderTraversal(root->left);
        a.push_back(root->data);
        inOrderTraversal(root->right);
    }
}

bool checkBST(Node* root) {
    inOrderTraversal(root);
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] >= a[i+1])
            return false;
    }
    return true;   
}