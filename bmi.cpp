#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);

int main() {
	double bmi;
	int weight;
	int height;

	bmi = 0;
	cout << "This program will calculate your BMI using your weight and height." << endl;
	cout << "What is your current weight in pounds?" << endl;
	cin >> weight;
	cout << "What is your height in inches?" << endl;
	cin >> height;
	bmi = (double)weight * 703 / (height * height);
	if (bmi >= 18.5 && bmi <= 25) {
		cout << "Your BMI is " << bmi << endl;
		cout << "You are at an optimal weight." << endl;
	}
	else {
		if (bmi < 18.5) {
			cout << "Your BMI is " << bmi << endl;
			cout << "You are underweight." << endl;
		}
		else {
			if (bmi > 25) {
				cout << "Your BMI is " << bmi << endl;
				cout << "You are overweight." << endl;
			}
		}
	}
	system("pause");
	return 0;
}

// The following implements type conversion functions.
string toString(double value) { //int also
	stringstream temp;
	temp << value;
	return temp.str();
}

int toInt(string text) {
	return atoi(text.c_str());
}

double toDouble(string text) {
	return atof(text.c_str());
}
