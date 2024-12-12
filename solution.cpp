// creating a division program step by step
#include <iostream> 
using namespace std;

int main()
{
    //initializing variables
    
    int dividend;
    int divisor;
    int answer1;
    float answer2;
    
    //taking in inputs for equation
    
    cout << "Enter a whole number that is the dividend: ";
    cin >> dividend;
    cout << "Enter a whole number that is the divisor: " << endl;
    cin >> divisor;
    cout << "We will divide " << dividend << " by " << divisor <<endl;
    
    //evaluating equation based on inputs
    
    answer1 = dividend / divisor;
    answer2 = dividend / float(divisor);
    
    //outputting final result after evaluating
    
    cout << "\nThe quotient of the integer division is: " << answer1 << endl;
    cout << "The quotient of the double division is: " << answer2 << endl;

return 0;
}
