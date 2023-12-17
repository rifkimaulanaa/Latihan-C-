#include <iostream>
using namespace std;

main()
{
int number [5] = {7,1,9,5,3}, x, total=0;

for (x =0; x < 5; x++) {

    total= total + number[x];
}
cout <<"nilai akumulasi  dari array adalah: "<<total;

}