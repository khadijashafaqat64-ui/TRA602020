
#include <iostream>
#include <string>
using namespace std;
class Robot
{
public:
    string id;
    string type;
    int battery;
    float speed;
};
int main()
{
  
    Robot r1, r2, r3;
    r1.id = "R-001";
    r1.type = "Picker";
    r1.battery = 90;
    r1.speed = 1.5;
    r2.id = "R-002";
    r2.type = "Scout";
    r2.battery = 55;
    r2.speed = 2.2;
    r3.id = "R-003";
    r3.type = "Carrier";
    r3.battery = 20;
    r3.speed = 0.8;
    cout << "--- Robot Fleet Status ---" << endl << endl;
    cout << "ID: " << r1.id
         << " | Type: " << r1.type
         << " | Battery: " << r1.battery << "%"
         << " | Speed: " << r1.speed << " m/s" << endl;
    cout << "ID: " << r2.id
         << " | Type: " << r2.type
         << " | Battery: " << r2.battery << "%"
         << " | Speed: " << r2.speed << " m/s" << endl;
    cout << "ID: " << r3.id
         << " | Type: " << r3.type
         << " | Battery: " << r3.battery << "%"
         << " | Speed: " << r3.speed << " m/s" << endl;

    return 0;
}

