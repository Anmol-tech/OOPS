#include <iostream>
#include <cstring>

using namespace std;


static void string_cat(char *str1, char *str2) {
    int length_str1 = strlen(str1);
    int length_str2 = strlen(str2);
    int total_size = length_str1 + length_str2;
    int j = 0;
    for (int i = length_str1; i < total_size; i++) {
        str1[i] = str2[j];
        j++;
    }
}

int main() {
    char arr[] = "String without ";
    char arr2[] = "function";
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "String 1: " << arr;
    cout << "\nString 2: " << arr2;
    string_cat(arr, arr2);
    cout << "\nString after concatenation: " << arr;
}