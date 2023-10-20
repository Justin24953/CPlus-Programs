#include <iostream>

using namespace std;

int main () 
{
    int favoriteNumber;
    cout << "Enter Favorite # Between 1 - 100!" ;
    cin >> favoriteNumber;
    cout << "Wow " << favoriteNumber<< " is my favorite as well." << endl;
    // ^ There's no space between favotireNumber and String (FIXED!)

    cout << "No Reeally " <<  favoriteNumber << " is my favorite number " << endl;
    // There has to be a faster way of me doing this.....
    // ^ After Looking at the the answer I wasn't far off, but (I don't have to prompt The User everytime I use a variable with cout. Instead I can use { <<  })
    return 0;
    // Figure Out Why I return 0 again!
}

// Section 4 Quiz

// Question 1: {Compilers} are use to translate programmign language source code intructions into the appropriate machine language intructions.

// Question 2: An integrated Development Environment (IDE) typically includes a {Text Editor,Compile and Debugger}

// Question 3: A {Program} is a set of intructions that a computer executes to solve a problem.

// Question 4: Syntax errors are detected by the {compiler} 

// Question 5: A set of precise steps for solving a problem is know an a(n): {Algorithm}

// Question 6: The statements written by programmer are called {source code} [Also if the source code is passed by the compiler thewn it turns into {object code} ]  

// Question 7: The rules that must be followed when writing programs inspecifice programming languages are called {syntax}.

// Question 8: Mistakes by the programmer that cause a program to produce incorrect results are called {Logic Errors}

// Question 9: If you declare a varible and use it before initialzing it the compiler will  generate a(n) {warning}.

// Question 10: The error generated when all the parts that make up a program cannot be put togther becasue one or more are missing is called a .{Linker Error }.

