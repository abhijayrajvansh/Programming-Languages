/**
*    author: abhijayrajvansh
*    created: 09.08.2021  04:04:08
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class methodOverloading {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            fun("bobby");
            fun(2711);
            // both will work !

            TT--;
        }
    }
    static void fun(String s){

        System.out.println(s);
    }
    static void fun(int n){
        
        System.out.println(n);
    }
}
