#include <iostream>
using namespace std;

int main() {
    float a, b, ans;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if(op == '+')
        ans = a + b;
    else if(op == '-')
        ans = a - b;
    else if(op == '*')
        ans = a * b;
    else if(op == '/'){
        if(b == 0)
            cout << "Division not possible\n";
        else
            ans = a / b;
    }
    else {
        cout << "Invalid operator\n";
        return 0;
    }

    cout << "Result = " << ans;

    return 0;
}
