import java.util.Scanner;

public class Sort_The_Unsorted_Wrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();   // the times the program will be checked.
        while (t-- > 0) {
            int nm = sc.nextInt();
            int[] array = new int[nm];
            for (int i = 0; i < nm; i++) {
                array[i] = sc.nextInt();
            }

            // sorting in descending order

            int n = array.length;
            for (int j = 1; j < n; j++) {
                int key = array[j];
                int i = j ;
                while ((i > 1) && (array[i] < key)) {
                    array[i + 1] = array[i];
                    i++;
                }
                array[i + 1] = key;
            }
            for (int x : array){
                System.out.print(x+" ");
            }
        }
    }
}
