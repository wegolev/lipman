#include <iostream>

int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;  
	std::cout << u - u2 << std::endl; 

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	u = 42;
	i = 10;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

	u = 10u;
	i = -42;
	std::cout << i + i << std::endl;  // prints -84
	std::cout << u + i << std::endl;  // if 32-bit ints, prints 4294967264

	i = 10;
	std::cout << "good" << std::endl;
	while (i >= 0) {
		std::cout << i << std::endl;
		--i;
	}

	for (int i = 10; i >= 0; --i)
		std::cout << i << std::endl;

	for (unsigned u = 0; u <= 10; ++u) 
		std::cout << u << std::endl;  // prints 0 . . . 10

/* NOTE: the condition in the following loop 
         will run indefinitely
	// WRONG: u can never be less than 0; the condition will always succeed
	for (unsigned u = 10; u >= 0; --u)
    	std::cout << u << std::endl;
*/
	u = 11; // start the loop one past the first element we want to print
	while (u > 0) {
		 --u;        // decrement first, so that the last iteration will print 0
		std::cout << u << std::endl;  
	}

	// be wary of comparing ints and unsigned
	u = 10;
	i = -42;
	if (i < u)               // false: i is converted to unsigned
		std::cout << i << std::endl;
	else
		std::cout << u << std::endl;   // prints 10

	u = 42; u2 = 10;
	std::cout << u - u2 << std::endl; // ok: result is 32
	std::cout << u2 - u << std::endl; // ok: but the result will wrap around
}
	
