import java.util.Scanner;

public class work1_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if (num % 2 == 0) {
            System.out.println("数字 " + num + " 是偶数");
        } else {
            System.out.println("数字 " + num + " 是奇数");
        }
    }
}
