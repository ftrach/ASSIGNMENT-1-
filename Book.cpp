#include "Book.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author, const std::string& ISBN, const std::string& genre, int year)
    : LibraryItem(title, author, ISBN), genre(genre), year(year) {}

void Book::displayDetails() const {
    std::cout << "Title: " << getTitle() << std::endl;
    std::cout << "Author: " << getAuthor() << std::endl;
    std::cout << "ISBN: " << getISBN() << std::endl;
    std::cout << "Genre: " << genre << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << std::endl; // ADD A BLANK LINE BETWEEN BOOKS
}
