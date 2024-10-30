# Personal Dictionary

A simple, command-line personal dictionary program written in C++ that lets users manage a list of words and their meanings using a linked list. The program allows users to perform various operations such as inserting, deleting, updating, displaying, and searching for words in the dictionary.

## Features

- **Insert a new word**: Add a word and its meaning to the dictionary in alphabetical order.
- **Delete a word**: Remove a specific word from the dictionary.
- **Update a word's meaning**: Modify the meaning of an existing word.
- **Display all words**: Show the entire dictionary content, listing each word and its meaning.
- **Search for a word**: Find and display a specific word and its meaning.

## How It Works

The program uses a simple linked list structure where each node represents a word and its meaning. The list remains sorted alphabetically for quick access and organization. The program is menu-driven, allowing users to select the operation they want to perform.

### Technology Used
- **Language**: C++
- **Data Structure**: Linked List

## Getting Started

### Prerequisites
To run this program, you need:
- A C++ compiler (e.g., GCC or any IDE like Visual Studio, Code::Blocks, etc.)

### Running the Program
1. Clone the repository (or download the code) and navigate to the directory where the code is saved.
2. Compile the program:
   ```bash
   g++ dictionary.cpp -o dictionary


Sample Commands
Once the program is running, you'll be presented with a menu:

Insert a new word: Add a new word along with its meaning to the dictionary.
Delete a word: Remove a word from the dictionary.
Update a word's meaning: Modify the meaning of a word already in the dictionary.
Display all words: Show all words in the dictionary in alphabetical order.
Search for a word: Look up a word to view its meaning.
Exit: Exit the program.


Example Usage
--- Personal Dictionary Menu ---
1. Insert a new word
2. Delete a word
3. Update a word's meaning
4. Display all words
5. Search for a word
6. Exit

Enter your choice: 1
Enter the word: hello
Enter the meaning: A greeting or expression of goodwill.

