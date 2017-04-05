/***************************************************************************
 * Program: numbers.cpp
 * Author: Kevin Stine
 * Date: 04/12/2014
 * Description: C++ program that prints the size of all the primitive types in C++ 
 * Input: Real number value for a float and double 
 * Output: Values for C++ functions
 **************************************************************************/
 
#include <iostream>
#include <climits>
#include <cmath>
#include <cfloat>
#define NUM_BITS_BYTE 8
using namespace std;

int main() {
	unsigned short us_num_max;
	signed short s_num_max; 
	signed short s_num_min;	
	unsigned int ui_num_max;
	signed int i_num_max;
	signed int i_num_min;
	unsigned long ul_num_max;
	signed long l_num_max;
	signed long l_num_min;
	float float_num;
	float float_exp_min;
	float float_exp_max;
	double double_num;
	double double_exp_min;
	double double_exp_max;
	float user_float;
	double user_double;

	cout <<	sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(char) << endl;


	us_num_max = USHRT_MAX;
	s_num_max = SHRT_MAX;
	s_num_min = SHRT_MIN;
	ui_num_max = UINT_MAX;
	i_num_max = INT_MAX;
	i_num_min = INT_MIN;
	ul_num_max = ULONG_MAX;
	l_num_max = LONG_MAX;
	l_num_min = LONG_MIN;
	float_num = FLT_MANT_DIG;
	double_num = DBL_MANT_DIG;
	float_exp_min = FLT_MIN_EXP;
	float_exp_max = FLT_MAX_EXP;
	double_exp_min = DBL_MIN_EXP;
	double_exp_max = DBL_MAX_EXP;

	//Print the variables in decimal
	cout << "\n"; 
	cout << "Short Values" << endl;
	cout << "\n";
	cout << "The signed short max is: " << std::dec << s_num_max << endl;
	cout << "The signed short min is: " << std::dec << s_num_min << endl; 
	cout << "The unsigned short max is: " << std::dec << us_num_max << endl;
	cout << "\n";
	cout << "Int Values" << endl;
	cout << "\n";
	cout << "The signed int max is: " << std::dec << i_num_max << endl;
        cout << "The signed int min is: " << std::dec << i_num_min << endl;
        cout << "The unsigned int max is: " << std::dec << ui_num_max << endl;
	cout << "\n";
	cout << "Long Values" << endl;
	cout << "\n";
	cout << "The signed int max is: " << std::dec << l_num_max << endl;
        cout << "The signed int min is: " << std::dec << l_num_min << endl;
        cout << "The unsigned int max is: " << std::dec << ul_num_max << endl;
	
	//Print the values of each variable by adding 1 to the max number and subtract 1 for min
	cout << "\n";
	cout << "Overflow" << endl;
	cout << "\n";
	cout << "Unsigned Short Max: " << std::dec << (unsigned short) (USHRT_MAX + 1) << endl; 
	cout << "Signed Short Min: " << std::dec << (short) (SHRT_MIN - 1) << endl;
	cout << "Signed Short Max: " << std::dec << (short) (SHRT_MAX + 1) << endl;
  	cout << "\n";
	cout << "Unsigned Int Max: " << std::dec << (unsigned int) (UINT_MAX +1) << endl;
	cout << "Signed Int Min: " << std::dec << (int) (INT_MIN - 1) << endl;
	cout << "Signed Int Max: " << std::dec << (int) (INT_MAX + 1) << endl;
	cout << "\n";
	cout << "Unsigned Long Max: " << std::dec << (unsigned long) (ULONG_MAX + 1) << endl;
	cout << "Signed Long Min: " << std::dec << (long) (LONG_MIN - 1) << endl;
	cout << "Signed Long Max: " << std::dec << (long) (LONG_MAX + 1) << endl;   

	cout << "\n";
	cout << "Computation" << endl;
	cout << "\n";

	//Using pow() compute the largest and smallest short, int, and long both signed and unsigned
	cout << "Short: " << (short)((short) pow(2, (sizeof(short)*8-1))-1) << endl;
	cout << "Int: " << (int)((int) pow(2,(sizeof(int)*8-1))-1) << endl;
	cout << "Long: " << (long)((long) pow(2, (sizeof(long)*8-1))-1) << endl;  	 

	//Print the number of digits for the mantissa for floats and doubles
	cout << "\n";
	cout << "Mantissa" << endl;
	cout << "\n";
	cout << "Float Mantissa: " << float_num << endl;
	cout << "Double Mantissa: " << double_num << endl;	
	
	//Print the number of digits for the max/min exponent values of floats and doubles
	cout << "\n";
	cout << "Exponent" << endl;
	cout << "\n";
	cout << "Min Float Exponent: " << float_exp_min << endl;
	cout << "Max Float Exponent: " << float_exp_max << endl;
	cout << "Min Double Exponent: " << double_exp_min << endl;
	cout << "Max Double Exponent: " << double_exp_max << endl;
	
	//Take the user input for a float and double, subtract .01 and print
	cout << "\n";
	cout << "Please enter a real number for a float" << endl;
	cin >> user_float;
	cout << "\n";
	cout << "Please enter a real number or a double" << endl;
	cin >> user_double;
	cout << "\n";
	cout << "New Float Value: " << (user_float - .01) << endl;
	cout << "New Double Value: " << (user_double - .01) << endl;
	
	return 0;
} 
