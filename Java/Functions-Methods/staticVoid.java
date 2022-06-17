/**
*    author: abhijayrajvansh
*    created: 09.08.2021  03:42:40
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class staticVoid {
    public static void main(String[] args) throws java.lang.Exception {
        //Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            
            greet();

            TT--;
        }
    }
    static void greet (){
        Scanner in = new Scanner (System.in);
        System.out.print("Enter name : ");
        String name = in.next();
        System.out.println("hello " + name + ", how are you?");
    }
}
