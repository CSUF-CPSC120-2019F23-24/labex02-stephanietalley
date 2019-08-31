// Name: Welcome to the Restaurant Bill Calculator!
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double cost, tax, tip, total;

  //Get the total cost of the meal
  std::cout << "What is the total meal cost? ";
  std::cin >> cost;

  //Calculate the pay.
  tax = cost * 0.0775;
  tip = cost * 0.2;
  total = tax + tip + cost;

  //Display the tax.
  std::cout << "Tax: $" << tax << std::endl;

  //Display the tip
  std::cout << "Tip: $" << tip << std::endl;

  //Display the total bill.
  std::cout << "Total Bill: $" << total << std::endl;

  return 0;
}
