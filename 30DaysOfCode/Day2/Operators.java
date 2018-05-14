import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Operators {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double meal_cost = in.nextDouble();
        int tip_percent = in.nextInt();
        int tax_percent = in.nextInt();
        in.close();
        
        double totalCost;
        int output;
        
        totalCost = meal_cost*(100+tip_percent+tax_percent)/100;
        output = (int)Math.round(totalCost);
        
        System.out.println("The total meal cost is " + output + " dollars.");
    }
}