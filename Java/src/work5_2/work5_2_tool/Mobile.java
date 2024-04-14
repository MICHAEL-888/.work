package work5_2.work5_2_tool;

public class Mobile {
    String Name;
    String TelNumber;
    int CallDuration;
    double Fee;

    public Mobile(String name, String telNumber, int callDuration) {
        Name = name;
        TelNumber = telNumber;
        CallDuration = callDuration;
        setFee();
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getTelNumber() {
        return TelNumber;
    }

    public void setTelNumber(String telNumber) {
        TelNumber = telNumber;
    }

    public int getCallDuration() {
        return CallDuration;
    }

    public void setCallDuration(int callDuration) {
        CallDuration = callDuration;
    }

    public double getFee() {
        return Fee;
    }

    public void setFee() {
        if (CallDuration <= 10) {
            Fee = 1;
        } else {
            Fee = 1 + (CallDuration - 10) * 0.2;
        }
        //Fee = fee;
    }
}
