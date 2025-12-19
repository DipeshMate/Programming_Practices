package LINKEDLISTpractice;

class LL2{
    Node head;
    private int size;

    LL2(){
        this.size=0;
    }

    class Node {
        int data;
        Node next = null;
        
        Node(int d){
            this.data = d;
            this.next = null;
            size++;
        }
    }

    //add element to first

    public void addFirst(int data){

        Node newNode = new Node(data);
        if(head == null)
        {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }

    public void addLast(int data){
        Node newNode = new Node(data);
        if(head == null)
        {
            head = newNode;
            return;
        }

        Node currNode = head;
        while(currNode.next!=null){
            currNode = currNode.next;
        }
        currNode.next = newNode;

    }
    //print of linkedlist

    public void printList(){

        if(head==null)
        {
            System.out.println("List is empty");
            return;
        }

        Node currNode = head;
        while(currNode!=null)
        {
            System.out.print(currNode.data+" -> ");
            currNode = currNode.next;
        }

        System.out.println("Null");
        
    }

    //delete first node

    public void deleteFirst(){
        if(head==null)
        {
            System.out.println("list is empty");
            return;
        }
        size--;
        head = head.next;
    }

    public void deleteLast(){
        if(head==null)
        {
            System.out.println("list is empty");
            return;
        }
        size--;

        if(head.next == null){
            head = null;
            return;
        }
        Node secondLast = head;
        Node lastNode = head.next;  

        while(lastNode.next != null) {
            lastNode = lastNode.next;
            secondLast = secondLast.next;
        }
        secondLast.next = null;
    }

    public int getSize(){
        return size;
    }

    public void middleInsertion(int data){

    }


    public static void main(String[] args) {

        LL2 n2 = new LL2();
        n2.addFirst(2);
        n2.addFirst(3);
        n2.addFirst(4);
        
        n2.addLast(1);  
        n2.printList();
    System.out.println(n2.getSize());
    
    n2.deleteFirst();
    n2.printList();
    System.out.println(n2.getSize());
    
    n2.deleteLast();
    n2.printList();
    System.out.println(n2.getSize());


    }
}
