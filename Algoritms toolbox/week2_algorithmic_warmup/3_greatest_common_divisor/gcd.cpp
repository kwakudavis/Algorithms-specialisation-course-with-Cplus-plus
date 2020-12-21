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

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
