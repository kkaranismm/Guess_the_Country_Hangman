# GuessCountry_Hangman Project Report

## 1. Introduction

GuessCountry_Hangman is a C++ implementation of the classic Hangman game with a geographical twist. This report provides an overview of the project, analyzing its structure, functionality, and potential areas for improvement.

## 2. Project Overview

### 2.1 Objective
The main objective of GuessCountry_Hangman is to create an engaging, educational game that tests and improves players' knowledge of country names while providing an entertaining experience.

### 2.2 Key Features
- Random selection of country names from a predefined list
- Interactive gameplay with letter-by-letter guessing
- Limited number of incorrect guesses (6)
- Real-time feedback on guess accuracy
- Visual representation of the word's progress

## 3. Technical Implementation

### 3.1 Code Structure
The project consists of a single C++ file (`GuessCountry_Hangman.cpp`) containing approximately 150 lines of code. The structure includes:

- Main function: Handles game flow and user interaction
- letterFill function: Processes each guess and updates the game state

### 3.2 Key Components

#### 3.2.1 Random Word Selection
```cpp
srand(time(NULL));
int n = rand() % 29;
word = words[n];
```
This code snippet initializes the random number generator and selects a random country from the predefined list.

#### 3.2.2 Game Loop
```cpp
while (num_of_wrong_guesses < MAX_TRIES)
{
    // Game logic
}
```
The main game loop continues until the player runs out of guesses or correctly identifies the country.

#### 3.2.3 Guess Processing
The `letterFill` function handles the core game logic, updating the word state based on the player's guess.

### 3.3 Libraries Used
- `<iostream>`: For input/output operations
- `<cstdlib>` and `<ctime>`: For random number generation
- `<string>`: For string manipulation

## 4. Analysis

### 4.1 Strengths
1. Simple and intuitive gameplay
2. Educational value in teaching country names
3. Efficient use of C++ standard libraries
4. Clear code structure with separate functions for distinct tasks

### 4.2 Areas for Improvement
1. Limited word list: Currently only 29 countries
2. Lack of difficulty levels
3. No persistent scoring or player statistics
4. Absence of graphical user interface

## 5. Recommendations

### 5.1 Short-term Improvements
1. Expand the list of countries to increase variety
2. Implement basic error handling for invalid inputs
3. Add a hint system (e.g., continent or capital city)
4. Introduce categories (e.g., European countries, Asian countries)

### 5.2 Long-term Enhancements
1. Develop a graphical user interface using a C++ GUI library
2. Implement difficulty levels (e.g., easy, medium, hard)
3. Add a scoring system and leaderboard
4. Create a two-player mode

## 6. Conclusion

GuessCountry_Hangman is a well-implemented, entertaining educational game. Its simplicity makes it accessible to players of all ages, while its focus on geography adds educational value. With the suggested improvements, the game has the potential to become an even more engaging and comprehensive learning tool.

## 7. Appendix: Code Metrics

- Total lines of code: ~150
- Functions: 2 (main, letterFill)
- Variables: 
  - Global: 2 (MAX_TRIES, letterFill function declaration)
  - Local: 8 in main function, 4 in letterFill function
- Arrays/Vectors: 1 (words array)

This project demonstrates good use of C++ fundamentals and provides a solid foundation for further development and expansion.
