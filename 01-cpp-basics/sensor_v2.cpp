#include <iostream>
#include <string>
using namespace std;

class Sensor
{
    private:
            string sensorName;
            float currentReadings;
    
    public:
            Sensor()
            {
                sensorName = "Unknown";
                currentReadings = 0.0;
            }

            Sensor(string n, float val)
            {
                sensorName = n;
                currentReadings = val;
            }

            ~Sensor()
            {
                cout << "Sensor " << sensorName << " Destroyed " << endl;
            }

            void setName(string n)
            {
                sensorName = n;
            }

            void setValue(float v)
            {
                currentReadings = v;
            }

            string getName()
            {
                return sensorName;
            }

            float getValue()
            {
                return currentReadings;
            }

            void display()
            {
                cout << "sensor name : " << sensorName << endl;
                cout << "sensor readings : " << currentReadings << endl;
            }
};

int main()
{
    Sensor rpm;
    rpm.display();

    Sensor temp("Temperature", 85.5);
    temp.display();

    Sensor crankPosition("Cran Position", 120.69);
    crankPosition.display();

    cout << "\n---- END OF PROGRAM ----\n" << endl;
}