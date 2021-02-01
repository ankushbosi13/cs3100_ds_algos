/*                                                   CS3100 / 5100: Data Structures and Algorithms Spring 2021               */             
/*                                                              Programming Assignment #1                                    */



#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <string>

using namespace std;


/*                                                      function decerations                                                 */


int reading_From_Keyboard();
int reading_From_InputFile();
int string_Comparision();
int menu();


  
/*                                                        Main function                                                       */
 

int main() {

    cout << "Hello World!" << endl;
    menu();
    return 0;

}


/*                                                        Menu Function                                                        */



int menu()  {

    int user_Option;
    while (1) {
        cout << "Choose any option" << endl;
        cout << "1 Read a specified number of the strings (last names) from the keyboard, and display them on the screen" << endl;
        cout << "2 Read a specified number of the strings (last names) from the inputFile, and display them on the screen" << endl;
        cout << "3 Read two strings (last names) from the keyboard, and test if the first string is less than, equal to, or larger than the second string, and display the testing result to the screen" << endl;
        cout << "4 Quit" << endl;
        cin >> user_Option;
        if (user_Option == 4)
        {
            break;
        }
        else {
            switch (user_Option) {
            case  1: reading_From_Keyboard();
                break;
            case  2: reading_From_InputFile();
                break;
            case  3: string_Comparision();
                break;
            default: cout << "Please enter a valid option [1 - 4]" << endl;
            }
        }
    }
    return 0;

}


/*                                              Reading the input from keyboard                                             */



int reading_From_Keyboard()  {

     string string_Name;
     int name_range;
     ofstream myfile;
     cout << "reading funtion keyboard 1" << endl;
     cout << "Enter the number of strings(LastNames) you want to read " << endl;
     cin >> name_range;
     myfile.open("input_1.txt");
     if (name_range >= 10 && name_range <= 99) {
         for (int i = 0;  i < name_range;  i++) {
             cout << "Enter the LastName" << endl;
             cin >> string_Name;
             cout << string_Name << endl;
             myfile << string_Name << endl;
         }
     }
     else {
         cout << " Please enter the valid range [10-99] " << endl;
     }
    return 0;

}



/*                                                 Reading from the Input                                                   */



int reading_From_InputFile() {

    int name_range;
    int i = 0;
    string string_Name;
    ifstream file_Name_in;
    ofstream file_Name_out;
    char lastNames[100];
    cout <<  "Enter the number of strings(LastNames) you want to read "  <<  endl;
    cin  >>  name_range;
    file_Name_in.open("all.last.txt");
    file_Name_out.open("input_2.txt");
    if (name_range >= 10 && name_range <= 99) {
        while (file_Name_in)
        {
            if (i < name_range) {
                file_Name_in.getline(lastNames, 100);
                cout << lastNames << endl;
                file_Name_out << lastNames << endl;
                i++;
            }       //closing if
            else {
                break;
            }      //closing else
        }         // closing while
     }           //closing if
    return 0;

}               //closing function 



/*                                                           String comparission                                                */



int string_Comparision()  {

    char  my_String_1[256];
    char  my_String_2[256];
    cout << "sring function 3" << endl;
    cout << "enter the first string" << endl;
    cin >> my_String_1;
    cout << "enter the second string" << endl;
    cin >> my_String_2;
    int my_strcmp = strcmp(my_String_1, my_String_2);
    if (my_strcmp > 0) {
        cout << "String 1 is greater than string 2" << endl;
    }
    else if (my_strcmp < 0) {
        cout << "String 1 is less than string 2" << endl;
    }
    else if(my_strcmp == 0 ) {
        cout << "Both the strings are equal" << endl;
    }
    return 0;
} 





