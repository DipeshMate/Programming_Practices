
public class string1 {
    public static void main(String[] args) {
        String str = "ABCDE";
        int n = str.length();
        String[] listOfStrings = new String[n];
        for (int i = 0; str.length() < n; i++) {
            if (str.charAt(i) >= 65 && str.charAt(i) <= 90) {
                listOfStrings[i] = Integer.toString(str.charAt(i) + 32);
            } else if (str.charAt(i) >= 97 && str.charAt(i) <= 122) {
                listOfStrings[i] = Integer.toString(str.charAt(i) - 32);
                System.out.println(listOfStrings[i]);
            }
        }
        // System.out.print(Arrays.toString(listOfStrings));
    }
}