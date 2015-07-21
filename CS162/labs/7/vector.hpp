#include <stdlib.h>
#include <iostream>
using namespace std;
template <class T>
class vector {
   private:
      T *v;
      int s;
      int capacity;
   public:
    vector(){
		s=0;
		v=NULL;
    }

    vector(int x) {
    	v = new T[x];
    	s = 0;
    }

    //Copy Constructor 
    vector(vector<T> &other){
    	if ((other.s = NULL)) {
    		s = NULL;
    	}
   		for (int i = 0; i < s; i++) {
   			v[i] = other.v[i];
   		}
    }

    //Assignment Overload
    void operator=(vector<T> &other) {
    	s = other.s;
    	if (other.v != NULL) {
    		delete other.v;
    	}
    }

    //T operator[](int)
    T operator[](int x) {

    }

    void resize() {

    }

    T at(int x) {
      if(x >= capacity) {
        if(x < 0) {
          cout << "Error" << endl;
        }
      }
      return v[x];
    }

    ~vector(){
		  delete [] v;
    }

    int size() {
		  return s;
    }

    void pushback(T ele) {
		T *temp;
		temp = new T[s];
	
		for(int i=0; i<s-1; i++)
			temp[i]=v[i];

			delete [] v;
			s++;
			v = new T[s];

		 for(int i=0; i<s-1; i++)
	 	   v[i]=temp[i];

		 v[s-1]=ele;
		 delete [] temp;
     }
};
