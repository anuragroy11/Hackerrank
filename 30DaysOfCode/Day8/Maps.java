//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Maps{
    public static void main(String []argh){
        
        Map<String, Integer> phonebook = new HashMap<String, Integer>();
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            
            phonebook.put(name, phone);
        }
        while(in.hasNext()){
            String s = in.next();
            
            if (phonebook.get(s) == null)
                System.out.println("Not found");
            else System.out.println(s + "=" + phonebook.get(s));
        }
        in.close();
    }
}