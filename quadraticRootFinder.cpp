// Program to calculate the roots and  type of roots for a quadratic equation.

#include <iostream> // io lib.
#include <cmath>  // math calc lib 
// Including needed libraries from c++ libraries

using namespace std;  // using std namespace

float a, b, c, discriminant, realPart, unEqual , rootNum_1, rootNum_2;  // declaring necessary variables for operation
// I have declared all the variables globally so that i can be used anywhere in the code inrepective of the scope and functions

// In this code i have used multiple functions



//  logical function 
void quadRoot() 
{
    // taking input from the users 
    cout<<"Please enter the co-efficient of X-Square -> ";
    cin>>a;

    cout<<"Please enter the co-efficient of X -> ";
    cin>>b;

    cout<<"Please enter the constant -> ";
    cin>>c;

// user inputs over ----------------

//  Arthimetic calculations part of the Program
// this part of the program is very important for the calculation
// so if you are not a pro dont touch this

    discriminant = pow(b,2) - 4 * a * c; // calculation formulae for discriminant 
                   // using <cmath> lib here of powers
                        
    rootNum_1 = ((-b) + sqrt(discriminant))/(2 * a);
                        // sqrt is keyword for square-root of var
    cout<<"The Alpha root is -> "<<rootNum_1<<endl;

    rootNum_2 = ((-b) - sqrt(discriminant))/(2 * a);
                        // here we are taking the root of the discriminant
    cout<<"The Beta root -> "<<rootNum_2<<endl;

    
}
// end of logical function

// i have used three function to make the code more readable

// logical_2 function for if-else and condition statements 
void conditionFunc()
{
    cout<<"the discriminant is -> "<<discriminant<<endl;
    
    // True-block
    if(discriminant == 0) {
        cout<<"The roots are 'Real and Equal' "<<endl;
    }

    // else-if block for unequal roots
    else if (discriminant > 0)
    {
        cout<<"The roots are 'Real and unequal'"<<endl;
    }
    
    else // False-block --- imagianry block 
    {
        cout<<"The roots are 'Imaginary'"<<endl;
    }

}
// end of logical or conditional function

// Calling or driver or executing function 
int main() 
{
    
    quadRoot(); // calling logical function for operations
    conditionFunc(); // calling logical_2 function for conditional operations 
    return (0);
    // terminating the func
    
}

// End of the Program


