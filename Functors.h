#ifndef FUNCTORS_H
#define FUNCTORS_H

#include "Book.h"

// FUNCTOR TO SORT BOOKS BY TITLE
struct SortByTitle {
    bool operator()(const std::shared_ptr<Book>& b1, const std::shared_ptr<Book>& b2) const {
        return b1->getTitle() < b2->getTitle();
    }
};

// FUNCTOR TO SORT BOOKS BY AUTHOR
struct SortByAuthor {
    bool operator()(const std::shared_ptr<Book>& b1, const std::shared_ptr<Book>& b2) const {
        return b1->getAuthor() < b2->getAuthor();
    }
};

// FUNCTOR TO SORT BOOKS BY ISBN
struct SortByISBN {
    bool operator()(const std::shared_ptr<Book>& b1, const std::shared_ptr<Book>& b2) const {
        return b1->getISBN() < b2->getISBN();
    }
};

#endif
