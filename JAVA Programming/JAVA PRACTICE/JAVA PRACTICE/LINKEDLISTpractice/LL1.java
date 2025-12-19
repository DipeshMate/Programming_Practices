package LINKEDLISTpractice;

public class LL1 {

    Node head;
    private int size ;

    class Node{
        String data;
        Node next = null;

        Node(String d){

            this.data = d;
            this.next = null;
            size++;
        }
    }

    //add first

    public void addFirst(String data){

        Node newNode = new Node(data);
        if(head == null)
        {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }
    // print

    public void printList(){

        if(head == null){
            System.out.println("List is empty");
            return;
        }
        Node curr = head;
        while(curr != null)
        {
            System.out.print(curr.data+" -> ");
            curr = curr.next;
        }
        System.out.println("Null");
    }

    public static void main(String[] args) {
        
        LL1 n1 = new LL1();

        n1.addFirst("4");
        n1.addFirst("5");
        n1.addFirst("6");

        n1.printList();
    }
}
