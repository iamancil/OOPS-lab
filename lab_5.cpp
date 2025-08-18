#include <iostream>
using namespace std;
//enter the marks in 3 classes using the arrays and then find the maximum score
void classes(){
  int **p = new int*[3];
  int arr[3] = {5,3,7};

  for(int i=0;i<3;i++){
    p[i] = new int[arr[i]];
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<arr[i];j++){
      cout << "p[" << i << "][" << j << "]: ";
      cin >> p[i][j];
    }
  }

  int max = p[0][0];
  for(int i=0;i<3;i++){
    for(int j=0;j<arr[i];j++){
      if(p[i][j]>max){
        max = p[i][j];
      }
    }
  }
  cout << max << " is the highest score.";
  for(int i=0;i<3;i++){
    delete[] p[i];
  }
}

//playing with the pointers

void pointers(){
  int q = 10;
  int *p = &q;
  int **r = &p;
  cout << p << endl;
  cout << p+1 << endl;
  cout << &p << endl;
  cout << r << endl;
  cout << &q;
}

int main(){
  classes();
  pointers();
  return 0;
}
