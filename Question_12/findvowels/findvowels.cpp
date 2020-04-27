#include <iostream>
#include <cstring>

using namespace std;

int find_vowels(char *str) {
    int count = 0;
    int len;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            count++;

    return count;
}

int main() {
    char str[50];
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "Enter the string :";
    cin >> str;
    cout << "\nNumber of Vowels in string is " << find_vowels(str);
    return 0;
}