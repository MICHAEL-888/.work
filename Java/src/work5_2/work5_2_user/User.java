package work5_2.work5_2_user;

public class User {
    String Name;
    String UserID;
    String Mobile;

    public User(String name, String userID, String mobile) {
        Name = name;
        UserID = userID;
        Mobile = mobile;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getUserID() {
        return UserID;
    }

    public void setUserID(String userID) {
        UserID = userID;
    }

    public String getMobile() {
        return Mobile;
    }

    public void setMobile(String mobile) {
        Mobile = mobile;
    }
}
