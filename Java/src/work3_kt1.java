import java.util.Objects;
import java.util.Scanner;

public class work3_kt1 {
    public static void main(String[] args) {
        Student stu = new Student();
        System.out.print("请输入数据：\n");
        Scanner input = new Scanner(System.in);
        String Name, id;
        int English, Java, Math;
        Name = input.next();
        id = input.next();
        English = input.nextInt();
        Java = input.nextInt();
        Math = input.nextInt();
        stu.changeValue(Name, id, English, Java, Math);
        System.out.printf("姓名：%s 学号：%s 英语：%d Java：%d 数学：%d\n", stu.Name, stu.id, stu.English, stu.Java, stu.Math);
        System.out.printf("总分：%d\n", stu.calcSum());
        System.out.printf("平均分：%.2f\n", stu.calcAvr());
    }
}

class Student {
    String Name;
    String id;
    int English;
    int Java;
    int Math;
    int Sum;
    float Avr;

    public void changeValue(String N, String i, int E, int J, int M) {
        if (!Objects.equals(N, "-1")) Name = N;
        if (!Objects.equals(id, "-1")) id = i;
        if (E != -1) English = E;
        if (J != -1) Java = J;
        if (M != -1) Math = M;
    }

    public int calcSum() {
        Sum = English + Java + Math;
        return Sum;
    }

    public float calcAvr() {
        Avr = (float) ((English + Java + Math) / 3.0);
        return Avr;
    }
}