#include <iostream>
#include <string>
using namespace std;

class Sensor
{
    private: 
            string sensorName;
            float currentValue ;
    public:
            void setName(string n)
            {
                sensorName = n;
            }

            void setValue(float v)
            {
                currentValue = v;
            }

            string getName()
            {
                return sensorName;
            }

            float getValue()
            {
                return currentValue;
            }

            void display()
            {
                cout << "sensor name : " << sensorName << endl;
                cout << "sensor readings : " << currentValue << endl;
            }

};

int main()
{
    float inputValue;
    cout << "Enter sensor value: ";
    cin >> inputValue;

    string name;
    cout << "Enter sensor name: ";
    cin.ignore();
    getline(cin, name);
    
    Sensor s1;
    s1.setName(name);
    s1.setValue(inputValue);
    s1.display();
    cout << s1.getValue() << endl;

    cout << "\n--- Second Sensor ---" << endl;

    Sensor s2;
    s2.setName("RPM Sensor");
    s2.setValue(12500.0);
    s2.display();
    
    return 0;
}