/*
* The StackDemo program gives user defined menu to carry different stack operations.
*  
* @author Akshay Nagpal - https://www.twitter.com/akshay2626
* @since 2014-08-18
* @param x -Element inputted by the user.
* @param choice -Number chosen by the user from the menu according to which the appropriate operation is carried out. 
*/

import java.util.*;
import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class StackDemo{
    private static int x; 
    private static int choice;
static void pushinstack(Stack st,int a){
  st.push(a);
}
static void popoutofstack(Stack st){
    System.out.print("Item popped->");
    Integer a = (Integer)st.pop();
    System.out.print(a);
}

public static void main(String args[]){
    BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
    Stack st = new Stack();
    
    do{
    System.out.println("\nStack contains->"+ st);    
    System.out.println("Enter choice:\n1.PUSH\n2.POP\n0.EXIT\n");
        try {
            choice=Integer.parseInt(br.readLine());
        } catch (IOException ex) {
            Logger.getLogger(StackDemo.class.getName()).log(Level.SEVERE, null, ex);
        }
    if(choice==1){
        try {
            System.out.println("Enter item to insert:");
            x = Integer.parseInt(br.readLine());
            pushinstack(st,x);
        } catch (IOException ex) {
            Logger.getLogger(StackDemo.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
     else if(choice==2){
         if(st.empty())
         {
             System.out.println("Stack is empty!Underflow!");
         }
         else
        popoutofstack(st);
    }
    
}while(choice!=0);
    if(choice==0){
        System.out.println("Bye Bye!");
        System.exit(0);
    }
}
}