//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by Kyle Gallagher on 03/06/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double Growth_Rate = 0.055;
    double sales = 0.0;
    double annualSales = 0.0;
    int years =0;
    cout << "Current year's sales: ";
    cin >> sales;
    while (sales < 150000.0){
        annualSales = sales * Growth_Rate;
        sales += annualSales;
        years++;
    } cout << fixed << setprecision(2);
    cout << "The total Sales " << years << " years from now will be: $" << sales << endl;

    
    return 0;
} //end of main function
