// Header Files Used.

#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>

using namespace std;

const int MAX_TRIES=6;
int letterFill (char, string, string&);

int main ()
{
 string name;
 char letter;
 int num_of_wrong_guesses=0;
 string word;
 string words[] =
 
  /*List Of Different Countries Names To Choose From Randomly*/
  
 {
 "india",
 "pakistan",
 "nepal",
 "malaysia",
 "philippines",
 "australia",
 "iran",
 "ethiopia",
 "oman",
 "indonesia",
 "america",
 "canada",
 "srilanka",
 "italy",         /*List Of Different Countries Names To Choose From Randomly*/
 "bhutan",
 "afghanistan",
 "africa",
 "bangkok",
 "japan",
 "europe",
 "brazil",
 "china",
 "germany",
 "maldives",
 "russia",
 "spain",
 "dubai",
 "qatar",
 "rome",
 "austria",
 };

 //choosing and copying a word from the above given words randomly.
 
 srand(time(NULL));
 int n=rand()% 29;
 word=words[n];

 // Initializing the secret word with the * character.
 
 string unknown(word.length(),'*');

 // Welcome Screen For User.
 
 cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
 cout << "$$$$$$$$$$$$$$$ GUESS THE COUNTRY $$$$$$$$$$$$$$$$$" << endl;  
 cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
 cout << "\n\nWelcome To The Karan's Guess The Country Name Game.\n";
 cout << "\n\n ~~~~~~~INSTRUCTIONS~~~~~~~\n";
 cout << "\n\nEach letter is represented by a Star.\n";
 cout << "\n\nType only one letter in one try. \n";
 cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.\n";
 cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

 // Loop until the guesses are used up
 
 while (num_of_wrong_guesses < MAX_TRIES)
 {
 cout << "\n\n" << unknown;
 cout << "\n\nGuess a letter: ";
 cin >> letter;
 
 /* Fill secret word with letter if the guess is correct,
  otherwise increment the number of wrong guesses.*/
 
 if (letterFill(letter, word, unknown)==0)
 {
 cout << endl << "Whoops! That letter isn't in there!" << endl;
 num_of_wrong_guesses++;
 }
 else
 {
 cout << endl << " Congratulations!! You found a letter! Keep Going!" << endl;
 }
 // Telling the user how many guesses are left.
 
 cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
 cout << " guesses left." << endl;
 
 // Check if user guessed the word.
 
 if (word==unknown)
 {
 cout << word << endl;
 cout << "Yeah! You got it!";
 break;
 }
 }
 if(num_of_wrong_guesses == MAX_TRIES)
 {
 cout << "\nSorry, you lose...GAME OVER." << endl;
 cout << "The word was : " << word << endl;
 }
 cin.ignore();
 cin.get();
 return 0;
}

/* Take a one character guess and the secret word, and fill in the
 unfinished guessword. Returns number of characters matched.
 Also, returns zero if the character is already guessed. */

int letterFill (char guess, string secretword, string &guessword)
{
 int i;
 int matches=0;
 int len=secretword.length();
 for (i = 0; i< len; i++)
 {
 // Did we already match this letter in a previous guess?
 
 if (guess == guessword[i])
 return 0;
 
 // Is the guess in the secret word?
 
 if (guess == secretword[i])
 {
 guessword[i] = guess;
 matches++;
 }
 }
 return matches;
}

