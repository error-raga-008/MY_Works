import java.util.Scanner;

public class array {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[4]; //this is how to declare a array

        int[] ar = {1,2,3}; //this also works

        for (int i = 0; i < 4; i++) {
            
        }
        
        for (int i = 0; i < ar.length; i++) {
            
            System.out.println(ar[i]);

        }

        //2D array

        int row,col;
        
        System.out.println("Enter no. of rows and cols");
        row = sc.nextInt();
        col = sc.nextInt();

        int[][] twod = new int[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < row; j++) {
                System.out.print("Enter the value for ["+(i+1)+"]["+(j+1)+"]:");
                twod[i][j] = sc.nextInt();
                System.err.println();           
            }
        }

        System.out.println("Entered array is :");

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(twod[i][j]+" ");
            }
            System.out.println();
        }
    }
}
