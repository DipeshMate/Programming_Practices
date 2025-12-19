import java.util.*;

class stringProduct {

    public String multiplyStrings(String s1, String s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int arr[] = new int[n1 + n2];
        // if both the strings have '-' sign
        int a = s1.charAt(0) == '-' ? -1 : 0;
        int b = s2.charAt(0) == '-' ? -1 : 0;

        for (int i = n1 - 1; i >= 0; i--) {
            int k = i + n2;
            int carry = 0;
            if (s1.charAt(i) != '-') {
                for (int j = n2 - 1; j >= 0; j--) {
                    if (s2.charAt(j) != '-') {

                        int x = (s1.charAt(i) - '0') * (s2.charAt(j) - '0') + carry + arr[k];// {s1.charAT(i)-'0'} for
                                                                                             // character int value [ 9
                                                                                             // + carry + 0]
                        arr[k] = x % 10; // for base value
                        carry = x / 10; // for carry
                        k--;
                    }
                }
                if (carry > 0) {
                    arr[k] = carry; // for last value of carry
                }
            }
        }

        // output must be in the form of String So, here we will convert this Array into
        // a String

        boolean flag = true;
        StringBuilder startingZero = new StringBuilder(); // StringBuilder is immutable
        for (int i = 0; i < arr.length; i++) {
            while (i < arr.length && flag == true && arr[i] == 0) { // checking for zeros at starting in a Strings
                i++; // for neglecting starting zero
            }
            flag = false; // here it is false so further values will be added to StringBuilder
            if (i < arr.length)
                startingZero.append(arr[i]);
        }
        // converting StringBuilder to String
        String str = startingZero.toString();

        // now checking the Sign(-,+) is there in the String
        if (a < 0 && b >= 0 || a >= 0 && b < 0)
            str = '-' + str;
        if (str.length() == 0)
            return "0";

        return str;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String a = sc.next();
            String b = sc.next();
            stringProduct g = new stringProduct();
            System.out.println(g.multiplyStrings(a, b));
        }
        sc.close();
    }
}