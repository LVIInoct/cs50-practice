#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct // define a new type that is a data struct
{
	string name;
	string number;
} person; // name of new invented type

int main (void)
{
	person people[3]; // making amount of spaces for each identity
	people[0].name = "Hi"; // access name
	people[0].number = "10000000";

	people[1].name = "Hello";
	people[1].number = "999999";

	string name = get_string ("Name:"); // string that takes a name the user types. (variable is 'name')

	for (int i = 0; i < 3; i++){ // while i hasnt reached 3 (or array limit size), repeat the next action:
		if (strcmp(people[i].name, name) == 0){
		       // here, strcmp is used to compare if two strings contain the SAME letters and case, comparing the name from position [i] to the name within the array by going through it
		       printf("Found! %s\n", people[i].number); // specifier and numbers because it gives the number of the person user looked for
			return 0;
		}
	}
	printf("Not found\n");
	return 1;
}
