#include <iostream>
using namespace std;

int main(){
  int rows;
  int columns;
  cout <<  "Please enter the dimensions of the matrix you will be typing out in the following format: r,c - ";
  scanf("%d,%d", &rows, &columns);
  int arr[(rows-1)][(columns-1)];

  for(int i=0;i<rows;i++){
    cout << "Row: " << (i+1) << "\n";
    for(int j=0;j<columns;j++){
      cout << "Column " << (j+1) << ":";
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i=0;i<rows;i++){
    
    for(int j=0;j<columns;j++){
      if(arr[i][j]==1){
        cout << "*";
      }
      else{
        cout << " ";
      }

    }
    cout << "\n";
  }
}
