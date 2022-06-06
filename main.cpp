#include <iostream>

using namespace std;

int main() {
     int size;
    cout << "Enter string size" << endl;
    cin >> size;
    cout << endl << "Enter string" << endl;
    char* str = new char[size];

    for (int i = 0; i < size; i++)
    {
        cin >> str[i];
    }

    if (size % 2 == 0) {
        char *result = new char[size * 2];

        for (int i = 0, j = 0; i < size; i++, j++) {
            if (j == size / 2) {
                j = 0;
            }
            result[i] = str[j];
            cout << result[i];
        }

        for (int i = size, j = size / 2; i < size * 2; i++, j++) {
            if (j == size) {
                j = size / 2;
            }
            result[i] = str[j];
            cout << result[i];
        }

    } else {
        char *result = new char[(size * 2) - 1];

        for (int i = 0, j = 0; i < size - 1; i++, j++) {
            if (j == size / 2) {
                j = 0;
            }
            result[i] = str[j];
            cout << result[i];
        }

        result[size - 1] = str[size / 2];
        cout << result[size - 1];

        for (int i = size, j = size / 2 + 1; i < (size * 2) - 1; i++, j++) {
            if (j == size) {
                j = size / 2 + 1;
            }
            result[i] = str[j];
            cout << result[i];
        }
    }


}
