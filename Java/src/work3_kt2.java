import java.util.Scanner;

public class work3_kt2 {
    public static void main(String[] args) {
        Cylinder cyl = new Cylinder();
        System.out.print("请输入数据：\n");
        int r, h;
        Scanner input = new Scanner(System.in);
        r = input.nextInt();
        h = input.nextInt();
        cyl.setValue(r, h);
        System.out.printf("圆柱体底面半径为：%d 圆柱体高为：%d\n", r, h);
        System.out.printf("圆柱体表面积为：%.2f 圆柱体体积为：%.2f", cyl.getS(), cyl.getV());
    }
}

class Cylinder {
    int r;
    int h;
    float s;
    float v;

    public void setValue(int x, int y) {
        r = x;
        h = y;
    }

    public float getS() {
        return (float) (2 * 3.14 * r * r + 2 * 3.14 * r * h);
    }

    public float getV() {
        return (float) (3.14 * r * r * h);
    }
}