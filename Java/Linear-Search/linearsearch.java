/**
*    author: abhijayrajvansh
*    created: 17.08.2021  04:09:24
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class linearsearch {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            int[] arr = new int[100];
            System.out.print("Enter the size of Array: ");
            int n = in.nextInt();
            System.out.println("Enter the elements of Array: ");
            for(int i = 0; i < n; i++){
                arr[i] = in.nextInt();
            }
            System.out.print("Enter the element you want to find: ");
            int key = in.nextInt();
            int ans = search(arr, key);
            System.out.println("The element is present at " + ans + " index");
            TT--;
        }
    }
    static int search(int[] arr, int key){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }
}
