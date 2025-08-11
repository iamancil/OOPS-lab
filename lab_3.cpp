#include <bits/stdc++.h>
using namespace std;
void prime(){
  int start, end;
  cout << "Enter the starting no: ";
  cin >> start;
  cout << "Enter the end: ";
  cin >> end;
  for(int i=start;i<end;++i){
    if(i%2 == 0){
      continue;
    }
    else{
      int x = 0;
      for(int j=3;j<i/2;++j){
        if(i%j == 0){
          x = 1;
          break;
        }
      }
      if(x==0){
        cout << i << endl;
      }
      
    }
  }
}

void palindrome(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int t = n;
  int rev = 0;
  while(t > 0){
    int dig = t % 10;
    rev = rev*10 + dig;
    t /= 10;
  }
  if(rev == n){
    cout << "palindrome";
  }
  else{
    cout << "not palindrome";
  }
}


int main(){
  prime();
  palindrome();
}
