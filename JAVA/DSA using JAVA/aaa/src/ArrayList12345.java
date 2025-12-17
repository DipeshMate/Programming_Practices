import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class ArrayList12345 {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        //pattern/expression to be match
        Pattern  p=Pattern.compile("@gmail");
        System.out.println(p);
        //Regular expression
        Matcher m=p.matcher("abc@gmail.com");
        System.out.println(" Result :  "+m);

        if(m.find())
            System.out.println(" Result :  "+m);
    }
}


