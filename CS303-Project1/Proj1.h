#pragma once
#ifndef PROJ_1_H_
#define PROJ_1_H_
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Proj1.h"
using namespace std;

const int array_size = 100;
int* new_array= new int[array_size];
int array_index;
int count = 0;

class number_set 
{
public:
	int in_set(int my_array[], int element);

	int read_file(int my_array[], string data_file, int count);

	void main_menu(int *my_array, int count);

	struct number_set(int my_array, string data_file) {
		my_array = my_array;
		data_file = data_file;
	};

	int find_index(int my_value, int* my_array, int count);

	int find_value(int my_value, int* my_array, int count);

	void set_value_at_index(int new_value, int* my_array_index, int my_array, int count);

	int remove_at_index(int rm_index, int my_array[]);

	void add_to_my_array(int my_array, int new_element, int array_size);
	
	void resize_array(int* my_array);

	bool was_file_modified(int* my_array);
};

// METHOD DEFINITIONS 

	int number_set::read_file(int my_array[], string data_file, int count) {
		count = 0;
		std::ifstream myfile;
		myfile.open(data_file);
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
/* - diagnostic to print our array elements and element indices
		cout << "Made it to here";
*/
		int zz = count;
		for (int nn = 0; nn < zz; nn++) {
			std::cout << my_array[nn] << " " << nn << " \n";
		}
		cout << "The count is ", count, "\n";
		myfile.close();
		return count;
	}

/*	struct number_set::number_set() {

	}


	int number_set(int my_array[], int data_num_file) {
		return 0;
	};
	

	void fill_set() {}
	*/

	void number_set::main_menu(int *my_array, int count) {
		int user_menu_choice;
		int *a_number = 0;
		cout << "Select: 0 Add/Change number in set\n"
			<< "Select: 1 Lookup Number\n"
			<< "Select: 2 Remove Number\n"
			<< "Select: 3 Save Number Set\n"
			<< "Select: 4 Exit\n";
		cin >> user_menu_choice;
		cin.ignore(numeric_limits<int>::max(), '\n');
		cout << "you selected " << user_menu_choice << "\n";
		if (user_menu_choice == 0) {
			int my_value;
			cout << "Enter your number to add or change: \n";
			cin >> my_value;
			array_index = number_set::find_value(my_value, my_array, count);
		} 
		else if (user_menu_choice == 1) {
			int a_lookup_number = 0;
			cout << "Enter your number to look up in the file: ";
			cin >> a_lookup_number;
			array_index = number_set::find_value(a_lookup_number, my_array, count);

		}
		else if (user_menu_choice ==2) {


		}
		else if(user_menu_choice == 3) {

		}
		else if(user_menu_choice == 4) {

		}
		else {

		}
	}

	int number_set::find_index(int my_value, int* my_array, int count) {
		for (int g = 0; g < count;  g++) {
			if (my_array[g] = my_value) {
				return g;
			}
			else {
				return -1;
			}
		}
	}

	int find_value(int my_value, int* my_array, int count) {
		for (int g = 0; g < count; g++) {
			if (my_array[g] = my_value) {
				return g;
			}
			else {
				return -1;
			}
		}
	}
	 
	void number_set::set_value_at_index(int new_value, int* my_array_index, int my_array, int count) {
		my_array[my_array_index] = new_value;

	}

	int number_set::remove_at_index(int rm_index, int my_array[]) {
		int rm = rm_index;
		while (rm < array_size) {
			my_array[rm] = my_array[rm + 1];
			rm++;
		}
		my_array[array_size - 1] = 0;
		return 0;
	}

	void number_set::add_to_my_array(int my_array, int new_element, int array_size) {
	}
	void number_set::resize_array(int* my_array) {
		size_t newSize = array_size * 2;
		int* newArr = new int[newSize];

		memcpy(newArr, my_array, newSize * sizeof(int));

		int size = newSize;
		delete[] my_array;
		my_array = newArr;
	}




int number_set::in_set(int my_array[], int element) {
	for (int j = 0; j < array_size; j++) {
		if (element == my_array[j]) {
			return j;
		}
		else {
			return -1;
		}
	}
};

#endif
