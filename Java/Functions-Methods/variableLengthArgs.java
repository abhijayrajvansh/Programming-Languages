/**
*    author: abhijayrajvansh
*    created: 09.08.2021  03:52:43
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class variableLengthArgs {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            fun(2, 3, 4, 5, 6, 7, 7, 8, 9, 75475);

            TT--;
        }
    }
    static void fun (int ...arr){
        System.out.println(Arrays.toString(arr));
    }
}
