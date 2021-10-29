/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arraypractice;

/**
 *
 * @author HP
 */
import java.util.Scanner;
public class ArrayPractice {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int[] intArray;
        intArray = new int[7];
        Scanner obj = new Scanner(System.in);
        intArray[0]= 65;
        intArray[1]= 50;
        intArray[2]= 65;
        intArray[3]= 50;
        intArray[4]= 0;
        intArray[5]= 45;
        intArray[6]= 0;
//        for(int i=0; i<intArray.length; i++){
//            intArray[i]= obj.nextInt();
//        }
//        for(int y : intArray)
//            System.out.println(y);
//        int[] copied = new int[5];
//        System.arraycopy(intArray, 2, copied, 0, 5);
//           
//        
//        for(int x : copied){
//            System.out.println(x);
//        }

        //System.out.println(java.util.Arrays.binarySearch(intArray, 60));
        java.util.Arrays.sort(intArray);
        System.out.println(java.util.Arrays.toString(intArray));
        
//                for(int x : intArray){
//            System.out.println(x);
//        }
                //System.out.println(intArray[2]);
        
    }
    
}
