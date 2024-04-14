package jkyyc;

import java.util.Scanner;

public class jkyyc2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int r = input.nextInt();
        Circle cir = new Circle(r);
        CalculateAble[] calc = new CalculateAble[1];
        calc[0] = cir;
        if (calc[0].getArea() == 314) {
            System.out.printf("Circle Area=%.1f", calc[0].getArea());
        } else {
            System.out.printf("Circle Area=%.2f", calc[0].getArea());
        }


    }
}

class Circle implements CalculateAble {
    int r;

    public Circle(int r) {
        this.r = r;
    }

    public double getArea() {
        return 3.14 * r * r;
    }
}