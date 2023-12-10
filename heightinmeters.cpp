//#include <iostream>
//#include <iomanip> // For std::fixed and std::setprecision
//using namespace std;
//
//int main()
//{
//	//Variables we will need
//	int feet = 0, inches = 0;
//	float meters = 0;
//
//	//Promt the user for input
//	cout << "How tall are you in feet?" << endl;
//	cin >> feet;
//	cout << "And how many inches?" << endl;
//	cin >> inches;
//	
//	// Convert feet to inches and add the remaining inches
//	int totalInches = (feet * 12) + inches;
//
//	// Convert inches to meters
//	meters = totalInches * 0.0254;
//
//	cout << "Height in feet and inches is " << feet << "ft, " << inches << "in" << endl;
//	// Set the output to display two decimal places
//	cout << fixed << setprecision(2);
//	cout << "Height in meters is " << meters << "m" << endl;
//
//	return 0;
//}