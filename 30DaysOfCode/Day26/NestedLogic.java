import java.io.*;
import java.util.*;

public class NestedLogic {

    public static void main(String[] args) {
        int[] actual = new int[3]; 
        int[] expected = new int[3];
        Scanner sc = new Scanner(System.in);
        
        actual[0] = sc.nextInt();
        actual[1] = sc.nextInt();
        actual[2] = sc.nextInt();
        sc.nextLine();
        expected[0] = sc.nextInt();
        expected[1] = sc.nextInt();
        expected[2] = sc.nextInt();
    
        if (expected[2] < actual[2]){
            System.out.println(10000);
        }
        else if (expected[1] < actual[1] && expected[2] == actual[2]){
            System.out.println(500 * (actual[1] - expected[1]));
        }
        else if (expected[0] < actual[0] && expected[2] == actual[2]){
            System.out.println(15 * (actual[0] - expected[0]));
        }
        else System.out.println(0);
    }
}