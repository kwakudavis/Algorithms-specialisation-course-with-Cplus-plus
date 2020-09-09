// Algorithms toolbox testbed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProductFast(const std::vector<long long>& numbers) {
	long long max_1_index =-1;
	long long max_2_index =-1;



	//Find the first maximum element
	for (int i = 0; i < numbers.size(); i++)
	{
		if ((max_1_index==-1) || (numbers[i] > numbers[max_1_index])) {
			max_1_index = i;
		}
	}




	//Find the second maximum element 
	for (int j = 0; j < numbers.size(); j++)
	{
		if ((j != max_1_index) && ((max_2_index == -1) || (numbers[j] > numbers[max_2_index]))) {
			max_2_index = j;
		}
	}


	//return the product 
	return (long long) (numbers[max_1_index]*numbers[max_2_index]);
	
}

int main() {
	int n;
	std::cin >> n;
	std::vector<long long> numbers(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> numbers[i];
	}

	std::cout << MaxPairwiseProductFast(numbers); std::cout << "\n";
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
