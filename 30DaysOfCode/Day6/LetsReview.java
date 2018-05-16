import java.io.*;
import java.util.*;

public class LetsReview {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner scan = new Scanner(System.in);
        
        int t;
        String input;
        
        t = scan.nextInt();
        input = scan.nextLine();
        
        while (t>0) {
            
            input = scan.nextLine();
            
            char[] splitInput = input.toCharArray();
            
            //Printing out the even indexed characters
            for (int i=0; i<input.length(); i=i+2) {
                System.out.print(splitInput[i]);
            }
            
            System.out.print(" ");
            
            //Printing out the odd indexed characters
            for (int i=1; i<input.length(); i=i+2) {
                System.out.print(splitInput[i]);
            }
            
            System.out.println("");
            
            t--;
        }
        
        scan.close();
    }
}