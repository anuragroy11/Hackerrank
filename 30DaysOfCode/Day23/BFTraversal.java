import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class BFTraversal{

    static void levelOrder(Node t){
        Queue<Node> q = new LinkedList<>();
            
        if(t != null) {
            // enqueue current root
            q.add(t);
        
            // while there are nodes to process
            while(!q.isEmpty()) {
                // dequeue next node
                Node tree = q.remove();
                System.out.print(tree.data + " ");
        
                // enqueue child elements from next level in order
                if(tree.left != null) {
                    q.add(tree.left);
                }
                if(tree.right != null) {
                    q.add(tree.right);
                }
            }
        } 
    }

    public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
    }   
}
