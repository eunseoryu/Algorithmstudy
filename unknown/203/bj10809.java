import java.util.Scanner;

public class bj10809{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int[] ans = new int[26];
        
        String str = s.next();

        for(int i=0 ;i<26; i++){
            ans[i] = -1;
        }

        for(int i=0; i < str.length(); i++){
            if(ans[str.charAt(i) - 'a'] == -1){
                ans[str.charAt(i) - 'a'] = i;
            }
        }
        
        for(int x: ans){
            System.out.printf(x+" ");
        }
        s.close();
    }
}

