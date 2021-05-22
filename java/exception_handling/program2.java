/* Name : Pankaj Singh 
 * University Rollno: 2014426
 * Class : Computer Engineering
 */
public class program2 {  
  
    public static void main(String[] args) {  
          
           try{    
                int a[]=new int[5];    
                a[5]=30/0;   
                a[6]=5; 
               }    
               catch(ArithmeticException e)  {  
                   System.out.println("zero cannot be in denominator!! ");  
                  }    
               catch(ArrayIndexOutOfBoundsException e)  {  
                   System.out.println("array out of given size!!");  
                  }               
    }  
}  