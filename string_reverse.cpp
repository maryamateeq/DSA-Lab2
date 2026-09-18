#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the string: ";
    cin >> size;
    cin.ignore();
    // Dynamically allocate memory
    char* str = new char[size + 1];
    cout << "Enter a string: ";
    cin.getline(str, size + 1);
    // Find the length of the string
    int length = strlen(str);
    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    cout << "Reversed string: " << str << endl;
    // Free the dynamically allocated memory
    delete[] str;
    return 0;
}
