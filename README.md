# divideInputs
2.1 Assignment 1 - Problem 1
Write a program that gets two whole numbers (integers) from the user. The first number will be the dividend, and the second number will be the divisor. The program will then compute and output the quotient of integer division, and then compute and output the quotient of double division.

You want to prompt the user for the dividend and divisor. Create a prompt for the user to input the dividend:
```
Enter a whole number that is the dividend:
```
Then create another prompt for the user to input the divisor:
```
Enter a whole number that is the divisor:
```
Note that after the colon in each of these prompts, there is a single space character. zyLabs test cases may be very specific, so it's a good idea to create your input prompts and output exactly as given in the instructions.

After the user inputs the dividend and divisor, output a sentence explaining what will be divided by what. For example, if the user entered 7 for the dividend and 3 for the divisor, your output sentence should look like this:
```
We will divide 7 by 3
```
Include a new line ('\n' or endl) before and after your output sentence.

Now compute and output the quotient for integer division and double division. Using as an example the same dividend and divisor as before (7 and 3 respectively), your output should look like this:
```
The quotient of the integer division is: 2
The quotient of the double division is: 2.33333
```
Include a new line ('\n' or endl) after each line of output.

Example Output
The following output assumes that user input is included in the output. Note that zyLabs does not count user input, so in the following examples, the output shown is what your program would look like in OnlineGDB when you are typing in the input values.

Suppose the user inputs 25 and 5 for the dividend and divisor, respectively. The entire program output should look like this:
```
Enter a whole number that is the dividend: 25
Enter a whole number that is the divisor:  5

We will divide 25 by 5

The quotient of the integer division is: 5
The quotient of the double division is: 5
```
This same example would look like this in zyLabs:
```
Enter a whole number that is the dividend: Enter a whole number that is the divisor:  
We will divide 25 by 5

The quotient of the integer division is: 5
The quotient of the double division is: 5
```
In the zyLabs output, notice that the user input is not included in the output, along with the new lines which the user types (hitting enter after typing a number). Thus, both user prompts are on the same line.

As another example, suppose the user inputs 18 and 7 for the dividend and divisor, respectively. The entire program output (in OnlineGDB with user input) should look like this:
```
Enter a whole number that is the dividend: 18
Enter a whole number that is the divisor: 7

We will divide 18 by 7

The quotient of the integer division is: 2
The quotient of the double division is: 2.57143
```
