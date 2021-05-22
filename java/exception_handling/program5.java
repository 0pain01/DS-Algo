/* Name : Pankaj Singh 
 * University Rollno: 2014426
 * Class : Computer Engineering
 */
public class program5 {
  static void checkAge(int age) throws ArithmeticException {
    if (age<44) {
      throw new ArithmeticException("vaccine registration not available for 18-44 age yrs now!!");
    }
    else {
      System.out.println("vaccine registration successful!!");
    }
  }

  public static void main(String[] args) {
    checkAge(48);
    checkAge(21); 
  }
}