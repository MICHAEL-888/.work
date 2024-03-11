import java.util.Scanner;

public class work1_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println("圆形的周长是：" + 2 * 3.14 * num);
        System.out.println("圆形的面积是：" + (float) (3.14 * num * num));

    }
}
