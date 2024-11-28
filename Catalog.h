#include <vector>
#include <memory>
#include <algorithm>

template <typename T>
class Catalog {
public:
    void addItem(const T& item) {
        items.push_back(item);
    }

    // USE TEMPLATED TYPE FOR SORT FUNCTION INSTEAD OF AUTO
    template <typename Compare>
    void sortItems(Compare comp) {
        std::sort(items.begin(), items.end(), comp);
    }

    void displayAll() const {
        for (const auto& item : items) {
            item->displayDetails();
        }
    }

    template <typename Predicate>
    std::shared_ptr<Book> itemSearch(Predicate pred) {
        auto it = std::find_if(items.begin(), items.end(), pred);
        if (it != items.end()) {
            return *it;
        }
        return nullptr;
    }

private:
    std::vector<T> items;
};
