package work5_1.work5_1_student;

public class Student {
    String Name;
    String Gender;
    String stID;
    String stClass;

    public Student(String name, String gender, String stID, String stClass) {
        Name = name;
        Gender = gender;
        this.stID = stID;
        this.stClass = stClass;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getGender() {
        return Gender;
    }

    public void setGender(String gender) {
        Gender = gender;
    }

    public String getStID() {
        return stID;
    }

    public void setStID(String stID) {
        this.stID = stID;
    }

    public String getStClass() {
        return stClass;
    }

    public void setStClass(String stClass) {
        this.stClass = stClass;
    }
}
