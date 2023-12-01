#include <iostream>
using namespace std;

main() {

int n;
int sum = 0;


cout << "Masukkan bilangan: ";
cin >> n;

for (int i = 1; i <= n; i++) {
    sum += i;
}


cout << "Bilangan triangular dari " << n << " adalah: " << sum <<endl;

return 0;
}
