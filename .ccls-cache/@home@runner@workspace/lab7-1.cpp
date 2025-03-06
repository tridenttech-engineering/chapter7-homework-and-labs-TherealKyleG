//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Kyle Gallagher on 03/06/2025

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{	int day=0;
    int totalTexts=0;
    int dailyTexts=0;
    double average=0.0;
    for(day = 1; day < 8; day++){
        
        cout<<"How many texts did you send on day "<<day<<"?\n";
        cin>>dailyTexts;
        totalTexts += dailyTexts;
        
    } average = static_cast<double>(totalTexts)/7;
      cout<<fixed<<setprecision(0);
      cout<<"You sent an average of "<<average<<" texts per day"<<endl;
 
    
    return 0;
}   //end of main function