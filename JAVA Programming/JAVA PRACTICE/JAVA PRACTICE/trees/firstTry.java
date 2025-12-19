import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 * firstTry
 */
public class firstTry {


    public static Node createTree(){
        Node root = null;
        System.out.println("Enter data");
        int data = sc.nextInt();

        if(data == -1) return null;

        root = new Node(data);
        System.out.println("Enter left data "+data);

        root.left = createTree();

        System.out.println("Enter right data "+data);
        root.right = createTree();


        return root;

    }
    static void inOrder(Node root){
        if (root == null) return;
        inOrder(root.left);
        System.out.println(root.data+" ");
        inOrder(root.right);
    }
    static void preOrder(Node root){
        if (root == null) return;
        System.out.println(root.data+" ");
        preOrder(root.left);
        preOrder(root.right);
    }
    static void postOrder(Node root){
        if (root == null) return;
        postOrder(root.left);
        postOrder(root.right);
        System.out.println(root.data+" ");
    }

    static void printLevelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            Node curr = q.poll();
            System.out.print(curr.data + " ");
            if(curr.left != null) q.add(curr.left);
            if(curr.right != null) q.add(curr.right);
        }
    }
    

    static Scanner sc = null;
    public static void main(String[] args) {
        sc = new Scanner(System.in);
        Node root =  createTree();
        // inOrder(root);
        // System.out.println();
        // preOrder(root);
        // System.out.println();
        // postOrder(root);
        // Integer [] arr = {2,7,2,null,null,6,5,null,null,11,null,null,5,null,null,9,4,null,null,null};
        printLevelOrder(root);
    }
}
class Node{
    Node left, right;
    int data;

    public Node(int data){
        this.data = data;
    }
    
}

