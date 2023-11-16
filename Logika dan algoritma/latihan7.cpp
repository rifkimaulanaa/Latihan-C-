#include <iostream>
using namespace std;

main() {
int i = 1;

while (i <= 5) {
    int j = 1;
    while (j <= i) {
    cout <<i;
    j++;
    }
    cout <<"\n";
    i++;
}

return 0;
}
