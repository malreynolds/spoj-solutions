import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t != 0) {
            int n = s.nextInt();
            BigInteger ans = BigInteger.ONE;
            for (int i = 2; i <= n; i++) {
                ans = ans.multiply(BigInteger.valueOf(i));
            }
            System.out.println(ans);
            t--;
        }
    }
}