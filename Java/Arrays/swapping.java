/**
*    author: abhijayrajvansh
*    created: 13.08.2021  01:00:30
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class swapping {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            int [] arr = {1, 2, 3, 4, 5};
            System.out.println(Arrays.toString(arr));
            reverse(arr);
            System.out.println(Arrays.toString(arr));
            TT--;
        }
    }
    static void swap(int[] arr, int index1, int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }

    // to pointer mehtod !
    
    static void reverse(int[] arr){
        int start = 0;
        int end = arr.length - 1;

        while(start < end){
            swap(arr, start, end);
            start++; 
            end--;
        }
    }
}
