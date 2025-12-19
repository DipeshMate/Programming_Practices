// package LINKEDLISTpractice;

class linkedList{
    
    Node head;
    private int size;

    linkedList(){this.size = 0;}
class Node{

    String data;
    Node next=null;
    
    Node(String d)
    {
        this.data = d;
        this.next = null;
        size++;
    }
}

//add First 

public void addFirst(String data)
{
    Node newNode = new Node(data);
    if(head == null){
        head= newNode;
        return;
    }

    newNode.next = head;
    head = newNode;
}

//add last

public void addLast(String data)
{
    Node newNode = new Node(data);
    if(head == null){
        head= newNode;
        return;
    }

    Node curr = head;
    while(curr.next != null)
    {
        curr = curr.next; // here we are traverse till head.next not become null and when it becomes null
    }

    curr.next = newNode; // here we will point head to newNode;

}
//print nodes

public void printLIST()
{
    if(head == null)
    {
        System.out.println("List is empty");
        return;
    }
Node curr = head;
    while(curr != null)
    {
        System.out.print(curr.data + " -> ");
        curr = curr.next;
    }
    System.out.println("NULL");
}


//Delete first Node

public void deleteFirst(){
    if(head==null)
    {
        System.out.println("List is EMpty");
        return;
    }
    size--;
    head = head.next;
}

//delete last node

public void deleteLast(){

    //if node is null
    if(head==null)
    {
        System.out.println("List is EMpty");
        return;
    }
    size--;

    //if node is single node

    if(head.next == null)
    {
        head = null;
    }

    Node secondLast = head;
    Node lastNode = head.next;

    while(lastNode.next != null)
    {
        lastNode = lastNode.next;
        secondLast = secondLast.next;
    }

    secondLast.next = null;
}

public int getSize(){
    return size;
}

//REVERSING THE LIST

public void reverseIterate(){

    if(head == null || head.next == null)
    {
        return;
    }
    Node prev = head;
    Node curr = head.next;


    while(curr != null)
    {
        Node nextNode = curr.next; 
        curr.next = prev;

        //update
        prev = curr;
        curr = nextNode;

    }

    head.next = null;
    head = prev;
}

// recursive reverse 




    public static void main(String[] args) {
        
        linkedList List = new linkedList();
        List.addFirst("a");
        List.addFirst("is");
List.addLast("List");

List.addFirst("this");
        List.printLIST();

        // List.deleteFirst();

        // List.printLIST();
        
        // List.deleteLast();
        
        // List.printLIST();
        System.out.println(List.getSize());


        
        // System.out.println(node1.data);
        // System.out.println(node1.next.data);
        // System.out.println(node2.data);
        // System.out.println(node2.next);

    List.reverseIterate();
    List.printLIST();
    
    }
}