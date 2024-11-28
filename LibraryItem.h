#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;
    std::string author;
    std::string ISBN;

public:
    LibraryItem(const std::string& title, const std::string& author, const std::string& ISBN)
        : title(title), author(author), ISBN(ISBN) {}

    virtual ~LibraryItem() = default;

    // PURE VIRTUAL FUNCTION TO DISPLAY ITEM DETAILS
    virtual void displayDetails() const = 0;

    // GETTERS
    const std::string& getTitle() const { return title; }
    const std::string& getAuthor() const { return author; }
    const std::string& getISBN() const { return ISBN; }
};

#endif
