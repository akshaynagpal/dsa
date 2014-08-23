/**
* The QueueDemo program gives user defined menu to carry different Queue operations.
*  
* @author Akshay Nagpal - https://www.twitter.com/akshay2626
* @since 2014-08-18
* @param x Element inputted by the user.
* @param choice Number chosen by the user from the menu according to which the appropriate operation is carried out. 
*/

import java.util.*;
import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;
public class QueueDemo {
    
    static int choice;
    static int x;
    
    public static void main(String[] args) {
        try {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        Queue q1 = new LinkedList();
        do{
             
                 System.out.println("\nQueue contains->"+ q1);
                 System.out.println("Enter choice:\n1.INSERT\n2.DELETE\n0.EXIT\n");
                 choice=Integer.parseInt(br.readLine());
                 switch(choice){
                     case 1:
                            System.out.println("Enter item to insert:");
                            x = Integer.parseInt(br.readLine()); 
                            q1.add(x);
                            break;
                     case 2:if(!q1.isEmpty())
                            {
                                System.out.println( "Element deleted->" + q1.element()); 
                            q1.remove();
                            }
                            else
                             System.out.println("Queue already empty!UNDERFLOW!");
                            break;
                     case 0:
                         System.out.println("BYE BYE!!");   
                         System.exit(choice);
                         break;
                     default:
                         System.out.println("Wrong choice try again!");
                         break;
                 }
                 
             
        }while(choice!=0);
    } catch (IOException ex) {
                 Logger.getLogger(QueueDemo.class.getName()).log(Level.SEVERE, null, ex);
             }
    } 
}