class LLDelete {
    Node head;
    private int size;
    class Node{
        int data;
        Node next;
        Node(int d){
            this.data = d;
            this.next = null;
            size++;
        }
    }
    //add first element to list

    public void addFirst(int d){
        Node newNode = new Node(d);
        if(head==null) {head = newNode; return;}

        newNode.next = head;
        head = newNode;    
    }
    //add last element to list 

    public void addLast(int d){
        Node newNode = new Node(d);

        if(head==null){head = newNode; return;}
        Node curr = head;

        while (curr.next!=null) {
            curr =curr.next;
        }
        curr.next = newNode;
    }
    //print of list

    public void printLIST(){
        if(head==null){System.out.println("list is empty");return;}
        Node curr = head;
        while (curr!=null) {
            System.out.print(curr.data+"->");
            curr = curr.next;
        }
        System.out.println("NULL");
    }
    //delete first element from list
    public void deleteFirst(){
    if(head==null){System.out.println("list is empty"); return;} 
    size--;
    head = head.next;

    }

    //delete last element from list

    public void deleteLast(){
        //if node is null
            if(head==null){System.out.println("list is empty"); return;} 
            size--;
        // if node is single
        if(head.next==null){head = null;return;}

            Node secondlast = head;
            Node lastNode = head.next;
            while (lastNode.next!=null) {
                lastNode = lastNode.next;
                secondlast = secondlast.next;
            }

            secondlast.next = null;

    }
    //to get size

    public int getSize(){
        return size;
    }

    //reverse of list

    public void reverseList(){
        if(head==null || head.next == null) return;

        Node prev = head;
        Node curr = head.next;

        while (curr!=null) {
            Node nextNode = curr.next;
            curr.next = prev;

            //update the nodes or variable
            prev = curr;
            curr = nextNode;
        }

        head.next = null;
        head = prev;
    }
    public static void main(String[] args) {
        LLDelete l1 = new LLDelete();

        l1.addFirst(5);
        l1.addFirst(6);
        l1.addFirst(7);

        l1.addLast(4);
        l1.printLIST();
        l1.deleteFirst();
        l1.printLIST();
        l1.deleteLast();
        l1.printLIST();

        l1.getSize();
        System.out.println(l1.getSize());

        l1.reverseList();
        l1.printLIST();
    }
}