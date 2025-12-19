class sortsum {

    public static void main(String[] args) {

        // 1 sum and greatest among inputs..!!

        int m = 0, sum = 0;
        for (int i = 0; i < args.length; i++) {
            int s = Integer.parseInt(args[i]);
            sum = sum + m;

            if (m <= s) {
                m = s;
            }
        }
        System.out.println(+sum + " sum of all giveninputs");
        System.out.println(+m + " Greatest among all");

    }
}

//
// int a[size],swap;
// for(int i = 0; i < 5; i++)
// {
// scanf("%d",&a[i]);
// }
// printf("\n");
//
// for(int i = 0; i < size - 1; i++)
// {
// for(int j = i + 1; j < size; j++)
// {
// if( a[i] > a[j] )
// {
// swap = a[i];
// a[i] = a[j];
// a[j] = swap;
// }
// }
//// printf("%d",swap);
// }
// for(int i = 0; i < 5; i++)
// {
// printf("%d",a[i]);
// }