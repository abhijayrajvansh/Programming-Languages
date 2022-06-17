/**
 *    author: abhijayrajvansh
 *    created: 12.08.2021  03:36:53
 **/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        // TT = in.nextInt();

            // 2D Arrays...
            /*
            1 2 3
            4 5 6
            7 8 9
            */

            // int[][] arr = new int[3][]; // in c++ adding columns was mandatory vice versa
            int[][] arr = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
            };
            System.out.println(arr.length); // no of rows

            for(int row = 0; row < arr.length; row++){
                // for each starting of the row we create a column..
                for(int col = 0; col < arr[row].length; col++){
                    arr[row][col] = in.nextInt();
                }
            }
            // for(int row = 0; row < arr.length; row++){
            //     // for each starting of the row we create a column..
            //     for(int col = 0; col < arr[row].length; col++){
            //         System.out.print(arr[row][col] + " ");
            //     }
            //     System.out.println();
            // }
            for(int row = 0; row < arr.length; row++) {
                // for each starting of the row we create a column..

                System.out.println(Arrays.toString(arr[row]));
            }
        }
    }
}
