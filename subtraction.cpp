#include <iostream>
#include <string>
using namespace std;
string subtraction(const string& A, const string& B) {
    string result = "";
    int borrow = 0;
    int Alen = A.length();
    int Blen = B.length();
    int maxlen = max(Alen, Blen);

    bool isAgtB = (Alen > Blen) || (Alen == Blen && A >= B);

    string num1 = isAgtB ? A : B;
    string num2 = isAgtB ? B : A;

    int i = 0;
    while (i < maxlen) {
        int digit1 = (i < num1.length()) ? (num1[num1.length() - 1 - i] - '0') : 0;
        int digit2 = (i < num2.length()) ? (num2[num2.length() - 1 - i] - '0') : 0;

        digit1 -= borrow;

        if (digit1 < digit2) {
            digit1 += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }

        int diff = digit1 - digit2;
        result = to_string(diff) + result;
        i++;
    }
    while (result.length() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }

    if (!isAgtB) {
        result = "-" + result;
    }

    return result;
}