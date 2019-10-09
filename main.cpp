//#include "functions.h"
#include <iostream>
#include <conio.h>

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
	        minus(a,b);
	        break;
	    case '+':
	        plus(a,b);
	        break;
	    case '*':
	        multiply(a,b);
	        break;
	    case '/':
	        divide(a,b);
	        break;
	    default:
	        cout << "Error\n";
	    }
 	cout << "Result =" << result;
    return(0);
}
