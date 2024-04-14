import java.util.Scanner;
import static java.lang.Math.sqrt;

public class work4_2 {
    public static void main(String[] args) {
        System.out.print("请输入三角形三边边长：\n");
        Scanner input = new Scanner(System.in);
        Triangle triangle = new Triangle();
        if (triangle.setSides(input.nextDouble(), input.nextDouble(), input.nextDouble())) {
            System.out.print("设置成功\n");
        } else {
            System.out.print("设置失败\n");
            return;
        }
        System.out.printf("三角形周长为：%.2f 三角形面积为：%.2f", triangle.calcCircum(), triangle.calcSquare());
    }
}

class Triangle {
    double a, b, c;

    public boolean setSides(double a, double b, double c) {
        if (a + b > c && a - b < c) {
            this.a = a;
            this.b = b;
            this.c = c;
            return true;
        } else {
            return false;
        }
    }

    public double calcCircum() {
        return a + b + c;
    }

    public double calcSquare() {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
}