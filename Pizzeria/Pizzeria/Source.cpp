#include <iostream>
using namespace std;

int main()
{
	double mustard = 4.20;
	double mayonnaise = 5.00;
	double ketchup = 6.65;
	double total;
	double large = 13;
	double medium = 7;
	double small = 5;
	int pizzaYes;
	int topping;
	int size;
	
	
	
	cout << "Welcome to Steamers Pizza! We will roll you out of here in a wheelchair.";
	cout << "\nNow you have a few things you can choose from. ";
	cout << "Would you like to order a pizza? 1 for yes 2 for no=";
	cin >> pizzaYes;
	if (pizzaYes == 1)
	{
		cout << "What size pizza would you like? 1 for small, 2 for medium, and 3 for large=";
		cin >> size;
		if (size == 1)
		{
			cout << "That is a Number " << size << ". Would you like any toppings?";
			cout << "What toppings would you like\n(1 for Mustard, 2 for Mayonnaise, 3 for Ketchup)=";
			cin >> topping;
			if (topping == 1)
			{
				total = small + mustard;
				cout << "That's a small with Mustard, your total adds up to " << total << "\n";

			}
			if (topping == 2)
			{
				total = small + mayonnaise;
				cout << "That's a small with Mayonnaise, your total adds up to " << total << "\n";

			}
			if (topping == 3)
			{
				total = small + ketchup;
				cout << "That's a small with ketchup, your total adds up to " << total << "\n";

			}
		}
		
		if (size == 2)
		{
			cout << "That is a Number" << size << " Would you like any toppings?"; 
			cout << "What toppings would you like\n(1 for Mustard, 2 for Mayonnaise, 3 for Ketchup)=";
			cin >> topping;
			if (topping == 1)
			{
				total = medium + mustard;
				cout << "That's a medium with Mustard, your total adds up to " << total << "\n";

			}
			if (topping == 2)
			{
				total = medium + mayonnaise;
				cout << "That's a medium with Mayonnaise, your total adds up to " << total << "\n";

			}
			if (topping == 3)
			{
				total = medium + ketchup;
				cout << "That's a medium with ketchup, your total adds up to " << total << "\n";

			}
		}
		if (size == 3)
		{
			cout << "That is a Number" << size << " Would you like any toppings?";
			cout << "What toppings would you like\n(1 for Mustard, 2 for Mayonnaise, 3 for Ketchup)=";
			cin >> topping;
			if (topping == 1)
			{
				total = large + mustard;
				cout << "That's a large with Mustard, your total adds up to " << total << "\n";

			}
			if (topping == 2)
			{
				total = large + mayonnaise;
				cout << "That's a large with Mayonnaise, your total adds up to " << total << "\n";

			}
			if (topping == 3)
			{
				total = large + ketchup;
				cout << "That's a large with ketchup, your total adds up to " << total << "\n";

			}
		}
		
		
	}
	system("pause");
	return 0;

}