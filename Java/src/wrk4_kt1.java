import java.util.Scanner;

public class wrk4_kt1 {
    public static void main(String[] args) {
        Express Exp = new Express();
        Scanner input = new Scanner(System.in);
        System.out.print("请输入收件人、快递单号、快递重量：\n");
        Exp.setName(input.next());
        Exp.setNum(input.next());
        Exp.setWeight(input.nextDouble());
        Exp.calcSum();
        Exp.getInf();
    }
}

class Express {
    String Name;
    String Num;
    double Weight;
    double Sum;

    public void setName(String name) {
        Name = name;
    }

    public void setNum(String num) {
        Num = num;
    }

    public void setWeight(double weight) {
        Weight = weight;
    }

    public void getInf() {
        System.out.printf("收件人名称：%s 快递单号：%s 快递重量：%.2f 快递费用：%.2f", Name, Num, Weight, Sum);
    }

    public void calcSum() {
        double temp = Weight;
        if (temp > 1) {
            temp -= 1;
            Sum += (int) (temp + 1) * 6 + 8;
        } else {
            Sum = 8;
        }
    }

}