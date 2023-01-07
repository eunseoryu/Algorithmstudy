import java.util.Scanner;

public class bj6588 {
    static public void main(String[] args){
        Scanner s = new Scanner(System.in);
        int a, b=0;
        int n = 2;
        boolean found;
        while(true){
            n = s.nextInt();
            if(n == 0) break;
            if( n%2 != 0) {
                System.out.println("Goldbach's conjecture is wrong.");
            }
            else{
                found = false;
                a =3;

                while(!found){
                    b = n-a;
                    if(isPrime(b)) found = true;
                    else a = nextPrime(a);
                }

                System.out.println(n +" = " + a + " + " + b);
            }
            
        }
        s.close();
    }

    public static int nextPrime(int a){
        boolean is;
        while(true){
            is = true;
            a++;
            for(int i=2; i<= Math.sqrt(a); i++){
                if(a%i == 0)is = false;
            }
            if(is == true) return a;
        }
    }
    public static boolean isPrime(int b){
        boolean is =true;
        for(int i=2; i<= Math.sqrt(b); i++){
            if((b)%i == 0)is = false;
        }
        return is;
    }
}
