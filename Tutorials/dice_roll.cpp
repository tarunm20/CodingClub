#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int total = 0;
int dice_roll(){
  int a = rand()%6+1;
  return a;
}
void diceout(){
  int dice_result = dice_roll();
  total = total + dice_result;
  if(dice_result==1){
    cout << "     \n     \n  *  \n     \n     ";
  }
  else if(dice_result==2){
    cout << "     \n *   \n     \n   * \n     ";
  }
  else if(dice_result==3){
    cout << "     \n *   \n  *  \n   * \n     ";
  }
  else if(dice_result==4){
    cout << "     \n * * \n     \n * * \n     ";
  }
  else if(dice_result==5){
    cout << "     \n * * \n  *  \n * * \n     ";
  }
  else if(dice_result==6){
    cout << "     \n * * \n * * \n * * \n     ";
  }
}
int main(){
  int n;
  srand(time(NULL));
  cout << "How many dice rolls?\t";
  cin >> n;
  cout << "\n\n";
  for(int i=1;i<=n;i++){
    diceout();
    cout << "\n\n";
  }
  cout << "Dice Total:\t" << total << "\n";
}
