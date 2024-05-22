import java.util.Scanner;
public class bj10872 {
    public static void main(String[] argc){
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();
        System.out.println(fac(num));
        s.close();
    }

    public static int fac(int n){
        if(n == 0 || n ==1) return 1;
        return n * fac(n-1);
    }
}
