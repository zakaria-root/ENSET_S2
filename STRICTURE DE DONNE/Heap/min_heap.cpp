#include <iostream>
#include <vector>
using std::vector;

typedef double Objet;
class max_heap
{
private:
    int h_size{0};
    vector<Objet> h_vector = {-1};

public:
    max_heap() = default;
    max_heap(vector<Objet> &h_vector)
    {
        for (auto element : h_vector)
            insert(element);
    }
    void shiftUp(int);
    void insert(Objet);
    void extract_min_heap();
    void shiftDown(int);
    int root(int);
    int left(int);
    int right(int);
    Objet get_min_heap();
    bool is_empty();
    void display_heap();
    void sort_heap();
};
bool max_heap::is_empty()
{
    return h_size == 0;
}
int max_heap::root(int i)
{
    return i >> 1;
}
int max_heap::left(int i)
{
    return i << 1;
}
int max_heap::right(int i)
{
    return (i << 1) + 1;
}

void max_heap::shiftUp(int i)
{

    if (i == 1)
        return;
    if (h_vector[i] < h_vector[root(i)])
    {
        std::swap(h_vector[i], h_vector[root(i)]);
    }
    shiftUp(root(i));
}

void max_heap::insert(Objet value)
{
    h_vector.push_back(0);
    h_vector[++h_size] = value;
    shiftUp(h_size);
}

void max_heap::shiftDown(int i)
{
    if (i > h_size)
        return;
    int id_swap = i;
    if ((left(i) <= h_size) && (h_vector[i] > h_vector[left(i)]))
        id_swap = left(i);
    if ((right(i) <= h_size) && (h_vector[id_swap] > h_vector[right(i)]))
        id_swap = right(i);
    if (id_swap != i)
    {
        std::swap(h_vector[i], h_vector[id_swap]);
        shiftDown(id_swap);
    }
}

void max_heap::extract_min_heap()
{
    std::swap(h_vector[1], h_vector[h_size--]);
    shiftDown(1);
}

Objet max_heap::get_min_heap()
{
    return h_vector[1];
}

void max_heap::display_heap()
{

    for (auto element : h_vector)
    {
        if (element != -1)
        {
            std::cout << "-> " << element;
        }
    }

    std::cout << std::endl;
}
void max_heap::sort_heap()
{
    while (h_size >= 1)
        extract_min_heap();
}

int main(int argc, char const *argv[])
{
    vector<Objet> my_vector = {10, 20.2, 5., 140.1, 1.};
    
    max_heap heap(my_vector);
    if (heap.is_empty())
    {
        std::cout << "the heap is empty .." << std::endl;
    }
    else
    {
        std::cout << "the heap is not empty .." << std::endl;
    }
    std::cout << "--------- heap befor the sort --------" << std::endl;
    heap.display_heap();
    std::cout << "get the first max_heap = " << heap.get_min_heap() << std::endl;
    std::cout << "--------- heap after the sort --------" << std::endl;

    heap.sort_heap();
    heap.display_heap();

    return 0;
}
