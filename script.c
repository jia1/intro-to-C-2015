#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UTOS 1.2700
#define TRUE 1
// cannot have expressions in macro

void q1(); // chicken rice
void q2(); // currency
void q3(); // temperature
void q4(); // last digit
void q5(); // largest
void q7(); // times tables
long power(int base, int exp);
void q8(); // power
void q9(); // perfect square
void q10(); // first digit
void q11(); // any digit, BUGGY
void q12(); // guess age
void asterisk(int l, int m); // horizontal, vertical and diagonal
void pyramid(); // 1, 3, 5, 7, 9
void pyramid_2(); // upside-down
void rotate(); // 90-degree
void swap(); // unused
void sort_five();
void q14(); // palindrome
void print_m();
void d31(); // hypotenuse
void d32(); // any side given hypotenuse and another side
void draw3(); // triangle
void iter_fac_while(); // factorial via while
void iter_fac_for(); // factorial via for
void prime_fac(); // generates prime factors
void pascal(); // pascal triangle
void gcd(); // greatest common divisor
int gcd_f(int first, int second); // function return
void lcm(); // lowest common multiple
void brute_lcm(long a, long b);
void brute_gcd(long a, long b);

void main()
{
	srand(time(NULL));

	printf("Press the enter/return key upon typing each input.\n\n");
	q1(); // chicken rice
	printf("\n");
	q2(); // currency
	printf("\n");
	q3(); // temperature
	printf("\n");
	q4(); // last digit
	printf("\n");
	q5(); // largest
	printf("\n");
	q7(); // times tables
	printf("\n");
	printf("I calculate really well: 2^30 = %ld\n\n", power(2, 30));
	printf("\n");
	q8(); // power
	printf("\n");
	q9(); // perfect square
	printf("\n");
	q10(); // first digit
	printf("\n");
	q11(); // any digit
	printf("\n");
	q12(); // guess age
	printf("\n");
	printf("Here are random lines for you.\n");
	asterisk(5, 3); // horizontal, vertical and diagonal
	printf("\n");
	printf("Here is a pyramid for you.\n");
	pyramid(); // 1, 3, 5, 7, 9
	printf("\n");
	printf("Here is an inverted pyramid for you.\n");
	pyramid_2(); // upside-down
	printf("\n");
	printf("Here is a rotated pyramid for you.\n");
	rotate(); // 90-degree
	printf("\n");
	// swap(); // unused
	sort_five();
	printf("\n");
	q14(); // palindrome
	printf("\n");
	// print_m();
	d31(); // hypotenuse
	printf("\n");
	d32(); // any side given hypotenuse and another side
	printf("\n");
	draw3(); // triangle
	printf("\n");
	iter_fac_while(); // factorial via while
	printf("\n");
	iter_fac_for(); // factorial via for
	printf("\n");
	prime_fac(); // generates prime factors
	printf("\n");
	pascal(); // pascal triangle
	printf("\n");
	gcd(); // greatest common divisor
	printf("\n");
	gcd_f(96, rand()%1000000); // function return
	printf("\n");
	lcm(); // lowest common multiple
	printf("\n");
	brute_lcm(96, rand()%1000000);
	printf("\n");
	brute_gcd(96, rand()%1000000);
	printf("\n");
	
}

void q1()
{
	float chicken_per_diner, rice_per_diner, chilli_per_diner;
	int number_of_diners;
	
	printf("PE1-01 - Chicken Rice Cooking\n");
	printf("Day 1: Write an algorithm in pseudo-code that asks user to enter separately the\n");
	printf("amount of chicken, rice and chilli in kilogram that is required to cook a\n");
	printf("portion of chicken rice for 1 diner. The algorithm should then ask the user for\n");
	printf("the number of diners that is required. Finally, the algorithm should compute\n");
	printf("and print out the total amount of chicken, rice and chilli that is required for\n");
	printf("the input number of diners. Note that the amount that is required for each type\n");
	printf("of raw ingredient per diner may be less than 1 kg. Translate the algorithms\n");
	printf("that you have written for PE1-01 to PE1-14 into working C programs.\n");
	
	printf("How much chicken per diner will be needed? ");
	scanf("%f", &chicken_per_diner); // & represents the address
	printf("How much rice per diner will be needed? ");
	scanf("%f", &rice_per_diner);
	printf("How much chilli per diner will be needed? ");
	scanf("%f", &chilli_per_diner);
	printf("How many diners are there? ");
	scanf("%d", &number_of_diners);
	printf("\n");
	printf("Amount of chicken needed: %.2f\n", number_of_diners * chicken_per_diner);
	printf("Amount of rice needed: %.2f\n", number_of_diners * rice_per_diner);
	printf("Amount of chilli needed: %.2f\n", number_of_diners * chilli_per_diner);
}

