//To print time in HH:MM:SS format.

#include<iostream>
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(){
        cout << "Enter time:" << endl;
        cout << "Hours?   ";          
     	cin >> hh;
        cout << "Minutes? ";          
     	cin >> mm;
        cout << "Seconds? ";          
     	cin >> ss;	
         	
		}
		void displayTime(void);
		void convertIntoSeconds(void);
                
};
 void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " << (0) << hh << ":"
                             << (0) << mm << ":"
	                         << (0) << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time t; //creating objects
     
    t.getTime();
    t.convertIntoSeconds();
    t.displayTime();
     
    return 0;
}
