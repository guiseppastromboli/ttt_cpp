#include<iostream>
#include<vector>
#include"ttt_functions.hpp"

int main(){

  greet();

  char board[3][3] = {
    {'-', '-', '-'},
    {'-', '-', '-'},
    {'-', '-', '-'}
  };

  int player;
  int round = 3;

  //start round
  while (!winner(board)){
      for (int i = 0; i < 9; i++){
        if (i % 2 == 0){
          std::cout << "Player 1, it's your turn!\n";
          player = 1;
        }
        else{
          std::cout << "Player 2, it's your turn!\n";
          player = 2;
        }
        make_choice(board, player);
        display_board(board);
      }
  }
}