void q2()
{
	float usd = 0, sgd = 0;
	int choose = 0;
	printf("PE1-02 - Currency Exchange\n");
	printf("If you want to convert from USD to SGD, type 0, else, 1. Choice: ");
	scanf("%d", &choose);	// 0 (UTOS), 1 (STOU)
	choose %= 2;			// always 0 or 1
	if (!choose)
	{ 
		printf("Input USD: ");
		scanf("%f", &usd);
		printf("Equivalent SGD: %.2f\n", usd * UTOS);
	}
	else
	{
		printf("Input SGD: ");
		scanf("%f", &sgd);
		printf("Equivalent USD: %.2f\n", sgd / UTOS);
	}
}

void q3()
{
	float c = 0, f = 0;
	int choose = 0;
	printf("PE1-03 - Temperature Conversion\n");
	printf("If you want to convert from Celsius to Fahrenheit, type 0, else, 1. Choice: ");
	scanf("%d", &choose);	// 0 (CTOF), 1 (FTOC)
	choose %= 2;			// always 0 or 1
	if (!choose)
	{ 
		printf("Input Celsius: ");
		scanf("%f", &c);
		printf("Equivalent Fahrenheit: %4.1f\n", 1.8 * c + 32);
	}
	else
	{
		printf("Input Fahrenheit: ");
		scanf("%f", &f);
		printf("Equivalent Celsius: %4.1f\n", 5.0 * ( f - 32 ) / 9.0);
	}
}

void q4()
{
	int num;
	printf("Give me an integer and I will find the last digit for you: ");
	scanf("%d", &num);
	printf("%d\n", num % 10);
}

void q5()
{
	int i1, i2, i3;
	printf("Type in 3 integers and I will sort them from smallest to biggest for you:\n");
	scanf("%d %d %d", &i1, &i2, &i3);
	if ( i1 >= i2 && i1 >= i3 )
	{
		printf("Largest integer: %d\n", i1);
	}
	else
	{
		if ( i2 >= i3 )
		{
			printf("Largest integer: %d\n", i2);
		}
		else
		{
			printf("Largest integer: %d\n", i3);
		}
	}
}

void q7()
{
	int user_input, counter;
	printf("Type a random integer and I will give you its times table up to 10: ");
	scanf("%d", &user_input);
	for ( counter = 1; counter <= 10; counter++ )
	{
		printf("%d ", user_input * counter);
	}
	printf("\n");
}

long power(int base, int exp)
{
	long answer = 1;
	int i;
	for (i = 1; i <= exp; i++)
	{
		answer *= base;
	}
	return answer;
}

void q8()
{
	int b, e;
	printf("This is a power function coded from scratch, not via powf()\n");
	printf("in the <math.h> header file.\n");
	printf("Insert base: ");
	scanf("%d", &b);
	printf("Insert exponent: ");
	scanf("%d", &e);
	printf("%d^%d = %ld\n", b, e, power(b, e));
}

void q9()
{
	int test_int, base_int, square_or_not = 0;
	printf("Test an integer from 1 to 100 whether it is a perfect square number: ");
	scanf("%d", &test_int);
	for ( base_int = 1; base_int <= 10; base_int++ )
	{
		if ( base_int * base_int == test_int )
			{
				square_or_not = 1;
				printf("%d is a perfect square of %d! :D\n", test_int, base_int);
			}
    
	}
	if ( !square_or_not )
	{
		printf("%d is not a perfect square ):\n", test_int);
	}
}

