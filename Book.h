#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>

class Book : public LibraryItem {
private:
    std::string genre;
    int year;

public:
    Book(const std::string& title, const std::string& author, const std::string& ISBN, const std::string& genre, int year);

    // OVERRIDDEN FUNCTION TO DISPLAY BOOK DETAILS
    void displayDetails() const override;
};

#endif
