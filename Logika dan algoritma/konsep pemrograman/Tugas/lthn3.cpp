#include <iostream>
using namespace std;

int main()
{
  float balances[3][5] = {
    {1, 3, 5, 7, 9},
    {2, 4, 6, 8, 10},
    {3, 5, 7, 9, 11}
  };
  float total = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      total += balances[i][j];
    }
  }

  cout << "Nilai akumulasi dari array adalah: " << total << endl;

  return 0;
}