void q10()
{
	int test_digits, answer = 0;
	printf("Insert any integer and I will output its first digit to you: ");
	scanf("%d", &test_digits);
	for ( answer = test_digits; answer >= 10; answer /= 10 );
	printf("First digit: %d\n", answer);
	
	/*
	while ( test_digits >= 10 )
	{
		test_digits /= 10;
	}
	*/
	
	/*
	for(;;)
	{
		if ( test_digits < 10 ) 
		{
			break;
		}
	test_digits /= 10;
	}
	*/
}

void q11()
{
	int input, n;
	int decimal = 10, counter = 1;
	printf("Insert integer, hit Enter, and then the nth digit you want:\n");
	scanf("%d %d", &input, &n);
	if (!n)
	{
		printf("Error: Digit position must be greater than 0.\n");
	}
	else if ( input < power(decimal, n-1) ) // nth digit == index n-1
	{
		printf("Error: Digit position is more than the number of digits.\n");
	}
	else // len()
	{
		if ( input < 10 )
		{
			printf("Answer: %d\n", input);
		}
		else
		{
			while ( input >= power(decimal, counter) ) // counter already 1
			{
				counter++; // +1 already then exit
			}
			printf("Length: %d\n", counter);
			if (counter - n) // number of places before the nth digit != 0
			{
				input /= 10 * (counter - n);
				// consider that last digit will be sieved out via modulus
				// thus one less division
			}
			printf("Answer: %d\n", input % 10);
			printf("I could not debug the program's errors if you give a 6-digit integer ):\n");
			printf("Or other unknown cases that I did not explore...\n");
		}
	}
}

void q12()
{
	srand(time(NULL)); // find out what this is doing
	int exit = 0;
	while (!exit)
	{
		int correct = -1, guess = 0, attempts = 1;
		correct = rand() % 100 + 1; // remainder will be 1 to 100
		while ( guess != correct )
		{
			printf("Guess my age: ");
			scanf("%d", &guess);
			if ( guess > correct )
			{
				printf("Too big!\n");
			}
			else
			{
				printf("Too small!\n");
			}
			attempts++;
		}
		printf("Congratulations! You took %d guesses.\n", attempts);
		if ( attempts > 10 )
		{
			printf("My best record is 6 guesses.\n");
			printf("If you feel that your number of guesses is too many,\n");
			printf("why not learn about binary search?\n");
		}
		printf("Do you want to exit (1 for Yes and 0 for No): \n");
		scanf("%d", &exit); // solve via binary search
	}
}

void asterisk(int length, int mode)
{
	int counter = 0;
	int col = 0;
	/*
	int length, mode;
	printf("Choose mode: ");
	scanf("%d", &mode);
	printf("Insert length of asterisks: ");
	scanf("%d", &length);
	*/
	
	while( counter < length ) // number of rows
	{
		switch(mode) {
			case 0: {
				printf("*");
				
				break;
			}
			case 1:
			{
				printf("*\n");
				
				break;				
			}
			case 2:
			{
				if ( counter > 0 )
				{
					printf("*");
					for ( col = 1; col < counter; col++ )
					// first "iteration" prints NO space
					{
						printf(" ");
					}
				}
				printf("*\n"); // just before proceeding to next row
				break;
			}
			case 3:
			{
				if ( counter < length - 1 )
				{
					printf("*");
					for ( col = length - counter - 3; col >= 0; col-- )
					{
						printf(" ");
					}
				}
				printf("*\n");
				break;
			}
		}
		counter++;
	}
}

