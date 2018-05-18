import java.io.*;
import java.util.*;


public class Arrays {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        in.close();
        
        for(int r=n-1; r >= 0; r--) {
            System.out.print(arr[r] + " ");
        }
    }
}
