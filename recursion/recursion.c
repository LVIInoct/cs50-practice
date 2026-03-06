#include <cs50.h>
#include <stdio.h>

void draw(int n); // prototype

int main(void){
	int height = get_int("Height: "); // get a height (int) from user
	draw(height); // calling function + taking input
}

void draw(int n){ // void for no return, int n as new variable within this function

// stopping in case height is 0 or negative/base case
	if (n <= 0)
		return;
// print a pyramid of height n - 1 since it goes from bottom rows to top rows and each time its one less block
	draw(n - 1);
	for (int i = 0; i < n; i++)
		printf("#");
	printf("\n");
}
