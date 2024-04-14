package work5_3.mainPackage;

import work5_3.studentPackage.Student;

public class Test {
    public static void main(String[] args) {
        Student[] stu = new Student[3];
        stu[0] = new Student("佩奇本奇", "202331607119", "Java");
        stu[1] = new Student("佩奇爸", "20233160711Y", "C++");
        stu[2] = new Student("佩奇妈", "20233160711X", "Python");
        for (int i = 0; i < 3; i++) {
            System.out.printf("%s %s %s\n",
                    stu[i].getName(),
                    stu[i].getId(),
                    stu[i].getMajor()
            );

        }
    }
}
