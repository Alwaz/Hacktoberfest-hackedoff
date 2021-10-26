import java.util.Scanner;

				  
	 public class main {

      public static void main(String[] args) {
       Array a=new Array(); 
         a.populateArray();
          a.show();
    }

	
	
public class Array {
    int i;
    int arr[]=new int[5];
    Scanner scan=new Scanner(System.in);
    void populateArray(){
        for( i=0;i<5;i++)
            arr[i]=scan.nextInt();
    }
    void arr(){
        for(int i=0;i<5;i++){
            System.out.println(arr[i]);
        }