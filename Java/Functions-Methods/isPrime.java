/**
*    author: abhijayrajvansh
*    created: 09.08.2021  04:08:20
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class isPrime {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        System.out.println(isPrime(n));
    }
    static boolean isPrime (int n){
        if (n <= 1){
            return false;
        }
        int c = 2;
        while(c * c <= n){
            if(n % c == 0){
                return false;
            }
            c++;
            
            
        }
        if(c * c > n){
            return true;
        }
        return false;
    }
}
