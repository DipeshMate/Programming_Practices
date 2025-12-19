class linkTry {
    Node head;
    private int size;

    public linkTry(){this.size = 0;}

    class Node{
        int data;
        Node next = null;

        public Node(int d){
            this.data = d;
            this.next = null;
            size++;
        }
    }
    public void addFirst(int d){
        Node newNode = new Node(d);
        if(head==null){ 
            head = newNode; return;
        }
        newNode.next = head;
        head = newNode;
    }
    public void printList(){
        if(head==null){System.out.print("list is empty"); return;}
        Node currNode = head;
        while (currNode!=null) {
            System.out.print(currNode.data+"->");
        }
        System.out.print("Null");
    }

    public static void main(String[] args) {
        linkTry l1 = new linkTry();
        l1.addFirst(2);
        l1.printList();
        
    }
}