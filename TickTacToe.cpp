//
// Created by bilbowm on 22/12/2017.
//
#include <iostream>
#include "TickTacToe.h"

namespace tic_tac_toe {
    void checkResponse(Board &boardIn, char input)
    {//check that the position selected is not already
      //selected
      int position;
      int userInput;
      do
      {
        position = getUserResponse();
        userInput = boardIn.setPosition(position, input);
        if (userInput == -1)
        {
          cout << "That postition is taken.";
        }
      } while (userInput == -1);
    }

    void getUserNames(string &userX, string &userY)
    {//get the user names
      std::cout << "Name of user to be 'x' :";
      std::cin >> userX;
      std::cout << "Name of user to be 'o' :";
      std::cin >> userY;
    }

    void printBlankBoard()
    {//print a blank board, with numbered squares
      for (int i = 0; i < 16; i++)
      {
        std::cout << "|" << i << ":";
        if (i <= 9)
          cout << " ";
        if (i % 4 == 3)
        {
          std::cout << "|\n";
        }
      }
      cout << "\n\n\n";
    }

    void printTheBoard(Board boardIn)
    {//print the board with player moves
      printBlankBoard();

      for (int i = 0; i < 16; i++)
      {
        std::cout << "|" << boardIn.getPositions()[i];
        if (i % 4 == 3)
        {
          std::cout << "|\n";
        }
      }
      cout << "\n\n\n";
    }

    void writeTheBoard(Board boardIn)
    {//print the board with player moves
      cout << "\n\n";
      for (int i = 0; i < 16; i++)
      {
        cout << "|" << boardIn.getPositions()[i];
        if (i % 4 == 3)
        {
          cout << "|\n";
        }
      }
      cout << "\n\n\n";
    }

    void printUserPrompt(string nameIn, char letter)
    {//prompt for user input
      std::cout << nameIn << " where would you like to place an " << letter << "?: ";
      cout << "\n\n";
      cout << " where would you like to place an " << letter << "?: ";
    }

    void printGameWinner(Board boardIn, string nameX, string nameO)
    {//print the winner statement
      char winner;
      winner = boardIn.determineWinner();
      if (winner == 'x')
      {
        cout << "Congrats " << nameX << " you won!\n\n";
      }
      if (winner == 'o')
      {
        cout << "Congrats " << nameO << " you won!\n\n";
      }
    }

    int getUserResponse()
    {//get the chosen user position, check that it is an integer
      //check that it is between 0 and 15 inclusive
      int position = -1;
      cout << "Enter an integer between 0 and 15: ";
      std::cin >> position;

      while (position > 15 or position < 0 or !cin)
      {
        cin.clear();
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "That is not a valid position\n";
        cout << "Enter an integer between 0 and 15: ";
        cin.clear();
        cin >> position;
      }
      return position;
    }

    void start()
    {
      Board gameBoard;
      string nameX;
      string nameO;

      int tieGame = 0;
      char gameWinner = 'z';
      int numTurns = 0;

      //get the names of the players
      getUserNames(nameX, nameO);

      //the game is played for 8 turns maximum
      while(numTurns < 8)
      {
        //print a board that has the postions numbered
        printTheBoard(gameBoard);
        //ask player x where they want to put an 'x'
        printUserPrompt(nameX, 'x');
        //check that the input is a valid position and that
        //it has not already been taken
        checkResponse(gameBoard, 'x');
        //check to see if player 'x' has four in a row somewhere on the board
        gameWinner = gameBoard.determineWinner();

        //if player 'x' has won, end the game
        if(gameWinner != 'z')
        {
          printTheBoard(gameBoard);
          writeTheBoard(gameBoard);
          printGameWinner(gameBoard, nameX, nameO);
          break;
        }
        //Now do the same for player 'o'
        //print a board that has the postions numbered
        printTheBoard(gameBoard);
        writeTheBoard(gameBoard);
        //ask player x where they want to put an 'o'
        printUserPrompt(nameO, 'o');
        //check that the input is a valid position and that
        //it has not already been taken
        checkResponse(gameBoard, 'o');

        printTheBoard(gameBoard);
        writeTheBoard(gameBoard);
        //check to see if player 'o' has four in a row somewhere on the board
        gameWinner = gameBoard.determineWinner();
        //if player 'o' has won, end the game
        if(gameWinner != 'z')
        {
          printTheBoard(gameBoard);
          writeTheBoard(gameBoard);
          printGameWinner(gameBoard, nameX, nameO);
          break;
        }
        numTurns++;
      }
      //if there is no winner at this point, the game is a tie
      if(numTurns >= 8)
        cout<<"Tie game.\n\n";
    }
}