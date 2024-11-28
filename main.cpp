#include <iostream>
#include "Book.h"
#include "Magazine.h"
#include "Catalog.h"
#include "Functors.h"

int main() {
    Catalog<std::shared_ptr<Book>> bookCatalog;

    // ADDING BOOKS TO THE CATALOG
    bookCatalog.addItem(std::make_shared<Book>("Kingdom of Dreams", "Robert Black", "123456789", "Fantasy", 2000));
    bookCatalog.addItem(std::make_shared<Book>("Apple Tree", "Emily Smith", "234567890", "Drama", 1990));
    bookCatalog.addItem(std::make_shared<Book>("Journey to the Stars", "Lisa White", "345678901", "Science Fiction", 2010));
    bookCatalog.addItem(std::make_shared<Book>("Moonlight Serenade", "Michael Brown", "987654321", "Romance", 2005));
    bookCatalog.addItem(std::make_shared<Book>("Zebra Tales", "John Doe", "543211234", "Adventure", 2015));

    // SORTING BOOKS BY TITLE
    bookCatalog.sortItems(SortByTitle());
    std::cout << "Books sorted by title:\n";
    bookCatalog.displayAll();

    // SEARCHING FOR A BOOK BY ISBN
    auto foundByISBN = bookCatalog.itemSearch([](const std::shared_ptr<Book>& book) {
        return book->getISBN() == "987654321";
    });
    if (foundByISBN) {
        std::cout << "Found book by ISBN:\n";
        foundByISBN->displayDetails();
    } else {
        std::cout << "Book not found by ISBN.\n";
    }

    // SEARCHING FOR A BOOK BY AUTHOR
    auto foundByAuthor = bookCatalog.itemSearch([](const std::shared_ptr<Book>& book) {
        return book->getAuthor() == "Robert Black";
    });
    if (foundByAuthor) {
        std::cout << "\nFound book by author:\n";
        foundByAuthor->displayDetails();
    } else {
        std::cout << "Book not found by author.\n";
    }

    return 0;
}
