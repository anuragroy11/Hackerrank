#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        
        if ((root -> left == nullptr) && (root -> right == nullptr))
            return 0;
        else if (root -> left == nullptr)
            return(1 + height(root -> right));
        else if (root -> right == nullptr)
            return (1 + height(root -> left));
        
        return(max(1 + height(root -> left), 1 + height(root -> right)));
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    std::cout << height;

    return 0;
}
