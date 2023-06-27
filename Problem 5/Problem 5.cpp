#include<iostream>

using namespace std;

int main()
{
	//Giving change. Implement a program that directs a cashier how to give change. The program has two inputs: the amount due and the amount received from the customer.
	//Display the dollars, quarters, dimes, nickels, and pennies that the customer should receive in return. (Student evaluation)

	double num = 0;
	do{
		cout << "Enter the number of items: ";
		cin >> num;
	}while(num < 0);


	cout << "Please Enter the price of the items\n";
	double total_price = 0;
	for (int i = 0; i < num; i++)
	{
		double price = 0;
		cout << "Enter the price of the #" << i + 1 << " item: ";
		cin >> price;
		total_price = total_price + price;
	}

	cout << "The total_price Price is: " << total_price << " dollars" << endl;

	double receivedamount = 0;
	do{
	cout << "Enter the received amount: ";
	cin >> receivedamount;
	}while (receivedamount < total_price);

	double change_dollar = receivedamount - total_price;

	int dollars = change_dollar;
	int cents = (change_dollar - dollars) * 100;
	int quarters = cents / 25;
	int dimes = (cents % 25) / 10;
	int nickles = ((cents % 25) % 10) / 5;

	// Print the change in dollars, quarters, dimes, and nickles
	cout << "The change: " << dollars << " Dollars,  " << quarters << " Quarters,  " << dimes << " Dimes,  " << nickles << "Nickles" << endl;

	return 0;
}