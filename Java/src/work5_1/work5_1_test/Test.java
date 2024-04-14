package work5_1.work5_1_test;

import work5_1.work5_1_student.Student;
import work5_1.work5_1_worker.Worker;

public class Test {
    public static void main(String[] args) {
        Student[] stu = new Student[3];
        Worker[] wor = new Worker[3];
        //Student student1 = new Student("Tom","男","12345","计算机类一班");
        stu[0] = new Student("佩奇本奇", "女", "123", "计算机类一班");
        stu[1] = new Student("佩奇爸", "男", "456", "计算机类二班");
        stu[2] = new Student("佩奇妈", "女", "789", "计算机类三班");
        wor[0] = new Worker("佩奇哥", "男", "000", "挖土部");
        wor[1] = new Worker("佩奇姐", "女", "222", "采泥部");
        wor[2] = new Worker("佩奇妹", "女", "666", "跳坑部");
        for (int i = 0; i < 3; i++) {
            System.out.printf("%s %s %s %s\n",
                    stu[i].getName(),
                    stu[i].getGender(),
                    stu[i].getStID(),
                    stu[i].getStClass());
        }
        for (int i = 0; i < 3; i++) {
            System.out.printf("%s %s %s %s\n",
                    wor[i].getName(),
                    wor[i].getGender(),
                    wor[i].getWorkerID(),
                    wor[i].getDepartment());
        }
    }
}
