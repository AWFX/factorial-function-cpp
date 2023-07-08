#include <iostream>
using namespace std;


// recursion solution
long long int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n - 1) ;
}

int main(){
    int num;
    cin >> num;
    cout << factorial(num) << endl;
    return 0;
}