/**
*    author: abhijayrajvansh
*    created: 07.08.2021  02:44:15
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class Fibo {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        int p = 0;
        int i = 1;
        int c = 2;
        System.out.print(0 + " " + 1 + " ");
        while(c <= n){
            int ans = p + i; // 0 + 1  -- 1 + 1 -- 1 + 2, 
            System.out.print(ans + " "); // 1, 2, 3, 
            p = i; // p = 0 -> 1, 1 -> 1
            i = ans; // i = 1 -> 1, 1 -> 2
            c++;
        }
        // while(c <= n){
        //     int temp = i;
        //     i += p;
        //     p = temp;
        //     c++;
        // }
        // System.out.print(i + " ");
    }
}
