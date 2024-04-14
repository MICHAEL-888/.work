import java.util.Scanner;

public class work4_1 {
    public static void main(String[] args) {
        System.out.print("请输入姓名、工号以及每天工作时长（以小时为单位）：\n");
        Scanner input = new Scanner(System.in);
        Worker worker = new Worker();
        worker.setName(input.next());
        worker.setId(input.next());
        worker.setTime(input.nextInt());
        System.out.printf("钟点工每日工资为：%d", worker.calcSal());
    }
}

class Worker {
    String Name;
    String Id;
    int Time;

    public void setName(String name) {
        Name = name;
    }

    public void setId(String id) {
        Id = id;
    }

    public void setTime(int time) {
        Time = time;
    }

    public int calcSal() {
        int sum = 0;
        if (Time <= 8) {
            sum += Time * 20;
        } else {
            sum += 160 + (Time - 8) * 40;
        }
        return sum;
    }
}