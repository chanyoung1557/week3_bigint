#include <iostream>
#include <string>
using namespace std;
string addition(const string& A, const string& B);
string subtraction(const string& A, const string& B);
int main() {
    string  A, B;
    cout << "First number   >> ";
    cin >> A;
    cout << "Second number  >> ";
    cin >> B;
    cout << "Sum            >> " << addition(A, B)<<endl;
    cout << "Sub            >> " << subtraction(A, B);
    return 0;
}