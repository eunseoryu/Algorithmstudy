import java.util.Scanner;

public class bj1929 {
    

    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        isPrime(a,b);
        s.close();
    }
    
    public static void isPrime(int a, int b){
        boolean isPrime;
        while(a<=b){
            isPrime = true;

            for(int j =2; j <= Math.sqrt(a);j++){
                if(a%j == 0){
                    isPrime = false;
                    break;
                }
            }

            if(a != 1 && isPrime == true) System.out.print(a+" ");
            a++;
        }
    }
}
