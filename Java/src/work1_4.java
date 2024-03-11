import java.util.Scanner;

import static java.lang.Math.sqrt;

public class work1_4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        System.out.println("三角形的周长为：" + (a + b + c));
        int p = (a + b + c) / 2;
        System.out.println("三角形的面积为：" + (float)(sqrt(p * (p - a) * (p - b) * (p - c))));
    }
}
