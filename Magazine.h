#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "LibraryItem.h"
#include <string>
#include <iostream>

class Magazine : public LibraryItem {
public:
    Magazine(const std::string& title, const std::string& author, const std::string& ISBN)
        : LibraryItem(title, author, ISBN) {}

    // OVERRIDDEN FUNCTION TO DISPLAY MAGAZINE DETAILS
    void displayDetails() const override {
        std::cout << "Magazine Title: " << getTitle() << std::endl;
        std::cout << "Author: " << getAuthor() << std::endl;
        std::cout << "ISBN: " << getISBN() << std::endl;
    }
};

#endif
