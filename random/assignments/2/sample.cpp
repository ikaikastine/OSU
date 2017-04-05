#include <iostream>
#include <bitset>
#include <climits>
using namespace std;

void bin_convert(int num) {
	string bin = bitset<sizeof num>(num).to_string();
	bin = num ? bin.substr(bin.find('1')) : "0";
	cout << num << " converted to binary is: " << bin << '\n';
}

int main() {

	int num;	
	cout << "Please enter a decimal number" << endl;
	cin >> num;

	bin_convert(num);
}
