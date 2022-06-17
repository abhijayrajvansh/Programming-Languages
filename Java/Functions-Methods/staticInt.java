/**
*    author: abhijayrajvansh
*    created: 09.08.2021  03:48:47
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class staticInt {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            int a = in.nextInt();
            int b = in.nextInt();
            int ans = sum(a, b);
            System.out.println(ans);
            TT--;
        }
    }
    static int sum(int a, int b){
        return a + b;
    }
}
