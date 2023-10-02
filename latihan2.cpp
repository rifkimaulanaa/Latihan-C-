#include <iostream>

main()
{
int a = 12, b =2, c =3, d = 4;

int result1 =a % b;
int result2 =a - c;
int result3 =a + b;
int result4 =a / b;
int result5 =a / d * d + a % d;
int result6 =a % d / d * a - c;


  std::cout <<"hasil a % b: " << result1 << std::endl;
  std::cout <<"hasil a - c: " << result2 << std::endl;
  std::cout <<"hasil a + b : " << result3 << std::endl;
  std::cout <<"hasil a / d: " << result4 << std::endl;
  std::cout <<"a / d * d + a % d: " << result5 << std::endl;
  std::cout <<"a % d / d * a - c: " << result6 << std::endl;
  
}
