#include<iostream>


using namespace std;

class Matrix {
    int i, j, k;
    int mul[10][10];

    void withZero(int r1, int c2) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++)
                mul[i][j] = 0;
        }
    }

public:

    void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
        withZero(r1, c2);
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                for (k = 0; k < c1; k++)
                    mul[i][j] += a[i][k] * b[k][j];
            }
        }
        cout << "The Resultant matrix is\n";
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                cout << " " << mul[i][j];
                if (j == c2 - 1)
                    cout << endl;
            }
        }
    }
};

class Console {
    int i, j;
    int c1, c2, r1, r2;
    int a[10][10], b[10][10];
    Matrix matrix;

    void matrix_input(int arr[10][10]) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                cin >> arr[i][j];
        }
    }

public:
    void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }

    void take_input() {
        cout << "Enter the order of first matrix:";
        cin >> r1 >> c1;
        cout << "Enter the order of second matrix:";
        cin >> r2 >> c2;
        if (c1 == r2) {
            cout << "Multiplication possible\n";
            cout << "Enter the elements of the first matrix \n";
            matrix_input(a);
            cout << "Enter the elements of the second matrix \n";
            matrix_input(b);
            matrix.multiply(a, b, r1, c1, c2);
        } else
            cout << "The order of the matrices doesn't supports multiplication \n";
    }
};

int main() {
    Console console;
    console.print_details();
    console.take_input();
}
