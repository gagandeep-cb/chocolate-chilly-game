# Chocolate Chilly Game in C

## Overview

Chocolate Chilly Game is a simple two-player mini game developed in C programming.

In this game, a random number of chocolates is generated. Two players take turns collecting chocolates.

Each player can collect only **1 to 3 chocolates** in one turn.

The player who picks the **last chocolate** loses and gets **Chilly 🌶️**, while the other player wins and gets **Chocolate 🍫**.

This project is useful for beginners to improve programming logic and game development basics.

---

## Features

* Random chocolate generation
* Two-player turn system
* Input validation
* Remaining chocolate count
* Winner and loser logic
* Simple and interactive gameplay

---

## Concepts Used

* Variables
* Data Types
* Input / Output
* Conditional Statements (`if-else`)
* Loops (`while`)
* Random Numbers (`rand()`)
* Arithmetic Operators
* Game Logic

---

## Game Rules

1. Total chocolates are generated randomly.
2. Two players play one by one.
3. Each player can collect only **1, 2, or 3 chocolates**.
4. Invalid input is not accepted.
5. The player who picks the last chocolate gets **Chilly 🌶️**.
6. The other player wins.

---

## Example

Total chocolates = 10

Player 1 → takes 2
Remaining = 8

Player 2 → takes 3
Remaining = 5

Player 1 → takes 2
Remaining = 3

Player 2 → takes 2
Remaining = 1

Player 1 → takes 1
Player 1 gets Chilly 🌶️
Player 2 wins 🍫

---

## How to Compile

```bash
gcc chocolate_chilly.c -o chocolate_chilly
```

---

## How to Run

```bash
./chocolate_chilly
```

---

## Future Improvements

* Add multiplayer mode
* Add computer opponent
* Add score tracking
* Add replay option
* Add difficulty levels

---

## Author

**Gagandeep Banakar**
