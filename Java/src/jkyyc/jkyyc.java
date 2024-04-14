package jkyyc;

public class jkyyc {
    public static void main(String[] args) {
        Student1 stu = new Student1();
        MoveAble[] mov = new MoveAble[1];
        mov[0] = stu;
        mov[0].move();
    }
}

class Student1 implements MoveAble {
    public void move() {
        System.out.println("move every day");
    }
}

