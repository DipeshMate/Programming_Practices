

public class ArrayList123 {

    public static void main(String[] args) {

        String a = "Anagram";
        String b = "Margana";
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
static boolean isAnagram(String A,String B)
{

        A=A.toLowerCase();
        B=B.toLowerCase();

        if(A.length()!=B.length())
        {
return false;
        }

        int[] arr = new int[26];

    for (int i = 0; i < A.length(); i++) {
        int index=A.charAt(i)-'a';
        arr[index]++;
    }
        for (int i = 0; i < B.length(); i++) {
            int index=B.charAt(i)-'a';
            arr[index]--;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }

return true;
    }

}
