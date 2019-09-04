#include <iostream>
using namespace std;

int euclid (int n, int r) {
    // r = pn + q
    if (r == 1) {
        return 1;
    }
    else if (r == 0) {
        return n;
    }
    return (r, n % r);
}
int main (){
    int a = 0, b = 0;
    cin >> a >> b;
    cout << euclid (a, b);
    return 0;
}