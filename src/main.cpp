#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	bool it = true;
	double a;
	while (it) {
		string convert;
		cout << "What do you want to calculate? (insert a for previous answer)" << endl;
		cin >> convert;
		string varstr;
		string op = "+";
		double answer = 0;
		unordered_set<string> ops({"+","-","*","/"});
		for (int i=0; i<convert.length(); i++) {
			string sub = convert.substr(i,1);
		
			if (ops.count(sub)) {
				double var = stod(varstr);
				if (op == "+") {
					answer += var;
				}
				else if (op == "-") {
					answer -= var;
				}
				else if (op == "*") {
					answer *= var;
				}
				else if (op == "/") {
					answer /= var;
				}
				varstr = "";
				op = sub;
			}
			else if (i == convert.length() -1) {
				varstr.append(sub);
				double var = stod(varstr);
				if (op == "+") {
					answer += var;
				}
				else if (op == "-") {
					answer -= var;
				}
				else if (op == "*") {
					answer *= var;
				}
				else if (op == "/") {
					answer /= var;
				}
				varstr = "";
			}
			else if (sub == "a") {
				string aStr = to_string(a);
				varstr.append(aStr);
			}
			else {
				varstr.append(sub);
			}
		}
		cout << answer << endl;
		a = answer;
		string option;
		cout << "Do you want to quit? (y - yes, other key - no)";
		cin >> option;
		if (option == "y") {
			it = false;
		}
	}
}
