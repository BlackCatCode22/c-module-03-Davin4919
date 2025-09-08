#include <iostream>
#include <string>
# include <algorithm>

int main() {
    using namespace std;

    string myStrObject = "abc def g h ijk";

    cout<< "\n\n";
    cout << myStrObject[5] << endl;
    cout<< "\n\n";

    int lengthOfMyString = myStrObject.length();
    cout << "\nLength of string" << lengthOfMyString << endl;
    for (int i = 0; i <= lengthOfMyString/2; i++) {
        cout << "i = " << i <<  "and the char at" << i << " is " << myStrObject[i] << endl;

        char myTempChar;
        for (int i = 0; i <= lengthOfMyString/2; i++) {

            myTempChar = myStrObject[i];
            myStrObject[i] = myStrObject[lengthOfMyString-1];
            myStrObject[lengthOfMyString-1] = myTempChar;
        }
        return 0;
    }