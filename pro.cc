#include <iostream>
#include <string>
#include <iomanip>
int main() {

  double mealcost = 0.00; 
  double tipPercentage =0.00 ; 
  double taxes = 0.00;
  double tip=0.000;
  double totalcost = 0.00;
 
 

  
  
  std::cout << "Please input meal cost: ";
  std::cin >> mealcost;
  
  taxes = (7.5/100) * mealcost;
  std::cout <<"Please input tip percentage: ";
  std::cin >> tipPercentage;
  
  tip = (tipPercentage/100) * mealcost;
  
  totalcost = (tip+taxes+mealcost);
  std::cout << "Restaurant Bill \n";
  std::cout << "====================\n";
  std::cout << "Subtotal: $" << std::fixed <<std::setprecision(2)<< mealcost << "\n";
  std::cout << "Taxes: $" << taxes << "\n";
 
   
  std::cout << "Tip: $" << std::fixed << std::setprecision(2)<< tip << "\n";
  std::cout << "====================\n";
  std::cout << "Total: $" << totalcost<<"\n";
  return 0;
}  


