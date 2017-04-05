#include <iostream> 
#include <cmath> 
 
//Defines the specific weight of water 
#define WATER_WEIGHT 62.4; 
 
using std::cout; 
using std::cin; 
  
int main () { 
	//Variables needed to calculate buoyancy 
	float radius, b_force, volume; 
    	int weight;

	//Prompt user for weight and radius of sphere 
	cout << "Please enter the weight (lbs): "; 
        cin >> weight; 
         
	cout << "Please enter the radius: "; 
	cin >> radius; 
    
	//Calculate the volume and buoyancy force 
        volume = (4./3.) * (3.14) * (pow(radius, 3)); 
        b_force = volume * WATER_WEIGHT; 
                
        //Determine if the sphere will sink or float 
        if(b_force >= weight) { 
  	      cout << "The sphere will float!\n"; 
	}	
        else 
              cout << "The sphere will sink!\n"; 
         
        return 0;
}
