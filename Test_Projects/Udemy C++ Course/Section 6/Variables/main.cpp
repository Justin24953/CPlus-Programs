#include <iostream>

using namespace std;

// Start Using {} to intialize variables

/* int main () {

    int age {1};
    
    cout << age << endl;
    
        return 0;
}  */

// Giving the user the square footage of their room.

int main () 
{
    
cout << "What is the Length and Width Of The Room in that order." << endl;

int length_of_room {0};

int width_of_room {0};

cin >> length_of_room >> width_of_room;

cout << "The Sqaure Footage Of Your Room is " << length_of_room * width_of_room << endl;

return 0;

}