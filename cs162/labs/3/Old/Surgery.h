#ifndef SURGERY_H
#define SURGERY_H

class Surgery {
	private:
		double surgeryCost;
		int surgeryType;
	public:
		Surgery();					//Default Constructor
		~Surgery();					//Destructor
		Surgery(double, int);		//Constructor
		Surgery(const Surgery&);	//Copy Constructor
		double getCost();
		int getSurgeryType();
};

#endif 