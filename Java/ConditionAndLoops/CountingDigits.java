/**
*    author: abhijayrajvansh
*    created: 07.08.2021  03:11:04
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class CountingDigits {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            // find the occurance of a particular digit in an integer
            System.out.print("Enter the number : ");
            int num = in.nextInt();
            System.out.print("Enter the digit you want the occurance : ");
            int k = in.nextInt();
            int count = 0;
            while(num != 0){
                int last_digit = num % 10;
                if(last_digit == k){
                    count++;
                }
                num /= 10;
            }
            System.out.println(k + " occured " + count + " times ");
            TT--;
        }
    }
}
