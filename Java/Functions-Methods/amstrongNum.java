/**
*    author: abhijayrajvansh
*    created: 09.08.2021  04:19:10
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class amstrongNum {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            int n = in.nextInt();
            System.out.println(amstrongNum(n));

            TT--;
        }
    }
    // three digits... or i'll use a loop to add hehe cool
    static boolean amstrongNum(int n){
        int original = n;
        int sum = 0;
        while(n > 0){
            int rem = n % 10;
            n /= 10; 
            sum += (rem * rem * rem);
        }
        return sum == original;
    }
}
