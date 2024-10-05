class Overloading{
    String statename;
    int temperature;
    Overloading(){
        this.statename="Unknown";
        this.temperature=0;
    }
    Overloading(String state,int temp){
        this.statename=state;
        this.temperature=temp;
    }
    void displayDetails(){
        System.out.println("State Name: "+statename);
        if(temperature>=30)
            System.out.println("Humidity: High");
        else if(temperature<=29&&temperature>=20)
            System.out.println("Humidity: Moderate");
        else
            System.out.println("Humidity: Low");
        System.out.println("Temperature: "+temperature+"°C");
    }
}
public class TemperatureDetails{