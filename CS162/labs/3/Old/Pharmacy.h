#ifndef PHARMACY_H
#define PHARMACY_H
#include <string>

using std::string;

class Pharmacy {
	private:
		double medCost[5];
		string medName[5];
	public:
		Pharmacy();					//Default Constructor
		~Pharmacy();				//Destructor 
		Pharmacy(double, string);		//Constructor
		Pharmacy(const Pharmacy&);	//Copy Constructor
		double setUserMed();
		string getMedName();
};


#endif 