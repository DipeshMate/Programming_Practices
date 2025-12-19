
class maxmin {

    static int max;
    static int min;

    maxmin(int ma, int mi) {
        max = ma;
        min = mi;
    }

    public int getmax() {
        return max;
    }

    public int getmin() {
        return min;
    }

    public static void main(String[] args) {
        maxmin s1 = new maxmin(56, 55);
        maxmin s2 = new maxmin(56, 55);
        maxmin s3 = new maxmin(56, 55);

        if (s1.getmax() > s2.getmax() && s1.getmax() > s3.getmax()) {
            System.out.print(s1.getmax());
        }
        if (s2.getmax() > s3.getmax() && s2.getmax() > s1.getmax()) {
            System.out.print(s2.getmax());
        }
        if (s3.getmax() > s1.getmax() && s3.getmax() > s2.getmax()) {
            System.out.print(s3.getmax());
        }

    }

}
