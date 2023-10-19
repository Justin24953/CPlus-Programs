#include <iostream>

using namespace std;

int main () 
{
    int favoriteNumber;
    cout << " Enter Favorite # Between 1 - 100!" ;
    cin >> favoriteNumber;
    cout << "Wow "; cout << favoriteNumber; cout << " is my favorite as well." << endl;
    // ^ There's no space between favotireNumber and String (FIXED!)

    cout << "No Really "; cout << favoriteNumber; cout <<" is my favorite number " << endl;
    // There has to be a faster way of me doing this.....
    return 0;
    // Figure Out Why I return 0 again!
}