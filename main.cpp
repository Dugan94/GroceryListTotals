#include <iostream>
#include <iomanip>
using namespace std;

const double TAXRATE = 0.0825;
const double DELIVERY = 0.07;
const double BAG = 0.010;

int main()
{
 double dollarAmt1, dollarAmt2, dollarAmt3 = 0;
 int quanity_1, quanity_2, quanity_3  = 0;
 int bags = 0;
 int total1, total2, total3 =0;

 cout << "Enter The dollar amount for item 1: ";
 cin >> dollarAmt1;
cout << "Enter The quanity1 amount ";
cin >> quanity_1;
cout << total1;

 cout << "Enter the dollar amount for item 2: ";
 cin >> dollarAmt2;
 cout << "Enter The quanity2 amount ";
 cin >> quanity_2;
 cout << total2;

 cout << "Enter The dollar amount for item 3: ";
 cin >> dollarAmt3;
cout << "Enter The quanity3 amount ";
cin >> quanity_3;
cout << total3;

cout << "Enter the number of Bags ";
cin >>  bags;

 // Total Cost
double totalCost;
 totalCost = (dollarAmt1 * quanity_1) + (dollarAmt2 * quanity_2) + (dollarAmt3 * quanity_3);

// With Delivery
double delivery = DELIVERY * totalCost;
 cout << "delivery: $" << totalCost << "\n";

 // Tax
 double Tax = TAXRATE * totalCost;
 cout << fixed;
 cout << "Tax: $" << setprecision(2) << Tax << "\n";

 // Bag Charge
 double bagTotal = BAG * bags;
 cout << "Bag charge: $" <<bagTotal << "\n";

// Final Total
double finalTotal = totalCost + Tax + bags;
cout << "Total: $" << finalTotal;

 return 0;
}
