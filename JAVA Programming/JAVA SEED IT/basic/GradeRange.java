class GradeRange {

    public static void main(String[] argu) {

        float m1 = 38.5f, m2 = 38.3f, m3 = 42.f, t, p;
        t = m1 + m2 + m3;
        p = t / 100;

        if (p >= 75 && p <= 100) {
            System.out.print("Grade A" + p);
        } else if (p >= 45 && p <= 75) {
            System.out.print("Grade B" + p);
        } else if (p >= 25 && p <= 45) {
            System.out.print("Grade C " + p);
        } else {
            System.out.print("Fail");

        }

    }

}