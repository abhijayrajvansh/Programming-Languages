/**
*    author: abhijayrajvansh
*    created: 07.08.2021  02:36:07
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class LegalAge {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        if(n < 18){
            System.out.println("You are not allowed");
        }
        else{
            System.out.println("You are allowed");
        }
    }
}
