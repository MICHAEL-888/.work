import java.util.Random;

import static java.lang.Math.pow;

public class work5_kt1 {
    public static void main(String[] args) {
        char f[] = {'+', '-', '*', '/'};
        System.out.printf("计算2^32：%d\n", (long) pow(2, 32));
        Random random = new Random();
        int a = random.nextInt(11);
        int b = random.nextInt(11);
        int c = (int) (Math.random() * 10);
        int d = (int) (Math.random() * 10);
        int e = random.nextInt(4);
        System.out.printf("Random对象生成随机10以内加法：%d + %d = %d\n", a, b, a + b);
        System.out.printf("静态方法生成随机10以内加法：%d + %d = %d\n", c, d, c + d);
        //System.out.printf("随机加减乘除：%d %c %d = ?", a, f[e], b);
        if (e == 0) System.out.printf("随机加减乘除：%d %c %d = %d", a, f[e], b, a + b);
        else if (e == 1) System.out.printf("随机加减乘除：%d %c %d = %d", a, f[e], b, a - b);
        else if (e == 2) System.out.printf("随机加减乘除：%d %c %d = %d", a, f[e], b, a * b);
        else if (e == 3 && b != 0)
            System.out.printf("随机加减乘除：%d %c %d = %.2f", a, f[e], b, (double) a / (double) b);
        else System.out.printf("随机加减乘除：%d %c %d = ?", a, f[e], b);
    }
}
