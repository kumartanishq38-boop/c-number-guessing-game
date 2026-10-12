# Number Guessing Game in C

## Project Description
This is a simple Number Guessing Game written in C language.

The program generates a random number and asks the player to guess it.  
- If the player's guess is higher than the actual number, it displays **"Lower number please"**.  
- If the player's guess is lower than the actual number, it displays **"Higher number please"**.  
- When the player guesses the correct number, the program shows how many attempts were used to find the number.

## How it Works
1. The program generates a random number.
2. It repeatedly asks the user for a guess using a loop.
3. After each guess, it checks whether the number is higher, lower, or correct.
4. Once the correct number is guessed, it displays the total number of attempts.

## How to Run
```bash
gcc main.c -o game
./game
