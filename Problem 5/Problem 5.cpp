#include<iostream>

using namespace std;

int main()
{
	//Giving change. Implement a program that directs a cashier how to give change. The program has two inputs: the amount due and the amount received from the customer.
	//Display the dollars, quarters, dimes, nickels, and pennies that the customer should receive in return. (Student evaluation)

	double total = 0, price = 0, receivedamount = 0, num = 0, changedollar = 0;

	cout << "Enter the number of items: ";
	cin >> num;

	cout << "Please Enter the price of the items\n";
	
	int k = 0;

	while (k < num)
	{

		cin >> price;

		total = total + price;

		k = k + 1;
	}

	cout << "The total Price is: " << total << " dollars" << endl;

	cout << "Enter the received amount: ";
	cin >> receivedamount;

	changedollar = receivedamount - total;

	cout << "The total change is: " << changedollar << " dollars" << endl;

	int change = 0;
	change = changedollar * 100;

	int dollar = 100;
	int quarters = 25;
	int dimes = 10;
	int nickels = 5;
	int pennies = 1;

	cout << "Change is: \n" << change / 100 << " dollars\n";
	
	cout << (change % 100) / 25 << " Quarters\n";

	cout << ((change % 100) % 25) / 10 << " dimes\n";

	cout << (((change % 100) % 25) % 10) / 5 << " nickles\n";

	cout << ((((change % 100) % 25) % 10) % 5) / 1 << " pennies" << endl;

	return 0;
}