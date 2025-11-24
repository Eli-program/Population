#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int initial_population; 
	cout << "Enter the current world population: ";
	cin >> initial_population;
	double growth_rate;
	cout << "Enter the annual growth rate (as a decimal): ";
	cin >> growth_rate;
	int years = 10; // Number of years to project
	double projected_population = initial_population * pow((1 + growth_rate), years);
	cout << "Projected world population in " << years << " years: " 
		 << static_cast<long long>(projected_population) << endl;
	return 0;
}