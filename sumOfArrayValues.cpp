#include <iostream>
using namespace std;
	
int main() {
int number_of_values;
cout << "Enter num: ";
cin >> number_of_values;
int arr[number_of_values];
int c = 0;
    for(int k = 0; k < number_of_values; k++){
        cin >> arr[k];
    }
    cout << endl;
	for(int i = 0; i < number_of_values; i++){
		c += arr[i];
	cout << c << endl;
	}
  return 0;
}