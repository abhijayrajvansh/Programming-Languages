/**
*    author: abhijayrajvansh
*    created: 13.08.2021  00:06:10
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.concurrent.CountDownLatch;
import java.util.Arrays;
import java.util.ArrayList;

class ArrayListTheory {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){

            // 2D- Arrays...

            // int n = in.nextInt();
            // int[][] arr = new int[n][n];
            // // System.out.println(arr.length);
            // for(int i = 0; i < arr.length; i++){
            //     for(int j = 0; j < arr[i].length; j++){
            //         arr[i][j] = in.nextInt();
            //     }
            // }
            // for(int i = 0; i < arr.length; i++){
            //     for(int j = 0; j < arr[i].length; j++){
            //         System.out.print(arr[i][j] + " ");
            //     }
            //     System.out.println();
            // }

            // ArrayList...

            // ArrayList<Integer> arr = new ArrayList<>(10);
            
            // for(int i = 0; i < 12; i++){
            //     arr.add(i + 1);
            // }
            // System.out.println(arr.contains(12));
            // System.out.println(arr);
            // arr.set(0, 21);
            // System.out.println(arr);
            // arr.remove(11);
            // System.out.println(arr);

            // ArrayList<Integer> list = new ArrayList(5);
            // for(int i = 0; i < 5; i++){
            //     list.add(in.nextInt());
            // }

            // for(int i = 0; i < 5; i++){
            //     System.out.println(list.get(i));
            // }// to get an element list.get(index) is used;

            ArrayList<ArrayList<Integer>> list = new ArrayList<>();

            //as a matrix
            // initialisation...

            for(int i = 0; i < 3; i++){
                list.add(new ArrayList<>());
                // ***
            }

            // add elements...

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    // here it is asking for list index... and without abouve step ***
                    // there is no list ... its null
                    list.get(i).add(in.nextInt());
                }
            }
            System.out.println(list);







            TT--;
        }
    }
}
