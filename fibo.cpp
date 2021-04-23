#include <iostream>
#define N 100100
using namespace std;

long long int seq[N];
int n = 2;
int fibonacci(int quant, int p){
  seq[p] = seq[p-1] + seq[p-2];
  if(n == quant){
    return seq[p];
  }
  if(quant == 1){
    return 1;
  }
  quant--;
  return fibonacci(quant, p+1);
}
int main(){
  seq[0] = 0;
  seq[1] = 1;
  int n = 2;
  int fibo;
  cout << "insira um valor para fibonacci: ";
  cin >> fibo;
  cout << '\n';
  cout << fibonacci(fibo, n) << '\n';
}