void pyramid()
{
	int length = 5;
	int row, n, spaces, ast;
	for ( row = 0; row <= length; row++ )
	{
		n = length - row - 1;
		for ( spaces = 0; spaces <= n; spaces++ )
		{
			printf(" ");
		}
		for ( ast = 1; ast <= 2 * row - 1; ast++ )
		{
			if ( row != length )
			{
				if ( ast == 1 || ast == 2 * row - 1 )
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

void pyramid_2()
{
	int length = 5;
	int row, n, spaces, ast;
	for ( row = length; row > 0; row-- ) // invert this line to invert pyramid
	{
		n = length - row - 1;
		for ( spaces = 0; spaces <= n; spaces++ )
		{
			printf(" ");
		}
		for ( ast = 1; ast <= 2 * row - 1; ast++ )
		{
			if ( row != length )
			{
				if ( ast == 1 || ast == 2 * row - 1 )
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

void rotate()
{
	int x = 5;
	asterisk(x, 2); // mode 2
	asterisk(x - 1, 3); // the peak of the pyramid is printed by the preceding call
}

void swap(int varOne, int varTwo)
{
	int varTmp;
	varTmp = varOne;
	varOne = varTwo;
	varTwo = varTmp;
}

void sort_five()
{
	int frequency, round;
	int array[5], index;
	int varTmp;
	printf("Type in five integers and I will sort them for you via bubble sort.\n");
	printf("If the second input is smaller than the first input, they will switch places.\n");
	printf("Then this comparison will take place between the new second input\n");
	printf("and the third input. And so on. The new last input will now be the\n");
	printf("largest integer. And you repeat the switching process on the new first input\n");
	printf("and the updated second input. Then the updated (again) second-last input will\n");
	printf("now be the second-largest integer. And so on. Type in your integers here;\n");
	printf("hit Enter for every integer:\n");
	
	for ( index = 0; index < 5; index++)
	{
		scanf("%d", &array[index]);
	}
	
	for ( frequency = 5; frequency > 0; frequency-- )
	{
		for ( round = 0; round < frequency; round++ )
		{
			if ( array[round] > array[round+1] )
			{
				varTmp = array[round];
				array[round] = array[round+1];
				array[round+1] = varTmp;
			}
		}
	}
	
	printf("Voilà\n");
	for ( index = 0; index < 5; index++ )
	{
		printf("%d ", array[index]);
	}
	// printf("%d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4]);
	printf("\n");	
}

void q14()
{
	char array[5]; // if variable size must use pointers
	int check = 1;
	int index, new_i, counter = 0;
	
	// initialise array size 5 for input
	// detect newlines and remove
	// initialise another array of size n,
	// which is the number of remaining char
	// convert all letters to a single case
	// copy over to another array (which would be the inverted version)
	// compare element by element
	
	printf("I am a palindrome checker. I check if your input is symmetrical, but I am\n");
	printf("case-insensitive. The case-sensitive version of me is easier to write.\n");
	printf("Type a mix of characters (letters, numbers, symbols, spaces, tabs etc.)\n");
	printf("but only one at a time and at most 5!\n");
	printf("e.g. L (hit Enter) e (hit Enter) v (hit Enter) e (hit Enter) l (hit Enter)\n");
	printf("Is a palindrome.\n");
	for ( index = 0; index < 5; index++) // can make this a function
	{
		// array[index] = '\n';
		scanf("%c", &array[index]);
		// printf("%c %d\n", array[index], index);
		fflush(stdin);
	}
	
	for ( index = 0; index < 5; index++)
	{
		if( array[index] != 10 ) // '\n'
		{
			// printf("%c %d %d\n", array[index], index, counter);
			if ( array[index] >= 65 && array[index] <= 90 )
			{
				array[index] += 32;
				// printf("%d %d\n", array[index], index);
			}
			counter++;
		}
	}
	
	// printf("%d\n", counter);
	char new[counter], copy[counter];
	
	for ( index = 0; index < counter; index++ ) // can make this a function
	{
		copy[counter-index-1] = new[index] = array[index];
	}
	
	for ( index = 0; index < counter; index++ )
	{
		// printf("%c %c\n", copy[index], new[index]);
		if( copy[index] != new[index] )
		{
			// printf("Difference %c %c\n", copy[index], new[index]);
			check = 0;
			break;
		}		
	}
	
	if (check)
	{
		printf("I am a palindrome.\n");
	}
	else
	{
		printf("I am not a palindrome.\n");
	}
}

void print_m()
{
	;
}

void d31()
{
	float a, o, h, answer;
	printf("I analyse right-angled triangles. I have the P theorem built into me.\n");
	printf("Challenge me with an adjacent and opposite side (two input data required): ");
	scanf("%f %f", &a, &o);
	h = a*a + o*o;
	printf("%f\n", sqrtf(h));
}

void d32()
{
	float h, side, intermediate, answer;
	printf("I analyse right-angled triangles in a more fantastic way than my brother.\n");
	printf("I have the P theorem built into me too.\n");
	printf("Try me with a hypotenuse and one other side (two input data required): ");
	scanf("%f %f", &h, &side);
	intermediate = h*h - side*side;
	printf("%f\n", sqrt(intermediate));
}

void draw3()
{
	int base, height, row, spaces, frequency, ast;
	printf("I'm gonna make you another 2D pyramid (essentially a triangle).\n");
	printf("Enter base of pyramid (odd number integer), minimum is 3 units): ");
	scanf("%d", &base);
	printf("You have requested a pyramid with a base of %d units (:\n", base);
	
	height = ( base + 1 ) / 2;
	printf("This pyramid has a computed height of %d units (:\n", height);
	printf("Here is your triangle...\n");
	
	for ( row = 1; row <= height; row++ )
	{
		spaces = height - row;
		for ( frequency = 1; frequency <= spaces; frequency++ )
		{
			printf(" ");
		}
		for ( ast = 1; ast <= ( 2 * row - 1 - 1); ast++ )
		{
			printf("*");
		}
		printf("*\n");
	}
}

void iter_fac_while()
{
	int iterations = 5;
	for ( iterations = 1; iterations > 0; iterations-- )
	{
		int input, i;
		printf("Hello. Bow down to me, the factorial finder. Insert any integer from 0 to 12.\n");
		printf("I am too lazy to find the crazier numbers\n");
		printf("(actually, I will just get overflowed\n");
		printf("by your input because I have poor memory). Input: \n");
		scanf("%d", &input);
		if (!input || input == 1)
		{
			printf("Are you kidding me? I think you have better input than this. Answer: 1\n");
			continue;
		}
		i = input;
		while ( (i--) > 1 )
		{
			input *= i;
		}
		printf("I know I'm right. Answer: %d\n", input);
	}
}

void iter_fac_for()
{
	unsigned long long int input, i;
	
	int iterations = 5;
	for ( iterations = 1; iterations > 0; iterations-- )
	{
		printf("I appear to act like my sister but I am scripted in a slightly different way.\n");
		printf("Input: ");
		scanf("%llu", &input);
		
		if (input > 1)
		{
			for ( i = input - 1; i > 1; i-- )
			{
				input *= i;
			}
			printf("Answer: %llu\n", input);
		}
		else if (input == 1 || !input)
		{
			printf("Answer: 1\n");
		}	
	}
}

void prime_fac() {
	unsigned long long int input, even = 0, odd = 0, divisor = 2;
	int first = 1;
	printf("Problems with prime factorisation? No worries, you've me. Input: ");
	scanf("%llu", &input);
	printf("%llu = ", input);
    while (input>divisor) {
        while (input%divisor) divisor++;
        while (!(input%divisor)) {
            if (first) {
                printf("%llu ", divisor);
                first = 0;
            } else {
                printf("x %llu ", divisor);
            }
            input /= divisor;
        }
	}
}

void pascal()
{
	int n, row, col, spaces_before, frequency;
	printf("Pascal Triangle: I think I am related to the binomial theorem.\n");
	printf("Enter the number of rows required (maximum is 9): ");
	scanf("%d", &n);
	printf("You have requested a Pascal Triangle of %d rows (:\n", n);
	int array[n][n]; // not for printing
	for ( row = 0; row < n; row++ )
	{
		for ( col = 0; col < n; col++ )
		{
			array[row][col] = 0; // initialise array elements to 0
		}
	}
	/*
	for ( row = 0; row < n; row++ )
	{
		for ( col = 0; col < n; col++ )
		{
			printf("%d", array[row][col]); // initialise array elements to 0
		}
		printf("\n");
	}
	*/
	for ( row = 0; row < n; row++ )
	{
		array[row][0] = 1;  // filling up the array at the first column
		if (!row) // filling up the array at the top row
		{
			array[row][row] = 1; // debugged
		}
		if (row) // filling up the array at the lower rows
		{
			for ( col = 1; col < n; col++ ) // not the sides
			{
				array[row][col] = array[row-1][col-1] + array[row-1][col];
				// printf("%d\n", array[row][col]);
			}
		}
		
		spaces_before = n - row - 1; // pretty-printing the array
		for ( frequency = 1; frequency <= spaces_before; frequency++ )
		{
			printf(" ");
		}
		for ( col = 0; col < n; col++ )
		{
			if ( array[row][col] )
			{
				printf("%d ", array[row][col]);
			}
		}
		printf("\n");
	}
}

/*
+
++
+++
++++
+++++
*/

void gcd()
{
	int ia, ib, larger, smaller, subtractor, answer, temp;
	printf("Input two integers to find the greatest common divisor.\n");
	printf("First integer: ");
	scanf("%d", &ia);
	fflush(stdin);
	printf("Second integer: ");
	scanf("%d", &ib);
	fflush(stdin);
	
	if ( ia == ib )
	{
		printf("Answer: %d", ia);
	}
	else if ( ia > ib )
	{
		larger = ia;
		smaller = ib;
	}
	else if ( ib > ia )
	{
		larger = ib;
		smaller = ia;
	}
	
	subtractor = smaller;
	answer = larger;
	
	while ( answer > subtractor && answer != subtractor && answer != 1 )
	// either answer not reached or there is no greatest common divisor
	{
		answer -= subtractor;
		if ( subtractor > answer )
		{
			temp = subtractor;
			subtractor = answer;
			answer = temp;
			// printf("%d %d\n", answer, subtractor);
		}
	}
	
	// printf("Everything before is correct!\n");
	
	if ( answer == subtractor )
	{
		printf("Greatest common divisor is %d.\n", answer);
	}
	else
	{
		printf("Yikes. No greatest common divisor.\n");
	}
}

int gcd_f(int ia, int ib)
{
	int larger, smaller, subtractor, answer;
	
	if ( ia == ib )
	{
		return ia;
	}
	else if ( ia > ib )
	{
		larger = ia;
		smaller = ib;
	}
	else if ( ib > ia )
	{
		larger = ib;
		smaller = ia;
	}
	
	subtractor = smaller;
	answer = larger;
	
	while ( answer != subtractor && answer != 1 && answer > subtractor ) // either answer not reached or there is no greatest common divisor
	{
		answer -= subtractor;
	}
	
	// printf("Everything before is correct!\n");
	
	
	if ( answer == subtractor )
	{
		return answer;
	}
	else
	{
		return 1;
	}
}

void lcm()
{
	int div, int1, int2;
	printf("Type in two integers to find their lowest common multiple: \n");
	printf("First integer: ");
	scanf("%d", &int1);
	printf("Second integer: ");
	scanf("%d", &int2);
	div = gcd_f(int1, int2);
	printf("Answer: %d\n", int1 * int2 / div);
}

void brute_gcd(long a, long b)
{
	long min, i,gcd;
	if ( a > b )
	{
		min = b;
	}
	else
	{
		min = a;
	}
	for ( i = 1; i <= min; i++)
	{
		if ( a%i == 0 && b%i == 0 )
		{
			gcd = i;
		}
	}
	printf("Brute-force algorithm answer (code runs multiple times unintelligently)\n");
	printf("for GCD between %ld and %ld: %ld", a, b, gcd);
}

void brute_lcm(long a, long b)
{
	long max, i;
	if ( a > b )
	{
		max = a;
	}
	else
	{
		max = b;
	}
	i = max;
	while (TRUE)
	{
		if ( i%a == 0 && i%b == 0)
		{
			printf("Brute-force algorithm answer for LCM between %ld and %ld: %ld\n", a, b, i);
			break;
		}
		i++;
	}
}

// int a = 0;
// scanf("%d", &a) is assigning the input to where a is
// scanf("%d", a) is assigning the input to where 0 is
// system kernel

// C is not indent-sensitive
