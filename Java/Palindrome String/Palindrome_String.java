import java.util.Scanner;
public class checkPalindrome {
    public static void main(String[] args) {
        String str="",check="";
        Scanner sc=new Scanner(System.in);
        str=sc.nextLine();
        int size=str.length();
        for(int i=size-1;i>=0;i--){
            check=check+str.charAt(i);
        }
        if(str.equalsIgnoreCase(check)){
            System.out.println("Its a Palindrome.");
        }
        else{
            System.out.println("Not a Palindrome.");
        }
    }
}
