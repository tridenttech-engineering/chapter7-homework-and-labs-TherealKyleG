//Lab7-4.cpp - displays the average electric bill
//Created/revised by Kyle Gallagher on 03/06/2025

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
		double bill = 0.0;
		double totalBills= 0.0;
		double avgBill= 0.0;
		int months = 0;
		while(months <= 4){
			cout<< "Bill for month "<< months + 1<< ": ";
			cin>> bill;
			totalBills+= bill;
			months += 1;
	
		} if(months > 0){
			avgBill= totalBills/ months;
			cout<< fixed << setprecision(2);
			cout<< "Average electric bill for "<< months<< " months is: $"<< avgBill<< endl;
		}else {
			cout<< "No bill amount entered."<< endl;
		} 
}