#include<iostream>
#include<vector>

void greet(){
  std::cout << "===========\n";
  std::cout << "Tic Tac Toe\n";
  std::cout << "===========\n";

  std::cout << "Instructions:\n";
  std::cout << "2 player game; best of 3; first enter row, then collumn to set mark\n\n";
}

void display_board(char board[3][3]){
  for(int i = 0; i < 3; i++){
    std::cout << " | ";
    for (int j = 0; j < 3; j++){
      std::cout << board[i][j] << " | ";
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}

void make_choice(char board[3][3], int player){
  int row, col;

  std::cout << "row: ";
  std::cin >> row;
  std::cout << "collumn: ";
  std::cin >> col;
  std::cout << "\n";

  if (player == 1){
    board[row - 1][col - 1] = 'X';
  }
  else{
    board[row - 1][col - 1] = 'O';
  }
}

bool winner(char board[3][3]){
  bool found_winner = false;

  //horizontal line
    if (board[0][0] == board[0][1] == board[0][2] && board[0][0] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }

    else if (board[1][0] == board[1][1] == board[1][2]  && board[1][0] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }

    else if (board[2][0] == board[2][1] == board[2][2]  && board[2][0] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }
    //vertical line
    else if (board[0][0] == board[1][0] == board[2][0] && board[0][0] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }

    else if (board[0][1] == board[1][1] == board[2][1] && board[0][1] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }

    else if (board[0][2] == board[1][2] == board[2][2] && board[0][2] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }
    // diagonal line
    else if (board[0][0] == board[1][1] == board[2][2] && board[0][0] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }

    else if (board[2][0] == board[1][1] == board[0][2] && board[2][0] != '-'){
      if (board[0][0] == 'X'){
        std::cout << "Player 1 wins!\n";
      }
      else{
        std::cout << "Player 2 wins!\n";
      }
      found_winner = true;
    }
    return found_winner;
}
