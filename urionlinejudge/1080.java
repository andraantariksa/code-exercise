import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int max = 0, max_pos = 0, inp;
        for(int i = 1; i <= 100; i++){
            inp = scan.nextInt();
            if(inp >= max){
                max_pos = i;
                max = inp;
            }
        }
        System.out.println(max);
        System.out.println(max_pos);
    }
}