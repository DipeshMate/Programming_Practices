public class IsPrime {

    // static int Prime(int n) {
    //     for (int i = 2; i < n / 2; i++) {
    //         if (n % i == 0)
    //             return n;
    //     }
    //     return n;
    // }

    public static void main(String[] args) {
        // System.out.print(Prime(13) + "is Prime");
        String s1 = "abcde";
        String s2 = "ace";


        int m=s1.length();
        int n=s2.length();
        int dp[][]=new int[m+1][n+1];
        // dp[0][0]=1;
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s1.charAt(i-1)==s2.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1]+1;
           
        }
                }
                else{
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);

                }
            }
        }
        for (int i = 1; i < dp.length; i++) {
            for (int j = 1; j < dp.length; j++) {
                System.out.println(dp[i][j]);
            }
        }
    }
}
