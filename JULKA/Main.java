import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        for (int i = 0; i < 10; i++) {
            BigInteger t = s.nextBigInteger();
            BigInteger k = s.nextBigInteger();
            BigInteger ans1 = t.add(k).divide(new BigInteger("2"));
            BigInteger ans2 = ans1.subtract(k);
            System.out.println(ans1);
            System.out.println(ans2);
        }
    }
}