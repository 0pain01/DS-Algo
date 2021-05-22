/* Name : Pankaj Singh 
 * University Rollno: 2014426
 * Class : Computer Engineering
 */
class MyException extends Exception
{
   public void failresult(){
       System.out.println("You are so dead, failed  :(");
   }
}
  
public class program6
{
    public static void main(String args[])
    {
        int marks=49;
        try{
                if (marks<50){
                    throw new MyException();
                }
                else{
                    System.out.println("Passed, yayy!  :)");
                }              
        }
        catch (MyException ex){
            ex.failresult();
        }
    }
}