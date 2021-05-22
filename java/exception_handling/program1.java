/* Name : Pankaj Singh 
 * University Rollno: 2014426
 * Class : Computer Engineering
 */

public class program1 {
	public static void main(String[] args) {
		int size = -2;
		try {
			int arr[] = new int[size];
			System.out.println("This will work anyhow");
			System.out.println(arr[5]);
		}
		catch(NegativeArraySizeException e) {
			System.out.println("The array is assigned with negative size!!");
		}
	}
}
