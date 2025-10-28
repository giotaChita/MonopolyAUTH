# Monopoly Game in C++

A C++ implementation of the Monopoly board game craeted as part of the Object-Oriented Programming course at ECE AUTH.

## Project Overview

The game features core Monopoly mechanics including property trading, rent collection, etc.

- Property trading and management
- Rent collection system
- Dice-based movement
- Player turn management
- Bank transaction system
- CSV-based board configuration

## Projcet Structure
monopoly/
  ├── main.cpp                 # Main game loop and program entry point
  ├── Makefile                 # Build automation and compilation rules
  ├── Bank.h                   # Bank class declaration - manages money and properties
  ├── Bank.cpp                 # Bank class implementation
  ├── Dice.h                   # Dice class declaration - handles random dice rolls
  ├── Dice.cpp                 # Dice class implementation
  ├── Helpers.h                # Utility functions declaration - common helpers
  ├── Helpers.cpp              # Utility functions implementation
  ├── Player.h                 # Player class declaration - player data and actions
  ├── Player.cpp               # Player class implementation
  ├── Space.h                  # Space base class declaration - board spaces
  ├── Space.cpp                # Space base class implementation
  ├── Actions.h                # Game actions class declaration - turn logic
  ├── Actions.cpp              # Game actions class implementation
  ├── data/
  │   └── spaces.csv           # Board spaces configuration data
  └── README.md               # Project documentation


## Quick Start
```bash
make
./monopoly
