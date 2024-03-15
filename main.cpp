#include <iostream>

using namespace std;

int main()
{
     double totalCost,employeesSalary,yearlyRent,electricityCost;

     cout<<"Enter the total cost of the merchandise "<<endl;
     cin>>totalCost;

     cout<<"Enter the salary of the employees "<<endl;
     cin>>employeesSalary;

     cout<<"Enter the yearly rent "<<endl;
     cin>>yearlyRent;

     cout<<"Enter the estimated electricity cost "<<endl;
     cin>>electricityCost;


     double totalExpense=totalCost+employeesSalary+yearlyRent+electricityCost;
     double netProfit= totalCost*0.1;

     double otherProfit= netProfit/0.85;


     double markup =(otherProfit+totalExpense)/totalCost;

     cout<<"The merchandise that will be marked up so that Linda gets the desired profit is "<<markup;

    return 0;
}
