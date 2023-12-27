//  playMove.cpp
//  Connect Four Game
//
//  Created by Tarek Abdelrahman on 2019-06-07.
//  Modified by Tarek Abdelrahman on 2020-09-17.
//  Modified by Salma Emara and Ethan Hugh on 2023-09-06
//  Copyright © 2019-2020 Tarek Abdelrahman. All rights reserved.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.
//
//  ECE244 Student: write your code for playMove in this file

#include "GameState.h"
#include "globals.h"

// Function prototypes (if you need)
bool leftRight(GameState& game_state);
bool upDown(GameState& game_state);
bool rightDiagonal(GameState& game_state);
bool leftDiagonal(GameState& game_state);



void playMove(GameState& game_state) {
  int rowSelect = game_state.get_selectedRow();
  int colSelect = game_state.get_selectedColumn();

  // Change turn if move is valid
  // Update the turn value to reflect that the turn has changed
  // Switch R --> Y or Y --> R (Red is always first)
  if (game_state.get_turn()) {
    game_state.set_turn(R);  // Change to R's turn
  } else {
    game_state.set_turn(Y);  // Change to Y's turn
  }

  if (game_state.get_turn()) {
    game_state.set_gameBoard(rowSelect, colSelect, R);  // Red placed first
  } else {
    game_state.set_gameBoard(rowSelect, colSelect, Y);  // Yellow placed after
  }

  // Change gameOver
  // Change winner
  if (leftRight(game_state) || upDown(game_state) || rightDiagonal(game_state) || leftDiagonal(game_state)) {
    game_state.set_winner(game_state.get_turn());
    game_state.set_gameOver(true);
  }
\
}

  bool leftRight(GameState& game_state) {
    for (int col = 0; col < boardSize; col++) {
      for (int row = 0; row < 4; row++) {
        int currentTile = game_state.get_gameBoard(row, col);

        if (currentTile != Empty && 
            currentTile == game_state.get_gameBoard(row + 1, col) &&
            currentTile == game_state.get_gameBoard(row + 2, col) &&
            currentTile == game_state.get_gameBoard(row + 3, col)) {
            return true;
        }
      }
    }
    return false;
  }

  bool upDown(GameState& game_state) {
    for (int col = 0; col < 4; col++) {
      for (int row = 0; row < boardSize; row++) {
        int currentTile = game_state.get_gameBoard(row, col);

        if (currentTile != Empty && 
            currentTile == game_state.get_gameBoard(row, col + 1) &&
            currentTile == game_state.get_gameBoard(row, col + 1) &&
            currentTile == game_state.get_gameBoard(row, col + 1)) {
            return true;
        }
      }
    }
    return false;
  }
  
  bool rightDiagonal(GameState& game_state) {
    for (int col = 0; col < 4; col++) {
      for (int row = 0; row < 4; row++) {
        int currentTile = game_state.get_gameBoard(row, col);

        if (currentTile != Empty && 
            currentTile == game_state.get_gameBoard(row + 1, col + 1) &&
            currentTile == game_state.get_gameBoard(row + 2, col + 2) &&
            currentTile == game_state.get_gameBoard(row + 3, col + 2)) {
            return true;
        }
      }
    }
    return false;
  }

bool leftDiagonal(GameState& game_state) {
    for (int col = 0; col < 4; col++) {
      for (int row = 0; row < 4; row++) {
        int currentTile = game_state.get_gameBoard(row, col);

        if (currentTile != Empty && 
            currentTile == game_state.get_gameBoard(row - 1, col + 1) &&
            currentTile == game_state.get_gameBoard(row - 2, col + 2) &&
            currentTile == game_state.get_gameBoard(row - 3, col + 2)) {
            return true;
        }
      }
    }
    return false;
  }
  
