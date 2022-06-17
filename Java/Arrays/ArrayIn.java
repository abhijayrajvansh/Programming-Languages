/**
*    author: abhijayrajvansh
*    created: 12.08.2021  03:26:07
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class ArrayIn {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            int[] arr = new int [12];

            for(int i = 0; i < arr.length; i++){
                arr[i] = in.nextInt();
            }

            int n = arr.length;

            // for(int i = 0; i < n; i++){
            //     System.out.print(arr[i] + " ");
            // }
            
            // Enhanched For each loop !

            for(int j : arr){
                System.out.print(j + " ");    
            }

            System.out.println(Arrays.toString(arr)); // converting it into strings

            TT--;
        }
    }
}
