#include <iostream>
#include <stdexcept>
using namespace std;

double divide( double numerator, double denominator )
{
    if ( denominator == 0 )
    {
        throw invalid_argument( "Division by zero is undefined." ); 
    }
    return numerator / denominator;
}

int main()
{
    double num1, num2;
    cout << "Enter numerator: ";
    cin >> num1;
    cout << "Enter denominator: ";
    cin >> num2;

    try 
    {
      double result = divide( num1, num2 );
      std::cout << "Result: " << result << "\n";
    }
    catch ( const invalid_argument  &e )
    {
        cout<< "Exception: " << e.what() << "\n";
    }
    return 0;
}