#include <iostream>
#include <vector>
#include <utility>

template <typename T>
class LinkedList {
public:
    T data;
    LinkedList<T>* next;

    // default constructor
    LinkedList()
    : data(new T), next(nullptr) {}

    // this should call the copy constructor of T
    LinkedList(T data)
    : data(data), next(nullptr) {}

};

template <typename T>
LinkedList<T>* insertionSort(LinkedList<T>* head) {
    LinkedList<T>* dummy = new LinkedList<T>;
    LinkedList<T>* current = head;

    while (current != nullptr) {
        // first, find where we insert current in the "new" list
        LinkedList<T>* prev = dummy;
        while (prev->next != nullptr && current->data > prev->data) {
            prev = prev->next;
        }

        // Now, insert current in between prev and prev->next,
        LinkedList<T>* next = current->next;
        current->next = prev->next;
        prev->next = current;

        // and also update current to be current->next
        current = next;
    }

    // finally, we can discard dummy
    return dummy->next;
}


template <typename T>
void insertionSort(std::vector<T>& head) {
    for (auto it = head.begin(); it < head.end(); it++) {
        for (auto j = it; j > head.begin(); j--) {
            if (*j > *(j-1)) break;
            std::swap(*j, *(j-1));
        }
    }
}

// array in book CLRS
// int32_t  inArray[]      = { 5,2,4,6,1,3 };
int main() {
    std::vector<int32_t> array = {5,2,4,6,1,3};
    insertionSort(array);
    for (const auto& i: array)
        std::cout << i << ' ';
    std::cout << '\n';

    return EXIT_SUCCESS;
}
