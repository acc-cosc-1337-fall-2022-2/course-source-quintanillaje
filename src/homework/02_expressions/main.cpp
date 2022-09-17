//write include statements
#include "hwexpressions.h"
#include <iostream>


//write namespace using statement for cout
using namespace std;
int main()
{
    double meal_amount;
    double tax_amount;
    double tip_rate;
    double tip_amount;
    double total;

    cout<< "Enter meal amount:";
    cin>>meal_amount;

    double get_sales_tax_amount(double meal_amount, double tax_amount);
    //return tax_amount;
   
    cout<<"Enter tip rate: ";
    cin>>tip_rate;

    double get_tip_amount( double meal_amount, double tip_rate, double tip_amount);
    //return tip_amount;
   
    total = tip_amount + tax_amount + meal_amount;
   
    cout<<"Meal Amount: "<<meal_amount<<endl;
    cout<< "Sales Tax: "<<tax_amount<<endl;
    cout<< "Tip Amount: "<<tip_amount<<endl;
    cout<< "Total: "<<total;

}
