#include <bits/stdc++.h>
using namespace std;
void ascii(){
  char c;
  cout << "Enter the character:";
  cin >> c;
  cout << "Ascii value is:" << (int)c;
}

void remainder(){
  int n;
  int m;
  cout << "Enter the dividend:";
  cin >> n;
  cout << "Enter the divisor:";
  cin >> m;
  cout << "quotient:" << n/m << "\n" << "remainder:" << n%m;
}

bool checkEven(int n){
  if ((n | 1) > n){
    return true;
  }
  else{
    return false;
  }
}

void checkOddorEven(){
  int n;
  cin >> n;

  if (checkEven(n) == true){
    cout << "even";
  }
  else{
    cout << "odd";
  }
}

void swap(){
  int n1;
  int n2;
  cout << "Enter the first no:";
  cin >> n1;
  cout << "and second:";
  cin >> n2;
  
  n1 = n1+n2;
  n2 = n1-n2;
  n1 = n1-n2;

  cout << "After swap, no 1:" << n1 << "\n no 2:" << n2;
}

int fibo(int f){
  if (f <= 1){
    return f;
  }
  else{
    return fibo(f-1)+fibo(f-2);
  }
}

void fibo_main(){
  int lim;
  cout << "Enter limit:";
  cin >> lim;
  for(int i=0;i<lim;i++){
    cout << fibo(i) << " ";
  }
}

int main(){
  ascii();
}
