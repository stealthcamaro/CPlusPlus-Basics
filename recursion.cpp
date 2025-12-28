// This program is an example of recursion. Recursion is when a function
// calls itself until a condition is satisfied.

#include <iostream>

using namespace std;

int product = 0;

int multiplication(int x, int y){
    if(y == 0){
        return product;
    }
    product += x;
    y--;
    return multiplication(x, y);
}


int main(){
    int x, y;
    cout << "Hello please enter 2 numbers you would like to multiply" << endl;
    cin >> x >> y;
    int answer = multiplication(x, y);
    cout << "The product is " << answer << endl;
    return 0;
}