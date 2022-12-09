// Miran Member UIN-654424039
//
//  Created 1/1/2020 by Miran Member for CS 141 program 1.
//  System: Clion on Windows
//
/*  Running the program looks like:
        Choose from among the following options:
        1. Display original graphic
        2. Exit the program
        Your choice -> 1
 _          _   _________   _______   ________
| \        / |	    |      |       | |        | |         |
|  \      /  |      |      |       | |        | |\        |
|   \    /   |      |      |       | |        | | \       |
|    \  /    |      |      |       | |        | |  \      |
|     \/     |      |      |______/  |________| |   \     |
|            |      |      |      \  |        | |    \    |
|            |      |      |       | |        | |     \   |
|            |      |      |       | |        | |      \  |
|            |      |      |       | |        | |       \ |
|            |      |      |       | |        | |        \|
|            |  ____|____  |       | |        | |         |

 */

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw() and setfill()
using namespace std;  // so that we don't need to preface every cin and cout with std::

int main()
{
    int menuOption = 0;

    cout << "Choose from among the following options:  \n"
         << "1. Display original graphic  \n"
         << "2. Display building          \n"
         << "3. Exit the program          \n"
         << "Your choice -> ";
    cin >> menuOption;
    cout << endl;   // Leave a blank line after getting the user input for the menu option.

    // See if exit was chosen
    if( menuOption == 3) {
        exit( 0);
    }
    else if ( menuOption == 2) { //to get custom size for the graphic
        int numBuilding;
        cout << "Number of building sections -> \n";
        cin >> numBuilding;
        if (numBuilding < 0) {// user must enter a number above 0
            cout << "Please enter a number above 0";
        }
        else if (numBuilding == 0) {// its the base and the top if the user only enter 0
            cout << setw(4) << "/\\" << endl
                 << setw(4) << "||" << endl
                 << setw(4) << "||" << endl
                 << setw(4) << "--" << endl
                 << setw(5) << "|++|" << endl
                 << setw(5) << "====" << endl
                 << setw(6) << "....\n"
                 << setw(7) << "++++++\n";
        }
        else {
            int set_w_top = (numBuilding+6);
            int i;//for the for loop, I like to use letters instead of names it makes it easier for me.
            int x;//for the for loop
            int y;//for the for loop
            int add = 2;
            int space_top = 1;
            int space_bottom = 1;
            int spaceInBetween =1;
            int spaceInBetweenBottomHalf;
            int _Base;
            cout << setw(set_w_top-2) << "/\\"<<endl//printing the top of the tower
                << setw(set_w_top-2) << "||" << endl
                << setw(set_w_top-2) << "||" << endl
                << setw(set_w_top-2) << "--" << endl
                << setw(set_w_top-1) << "|++|" << endl
                << setw(set_w_top-1) << "====" << endl;
            for (i = 1; i <= numBuilding; i++) {//nested to loop for the body of the building
                for (x = 1; x <= i; x++) {
                    spaceInBetween = (x*2)-1;}
                    spaceInBetweenBottomHalf = (x-1);
                    _Base = (x*2)-1;
                for (x = 1; x <= i; x++) {
                    cout << setfill( ' ') << setw(numBuilding+add)
                         << "|"
                         << setfill(':') << setw(space_top)
                         << "\\"
                         << setfill(':') << setw(spaceInBetween)
                         << "/"
                         << setfill(':') << setw(space_top)
                         << "|"
                         << endl;
                    space_top++;
                    spaceInBetween = spaceInBetween-2;
                }
                for (y = 1; y <= i; y++){
                    cout << setfill(' ') << setw(numBuilding+add)
                         << "|"
                         << setfill(':') << setw(spaceInBetweenBottomHalf)
                         << "/"
                         << setfill(':') << setw(space_bottom)
                         << "\\"
                         << setfill(':') << setw(spaceInBetweenBottomHalf)
                         << "|"
                         <<endl;
                    space_bottom+=2;
                    spaceInBetweenBottomHalf = spaceInBetweenBottomHalf - 1;
                }
                cout << setfill(' ') << setw((numBuilding+add))//printing the base after each body
                     << "/"
                     << setfill('-') << setw(_Base)
                     << "\\"
                     << endl;
                add--;
                space_bottom = 1;
                space_top = 1;
                spaceInBetween=i+3;
            }

            cout << " " << setfill('.') << setw((numBuilding*2)+5) << "\n";//printing the ground
            cout << setfill('+') << setw((numBuilding*2)+7) << "\n";
        }
    }
    else if( menuOption == 1) {
        // prints original ascii if user enter 1 in the prompt
        cout<< " _          _   _________   _______   ________             \n"
            << "| \\        / |	    |      |       | |        | |         |\n"
            << "|  \\      /  |      |      |       | |        | |\\        |\n"
            << "|   \\    /   |      |      |       | |        | | \\       |\n"
            << "|    \\  /    |      |      |       | |        | |  \\      |\n"
            << "|     \\/     |      |      |______/  |________| |   \\     |\n"
            << "|            |      |      |      \\  |        | |    \\    |\n"
            << "|            |      |      |       | |        | |     \\   |\n"
            << "|            |      |      |       | |        | |      \\  |\n"
            << "|            |      |      |       | |        | |       \\ |\n"
            << "|            |      |      |       | |        | |        \\|\n"
            << "|            |  ____|____  |       | |        | |         |\n";





    } //end if( menuOption == 1)  // menu option to display custom graphic
    cout << endl;
    return 0;
}
