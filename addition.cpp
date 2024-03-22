#include <iostream>
#include <string>
using namespace std;
string addition(const string& A, const string& B) {
    string result = "";
    int carry = 0;
    int Alen = A.length();
    int Blen = B.length();
    int maxlen = max(Alen, Blen);

    int i = 0;
    while (i < maxlen || carry > 0) {
        int digit1 = (i < Alen) ? (A[Alen - 1 - i] - '0') : 0;
        int digit2 = (i < Blen) ? (B[Blen - 1 - i] - '0') : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = to_string(sum % 10) + result;
        i++;
    }
    return result;
}