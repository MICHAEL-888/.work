package work5_2.work5_2_test;

import work5_2.work5_2_tool.Mobile;
import work5_2.work5_2_user.User;

public class Test {
    public static void main(String[] args) {
        Mobile[] mob = new Mobile[3];
        User[] user = new User[3];
        mob[0] = new Mobile("佩奇本奇", "12300000000", 3);
        mob[1] = new Mobile("佩奇爸", "45600000000", 12);
        mob[2] = new Mobile("佩奇妈", "78900000000", 17);
        user[0] = new User("佩奇本奇", "202331607119", "Lizihe");
        user[1] = new User("佩奇爸", "20233160711Y", "Lizipi");
        user[2] = new User("佩奇妈", "20233160711X", "Lizizhi");
        for (int i = 0; i < 3; i++) {
            System.out.printf("用户名：%s，用户身份号：%s，用户手机：%s，手机号码：%s，通话时间：%d分钟，通话费用：%.2f元。\n",
                    user[i].getName(),
                    user[i].getUserID(),
                    user[i].getMobile(),
                    mob[i].getTelNumber(),
                    mob[i].getCallDuration(),
                    mob[i].getFee()
            );
        }
    }
}
