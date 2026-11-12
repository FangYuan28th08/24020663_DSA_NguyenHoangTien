#include <iostream>
using namespace std;

const int MAX = 100;

struct MinHeap {
    int heap[MAX];
    int size;

    MinHeap() {
        size = 0;
    }

    // Them phan tu, day len tren neu nho hon cha
    bool insert(int x) {
        if (size == MAX) {
            cout << "Heap day!\n";
            return false;
        }

        int i = size;
        heap[size] = x;
        size++;

        while (i > 0 && heap[i] < heap[(i - 1) / 2]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
        return true;
    }

    // Lay phan tu nho nhat ra khoi Heap
    bool extractMin(int &minValue) {
        if (size == 0) {
            cout << "Heap rong!\n";
            return false;
        }

        minValue = heap[0];
        heap[0] = heap[size - 1];
        size--;

        heapify(0);
        return true;
    }

    // Dieu chinh Heap tu tren xuong duoi
    void heapify(int i) {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

    // Hien thi Heap
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap h;

    h.insert(10);
    h.insert(5);
    h.insert(20);
    h.insert(3);
    h.insert(8);

    cout << "Min Heap: ";
    h.display();

    int minValue;
    if (h.extractMin(minValue))
        cout << "Phan tu nho nhat: " << minValue << endl;

    cout << "Heap sau khi xoa: ";
    h.display();

    return 0;
}