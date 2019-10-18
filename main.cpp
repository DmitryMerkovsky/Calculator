#include "functions.h"
#include <iostream>

using namespace std;

int main(){

    double a,b,result;
    char n;
    cout << "Insert a:";
    cin >> a;
    cout << endl << "Insert b:";
    cin >> b;
    cout << endl << "Choose operation < + - * / >:";
    cin >> n;
	   switch (n){
	    case '-':
	        result=subtraction(a,b);
	        break;
	    case '+':
	        result=addition(a,b);
	        break;
	    case '*':
	        result=multiplication(a,b);
	        break;
	    case '/':
	        result=division(a,b);
	        break;
	    default:
	        cout << endl << "Error" << endl;
	    }
 	cout << endl << "Result = " << result << endl;
    return(0);
}
