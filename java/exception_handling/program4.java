/* Name : Pankaj Singh 
 * University Rollno: 2014426
 * Class : Computer Engineering
 */
public class program4 {  
  
    public static void main(String[] args) {  
          
           try{    
                int a[]=new int[5];      
                a[6]=5;
                a[5]=30/0; 
               }      
               catch(ArrayIndexOutOfBoundsException e)  {  
                   System.out.println("array out of given size!!");  
                  }
               finally {
                System.out.println("This is the finally block!!");
                  }              
    }  
}  