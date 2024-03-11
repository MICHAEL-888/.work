import java.util.Scanner;

public class work1_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if (num < 100) {
            System.out.println("Error");
        } else {
            while (num != 0) {
                System.out.printf("%d", num % 10);//printf不换行
                num /= 10;
            }
        }
    }
}
