#include <iostream>
using namespace std;
class ServoMotor{
private:
		int servoID;
		float currentAngle;
		float maxAngle;
public:
	ServoMotor()
	{
		servoID=0;
		currentAngle=0.0f;
		maxAngle=180.0f;
		
		cout<<"[Default Construction] Servo-"<<servoID
            <<"intilized."<<endl;		
	}
	ServoMotor(int id,float angle,float maxAng)
     {
     	servoID = id;
     	currentAngle = angle;
     	maxAngle = maxAng;
	 
	    cout<<"[Constructor]"
		    <<servoID
			<<"intialized"
			<<currentAngle
			<<" deg."<<endl;
		}	
	~ServoMotor()
	{
		cout<<"[Destruction]Servo-"
		     <<servoID
		     <<"Powered off"<<endl;
		
		}	
	void rotate( float newAngle)
	{
		if( newAngle > maxAngle)
		{
			currentAngle =maxAngle;
		}
		else if(newAngle<0)
		{
			currentAngle=0;
		}
		else
		{
			currentAngle = newAngle;
		}
		cout<<"Servo-"<<servoID
		<<"rotated to"
		<<currentAngle
		<<"deg."<<endl;
		
	}
	void display()
	{
		cout<<"Servo ["<<servoID<<"]Angle:"
		    <<currentAngle
			<<"/Max:"
		    <<maxAngle
			<<endl;			
	}
	
};
int main()
{
	cout<< "------Creating servos-----" <<endl;
	ServoMotor s1;
    ServoMotor s2(2,30.0f,270.0f);
    ServoMotor s3(3,90.0,180.0f);
      cout<< "---------Roating Servos-------" <<endl;
    s1.rotate(45.0f);
    s2.rotate(300.0f);
    s3.rotate(-10.0f);
    cout<< "-------------Status-------" <<endl;
    s1.display();
    s2.display();
    s3.display();
    cout<< "------End of main--------" <<endl;
    return 0;
}

