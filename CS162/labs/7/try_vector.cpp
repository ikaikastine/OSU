#include "./vector.hpp"
#include <vector>
#include <iostream>

//We do not want to include either stmt. We wouldn't 
//be able to compare our vector template to the Standard 
//using namespace std;
//using std::vector;
using std::cout;
using std::endl;

int main () {
   //vector<int> v;   //Our vector class
   std::vector<int> stdv; //Standard vector
   std::vector<int> myVector(5);
   std::vector<int>::iterator it;
   std::vector<int> v, other;
   other = v;
   
   //vector<int> *other = new vector<int>(v);
   for (it = myVector.begin(); it != myVector.end(); it++) {
   		cout << *it << endl;
   }

   //Compare operation of our vector to std
   //v.pushback(23);
   stdv.push_back(23);

   return 0;
}

