public class a {
    public static void main(String[] args) {
        for (int i = 5; i >= 0; i--) {
            for (int k = i; k > 0; k--) {
                System.out.print(" ");
            }
            for (int l = 4; l >= i; l--) {
                System.out.print("*");
            }
            for (int j = 5; j >= i; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = 1; i <= 5; i++) {
            for (int k = i; k > 0; k--) {
                System.out.print(" ");
            }
            for (int l = 4; l >= i; l--) {
                System.out.print("*");
            }
            for (int j = 5; j >= i; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}