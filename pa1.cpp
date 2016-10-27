//COP3530 Programming Assignment 1
//Prakash Pudhucode
//UFID 4156-0131
//COP3530 Section 13A8
#include <iostream>
#include <vector>
std::vector<int> insertion_sort(std::vector<int> arr, int size) {
	for (int i = 0; i < size; i++) {
		int j = i;
		while(j>0 && arr[j-1] > arr[j]){
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	return arr;
}
int main() {
	std::ios_base::sync_with_stdio(false);
	int size = 0;
	int input = 0;
	do {
		std::cin >> size;
	} while (size <= 0);
	std::vector<int>array(size);
	for (int i = 0; i < size; i++) {
		std::cin >> input;
		array[i] = input;
	}
	array = insertion_sort(array, size);
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}
}