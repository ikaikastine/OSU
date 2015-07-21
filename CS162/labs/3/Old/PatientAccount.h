#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H 

class PatientAccount {
	private:
		int days;
		double charges;
		double dailyRate;


	public:
		PatientAccount(); 							//Default Constructor
		~PatientAccount();							//Destructor
		PatientAccount(int, double, const double);	//Constructor
		PatientAccount(const PatientAccount&);		//Copy Constructor 
		//void setDailyRate(double);
		double getDailyRate();
		void setCharges(double);
		void setDays(int);
		double getCharges();
		int getDays();

};



#endif 