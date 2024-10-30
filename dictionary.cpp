#include <iostream>
#include <string>
using namespace std;

// Node structure for each word in the dictionary
struct Node {
    string word;
    string meaning;
    Node* next;
};

// Function to insert a new word in alphabetical order
void insertWord(Node*& head) {
    Node* newNode = new Node();
    cout << "Enter the word: ";
    getline(cin, newNode->word);

    cout << "Enter the meaning: ";
    getline(cin, newNode->meaning);
    newNode->next = nullptr;

    // Insert in alphabetical order
    if (!head || newNode->word < head->word) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && current->next->word < newNode->word) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    cout << "Word inserted successfully!\n";
}

// Function to delete a word from the dictionary
void deleteWord(Node*& head) {
    if (!head) {
        cout << "Dictionary is empty!\n";
        return;
    }

    string target;
    cout << "Enter the word to delete: ";
    getline(cin, target);

    Node *current = head, *previous = nullptr;

    // Find the word to delete
    while (current && current->word != target) {
        previous = current;
        current = current->next;
    }

    if (!current) {
        cout << "Word not found!\n";
    } else {
        if (!previous) {
            head = current->next;
        } else {
            previous->next = current->next;
        }
        delete current;
        cout << "Word deleted successfully!\n";
    }
}

// Function to update the meaning of a word
void updateMeaning(Node* head) {
    if (!head) {
        cout << "Dictionary is empty!\n";
        return;
    }

    string target;
    cout << "Enter the word to update: ";
    getline(cin, target);

    Node* current = head;

    // Find the word to update
    while (current && current->word != target) {
        current = current->next;
    }

    if (!current) {
        cout << "Word not found!\n";
    } else {
        cout << "Enter the new meaning: ";
        getline(cin, current->meaning);
        cout << "Meaning updated successfully!\n";
    }
}

// Function to display all words in the dictionary
void displayDictionary(Node* head) {
    if (!head) {
        cout << "Dictionary is empty!\n";
        return;
    }

    cout << "\n--- Dictionary Contents ---\n";
    Node* current = head;
    while (current) {
        cout << "Word: " << current->word << "\nMeaning: " << current->meaning << "\n\n";
        current = current->next;
    }
}

// Function to search for a word in the dictionary
void searchWord(Node* head) {
    if (!head) {
        cout << "Dictionary is empty!\n";
        return;
    }

    string target;
    cout << "Enter the word to search for: ";
    getline(cin, target);

    Node* current = head;

    // Find the word
    while (current && current->word != target) {
        current = current->next;
    }

    if (!current) {
        cout << "Word not found!\n";
    } else {
        cout << "Word: " << current->word << "\nMeaning: " << current->meaning << "\n";
    }
}

// Function to display the menu
void displayMenu() {
    cout << "\n--- Personal Dictionary Menu ---\n";
    cout << "1. Insert a new word\n";
    cout << "2. Delete a word\n";
    cout << "3. Update a word's meaning\n";
    cout << "4. Display all words\n";
    cout << "5. Search for a word\n";
    cout << "6. Exit\n";
}

int main() {
    Node* dictionary = nullptr;
    int choice;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character after choice input

        switch (choice) {
            case 1:
                insertWord(dictionary);
                break;
            case 2:
                deleteWord(dictionary);
                break;
            case 3:
                updateMeaning(dictionary);
                break;
            case 4:
                displayDictionary(dictionary);
                break;
            case 5:
                searchWord(dictionary);
                break;
            case 6:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
