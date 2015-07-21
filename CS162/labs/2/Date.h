#ifndef DATE_H
#define DATE_H

class Date { 
	
	private:
		int month;
		int day;
		int year;

	public:
		Date();
		Date(int, int, int);			//constructor function 
		void setDate(int m, int d, int y);	//mutator function 
		int getDate();				//accessor function
		void printDate();			//accessor function
		//int checkDate(int m, int d, int y);
};

#endif 
