#include <iostream> 
#include <iomanip>
#include <cmath>
#include <string>
using namespace std; 

//my cheesy program - Tausif Hussan

//variables
const double containerVolume = 2.76;
const double productionPrice = 4.12;
const double cheeseProfit = 1.45;

int numProduced;
double numContainer;
double totalCost;
double totalProfit;

string line2 = "The number of containers to hold the cheese is: ";
char star = '*';
char space = ' ';

int main()
{
  //line 0 - This automates the creation of the astericks using setw which selects the amount of characters and setfill which selects what character to fill it with.
  
  cout << setfill('*') << setw(68) << star << endl;
  cout << setfill('*') << setw(20) << star << " Welcome to my Cheese Calculator " << setfill('*') << setw(15) << star << endl;
  cout << setfill('*') << setw(68) << star << endl;

  //line 1 - input number of kg of cheese produced and stores it to variable
  
  cout << "\nPlease enter the total number of kilograms of cheese produced: ";
    cin >> numProduced;

  //line 2 - gets number of containers by dividing the cheese produced by the container size. Because it needs to be whole number, I use the function round which is imported by cmath to round to the nearest integer. I use setfill to fill up the space with ' ' if there is less than 18 space.
  
  numContainer = round(numProduced/containerVolume);
  cout << line2;
  cout << setfill(space) <<setw(18) << numContainer << endl;

  
  //line 3 - gets the cost of production by multiplying the number of container by price of production. It uses the function of rounding down imported by cmath. Also creates a string of the amount of containers so it can change the number without changing the original. 
  
  string iContainers = "The cost of producing " + to_string(lround(numContainer)) + " container(s) of cheese is : $";
  totalCost = lround(numContainer) * productionPrice;
  cout << iContainers << setfill(space) <<setw(11) << totalCost << endl;

  //line 4 - gets the profit of production by multiplying the number of container by price of profit. It uses the function of rounding down imported by cmath. Also creates a string of the amount of profit so it can change the number without changing the original. 
  
  string iProfit = "The profit from producing " + to_string(lround(numContainer)) + " container(s) of cheese is : $";
  totalProfit = lround(numContainer) * cheeseProfit;
  cout << right << setfill(space) <<setw(11) << iProfit;

  //This creates the double digit cents by using setfill and setw. Setw is at 6 which is the minimum amount of characters the output should be at to have 2 digits after the decimal. If it is less than 6 than the setfill action will add a zero after it. 
  
  cout << left << setfill('0') << setw (6) << totalProfit << endl;

}