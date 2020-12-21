#include <iostream>


int gcd_naive(int a, int b) {

	//helper variable to hold remainder
	int c;

	//Check which one is greater and rearrange variables for clarity
	if (b > a) {
		c = a;
		a = b;
		b = c;
	}

	if (a % b == 0) {
		return b;
	}
	else {

		//otherwise find the remainder a' when a is divided by b, and find (b,a')

		c = a % b;
		a = b;
		b = c;
		gcd_naive(a, b);

	}



}




long long lcm_naive(int a, int b) {

	unsigned long long int gcm = (unsigned long long int)a * b;
	unsigned long long int lcm = (gcm / gcd_naive(a, b));
	return  lcm;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << lcm_naive(a, b) << std::endl;
	return 0;
}
