import java.util.Scanner;

public class work2_4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int tempa = a, tempb = b;
        //辗转相除法（欧几里德算法）
        int r;
        while (true) {
            r = tempa % tempb;
            tempa = tempb;
            tempb = r;
            if (r == 0) {
                System.out.printf("最大公约数为：%d ", tempa);
                //最小公倍数等于两数相乘除以最大公约数
                System.out.printf("最小公倍数为：%d", a * b / tempa);
                break;
            }
        }
    }
}
