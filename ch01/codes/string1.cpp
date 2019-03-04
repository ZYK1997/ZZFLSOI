// string1.cpp -- using the C++ string class
#include <iostream>
#include <string>               // make string class available

using namespace std;            // string is in namespace std

int main(){
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1;                // create an empty string
    string str2 = "panther";    // create an initialized string
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;                // use cin for input
    cout << "Here are some felines: " << endl;
    cout << charr1 << " " << charr2 << " " 
        << str1 << " " << str2  // use cout for output
        << endl;
    
    cout << "The third letter in " << charr1 << " is "
        << charr1[2] << endl;
    cout << "The third letter in " << str1 << " is "
        << str1[2] << endl;     // use array notation
    
    return 0;
}