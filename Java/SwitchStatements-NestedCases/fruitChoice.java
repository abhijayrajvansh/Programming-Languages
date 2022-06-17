/**
*    author: abhijayrajvansh
*    created: 09.08.2021  02:50:42
**/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

public class fruitChoice {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner (System.in);
        int TT = 1;
        // TT = in.nextInt();
        while(TT != 0){
            // 1st way we can using break keyword...
            String fruit = in.next();
            switch (fruit) {
                case "mango":
                    System.out.println("King of fruits");
                    break;
                case "apple":
                    System.out.println("Doc's fav fruit xD");
                    break;    
                default:
                    System.out.println("Enter mango or apple !");
                    break;
            }

            // pointer like method for switch case without using break..
            
            // String fruit = in.next();

            // switch (fruit){
            //     case "mango"; -> System.out.println("God of fruits");
            //     case "apple"; -> System.out.println("doc's fav apple");
            //     default; -> System.out.println("enter mango or apple");
            // }

            //above code is not working for vscode


            TT--;
        }
    }
}
