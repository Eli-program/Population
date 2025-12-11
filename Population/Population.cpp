#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int initial_population; 
	cout << "Enter the current population: ";
	cin >> initial_population;
	if (initial_population <= 2) {
		cout << "Population must be greater than 2." << endl;
		return 1;
	}
	double growth_rate;
	cout << "Enter the annual growth rate (as a decimal): ";
	cin >> growth_rate;
	if (growth_rate < 0) {
		cout << "Growth rate must be non-negative." << endl;
		return 1;
	}
	int days; // Number of days to project
	cout << "Enter the number of days to project: ";
	cin >> days;
	if (days < 0) {
		cout << "Number of days must be non-negative." << endl;
		return 1;
	}

	// Use fractional years to apply the annual growth rate over days:
	// population * (1 + annual_rate)^(days / 365.0)
	double projected_population = initial_population * pow(1.0 + growth_rate, days / 365.0);

	cout << "Projected world population in " << days << " days: "
		 << llround(projected_population) << endl;
	return 0;
}