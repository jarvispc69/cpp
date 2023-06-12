#include<iostream>
#include<conio.h>
using namespace std;

class calculator {
    public:
        float a;
        calculator(int x = 0) {
            a = x;
        }
        float operator+(calculator obj) {
            return a + obj.a;    
        }
        float operator-(calculator obj) {
            return a - obj.a;    
        }
        float operator*(calculator obj) {
            return a * obj.a;    
        }
        float operator/(calculator obj) {
            if(obj.a == 0) {
                cout << "Can't divide by zero!!!!!!!!" << endl;
                return 0;
            }
            else {
                return a / obj.a;
            }
        }
};

int main() {
    float a, b;
    char c;
    cout << "Enter your arithmetic expression: ";
    cin >> a >> c >> b;
    calculator obj1(a), obj2(b), obj3;
    switch(c) {
        case '+':
            obj3 = obj1 + obj2;
            break;
        case '-':
            obj3 = obj1 - obj2;
            break;
        case '*':
            obj3 = obj1 * obj2;
            break;
        case '/':
            obj3 = obj1 / obj2;
            break;
        default:
            cout << "Invalid expression";
    }
    cout << a << " " << c << " " << b << " = " << obj3.a;
    getch();
    return 0;
}