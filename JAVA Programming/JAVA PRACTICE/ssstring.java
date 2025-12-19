public class ssstring {
    public static void main(String[] args) {

        String s = "abc";
        int len = s.length();

        for (int i = 0; i < len; i++) {
            // int count = 0;
            String str = "";
            for (int j = i; j < len; j++) {
                str += s.charAt(i);
                System.out.println(str);
            }
        }
    }
}
