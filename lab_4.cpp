#include <iostream>
using namespace std;
void average(){
  int* arr;
  int size;
  cout << "Enter the size of array: ";
  cin >> size;
  arr = static_cast<int*>(calloc(size, sizeof(int)));
  cout << "Enter all the elements: ";
  for(int i=0;i<size;i++){
    cin >> arr[i];
  }
  int sum = 0;
  for(int i=0;i<size;i++){
    sum += arr[i];
  }
  int avg = sum/size;
  cout << "average: " << avg;
}

void maxElement(){
  int* arr;
  int size;
  cout << "Enter the size of array: ";
  cin >> size;
  arr = static_cast<int*>(calloc(size, sizeof(int)));
  cout << "Enter all the elements: ";
  for(int i=0;i<size;i++){
    cin >> arr[i];
  }
  for(int i=0;i<size;i++){
    for(int j=i;j<size;j++){
      if(arr[i]>arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  cout << arr[size-1] << " is the largest";
}

void addMatrix(){
  int rows, columns;
  cout << "Enter the no of rows: ";
  cin >> rows;
  cout << "and columns: ";
  cin >> columns;
  int mat1[rows][columns];
  int mat2[rows][columns];
  cout << "For 1st matrix:" << endl;
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cout << "Enter the " << j << "th element of " << i << "th row: ";
      cin >> mat1[i][j];
    }
  }
  cout << "For 2nd matrix:" << endl;
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cout << "Enter the " << j << "th element of " << i << "th row: ";
      cin >> mat2[i][j];
    }
  }
  int mat3[rows][columns];
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      mat3[i][j] = mat1[i][j]+mat2[i][j];
    }
  }
  cout << "Final matrix:" << endl;
  for(int i=0;i<rows;i++){
    cout << "\n";
    for(int j=0;j<columns;j++){
      cout << mat3[i][j] << " ";
    }
  }
}

int main(){
  addMatrix();
  maxElement();
  average();
}
