/**
 *    author: abhijayrajvansh
 *    created: 07.08.2021  02:38:27
 **/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class CheckCase {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        char ch = in.next().trim().charAt(0);

        if(ch >= 'a' && ch <= 'z'){
            System.out.println("lower case");
        }
        else{
            System.out.println("upper case");
        }
    }
}
