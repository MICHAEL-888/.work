package work5_3.studentPackage;

public class Student {
    String Name;
    String Id;
    String Major;
    static String School;

    public Student(String name, String id, String major) {
        Name = name;
        Id = id;
        Major = major;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getId() {
        return Id;
    }

    public void setId(String id) {
        Id = id;
    }

    public String getMajor() {
        return Major;
    }

    public void setMajor(String major) {
        Major = major;
    }

    public static String getSchool() {
        return School;
    }

    public static void setSchool(String school) {
        School = school;
    }
}
