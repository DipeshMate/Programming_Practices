package LINKEDLISTpractice;

public class LL3 {
    Node head;
    private int size;
        
    class Node{
    String data;
    Node next;
    public Node(String d){
        this.next=null;
        this.data = d;
    }
    }
    //add first to the the node
    public void addFirst(String d){
        Node newNode = new Node(d);
        if(head==null){ head=newNode;return;}
            newNode.next = head;
            head = newNode; 
    }

    public void addLast(String d){
            Node newNode = new Node(d);
        if(head==null){ head=newNode;return;}
        Node curr = head;
        while(curr.next!=null){
            curr=curr.next;
        }
        curr.next = newNode;
    
    }

    
    //print
    public void print(){
        if(head==null){
            System.out.println("list is empty");
            return;
        }
        Node curr = head;
        while(curr!=null){
        System.out.print(curr.data+" -> ");
        curr = curr.next;
        }

        System.out.print("Null");
    }



    public static void main(String[] args) {
        LL3 l3 = new LL3();

        l3.addFirst("1");
        l3.addFirst("2");
        l3.addFirst("3");
        
        l3.addLast("0");
        l3.print();
        
    }
}
