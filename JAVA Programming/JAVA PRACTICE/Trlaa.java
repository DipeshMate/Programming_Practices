
public class Trlaa {
    public static void main(String[] args) {
        String str1 = "Coding";
        int len = str1.length();
        String str2 = "";
        System.out.println(len);
        // below loop is for reverse..!!! the string..!!!
        while (len > len / 2) {
            len--;
            str2 += str1.charAt(len);
        }
        str1 = str1.toUpperCase();
        str2 = str2.toLowerCase();
        System.out.println(str1);// uppercase
        System.out.println(str2);// lowercase

        String str = str1 + str2;
        System.out.println(str);
        if (str.contains("NGgn")) {
            str = str + "Ninjas";
        }
        str = str.toUpperCase();
        System.out.println(str);
    }
}
