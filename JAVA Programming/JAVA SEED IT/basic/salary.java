class salary {
    public static void main(String[] argu) {
        Float Sal = 5000f, hra, da, ta, gross;
        hra = Sal * 0.05f;
        da = 0.06f;
        ta = 0.07f;
        gross = Sal + hra + da + ta;

        System.out.print(gross);

    }

}
