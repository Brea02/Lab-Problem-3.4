#include <iostream>

using namespace std;

int main(void) {
	cout << "Enter cost of car: $";
	double carCost;
	cin >> carCost;

	cout << "Enter MPG: ";
	double mpg;
	cin >> mpg;

	cout << "Enter miles driven per year: ";
	double mpy;
	cin >> mpy;

	cout << "Enter gas price: $";
	double gasPrice;
	cin >> gasPrice;

	cout << "Enter years of use: ";
	double yearUse;
	cin >> yearUse;

	cout << "Enter car resale amount: $";
	double resale;
	cin >> resale;

	//calculations

	double gallonUsed = (mpy * yearUse) / mpg;
	double gasUsed = gallonUsed * gasPrice;

	double netCost = (carCost + gasUsed) - resale;
	cout << "Net cost of car ownership: $" << netCost << endl;



}