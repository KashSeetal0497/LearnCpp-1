#include <iostream>
#include <string>

using namespace std;

namespace calculator {
	class operations{
	public:
		int addition(const int a, const int b) {
			return a + b;
		}

		int subtraction(const int a, const int b) {
			if (a > b) return a - b;
			return b - a;
		}

		int multiplication(int a, const int b) {
			int result = 0;
			for (int i = 0; i < (int)b/2; i++) {
				result += addition(a, a);
			}
			if (b % 2 != 0) {
				result = addition(result, a);
			}
			return result;
		}

		float division(const float a, const float b) {
			if (a < b) return (b / a);
			return (a / b);
		}
	};

	class Calculator : public operations {
	public:
		int a;
		int b;
		string line="";

		Calculator(int a, int b) {
			a = a;
			b = b;
		}


		void demo() {
			do {
				cout << "Enter a" << endl;
				cin >> a;
				cout << "Enter b" << endl;
				cin >> b;

				cout << "Addition: " << addition(a, b) << endl;

				cout << "Subtraction: " << subtraction(a, b) << endl;

				cout << "Multiplication: " << multiplication(a, b) << endl;

				float x = (float)a;
				float y = (float)b;

				cout << "Division: " << division(x, y) << endl;

				cout << "q to exit, anything else to continue "<<endl;

				cin>>line;

			}
			while (line != "q");
		}
	};
};


using namespace calculator;
int main() {
	Calculator c = Calculator(0,0);
	c.demo();
	return 0;
}
