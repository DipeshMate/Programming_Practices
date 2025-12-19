class tp {
    public static void main(String[] args) {
        int n = 6;
        for (int i = n; i > 0; i--) {
            for (int j = n; j > i; j--) {
                System.out.print("* ");
            }
            System.out.println();
        }
        for (int i = 0; i <= n; i++) {
            for (int j = n; j > i; j--) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}