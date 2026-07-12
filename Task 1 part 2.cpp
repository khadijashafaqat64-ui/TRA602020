
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream writeFile("sensor_log.txt");

    string sensorID, timestamp;
    float temperature, distance;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Sensor ID: ";
        cin >> sensorID;

        cout << "Enter Temperature: ";
        cin >> temperature;

        cout << "Enter Distance : ";
        cin >> distance;

        cout << "Enter Timestamp: ";
        cin >> timestamp;

        writeFile << sensorID << " "
                  << temperature << " "
                  << distance << " "
                  << timestamp << endl;
    }

    writeFile.close();
    ifstream readFile("sensor_log.txt");
    cout<<endl;
    cout << " Sensor Readings "<<endl;
    while (readFile >> sensorID >> temperature >> distance >> timestamp)
    {
        cout << "Sensor ID: " << sensorID
             << ", Temperature: " << temperature
             << ", Distance: " << distance 
             << ", Timestamp: " << timestamp << endl;
    }

    readFile.close();

    return 0;
}
