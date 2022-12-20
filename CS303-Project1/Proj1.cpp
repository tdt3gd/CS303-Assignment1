#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Proj1.h"

const int contents = 100;
int my_array[contents];
std::string data_file = "data_num_file_2.txt";

int main() {
	cout << "Enter the name of the number file ";
	cin >> data_file;
	number_set A(my_array[contents - 1], data_file);
	int count = 0;
	count = A.read_file(my_array, data_file, count);
	cout << data_file << '\n';

// Main Menu
	A.main_menu(my_array, count);
	
//	std::cout << A;
//	return 0;
	/*	std::ifstream myfile;
		myfile.open("data_num_file_2.txt");
		std::string temp_string;
		int temp_number;
		std::stringstream ss;
		int z = 0;
		while (std::getline(myfile, temp_string, ',')) {
			std::stringstream ss;
			ss << temp_string;
			ss >> temp_number;
			my_array[z] = temp_number;
			count++;
			z++;
		}
		myfile.close();
		*/
//	std::cout << "made it to here";
	int y = 100;
	for (int q = 0; q < y; q++) {
//		std::cout << A[0] << '\n';

	}
};
	