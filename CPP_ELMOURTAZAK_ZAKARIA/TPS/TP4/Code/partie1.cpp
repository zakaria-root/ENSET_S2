#include <iostream>

class Note
{
private:
    double value;

public:
    Note() : value(0){};
    void input();
    void print();
    void set(double);
    double get();
    std::string apprecier();
};
void Note::input()
{
    do
    {
        std::cout << "enter une valeur entre 0 20 : ";
        std::cin >> value;
    } while (value > 20 || value < 0);
}
void Note::print()
{
    std::cout << "value is : " << value << std::endl;
}

void Note::set(double value)
{
    this->value = value;
};
double Note::get()
{
    return value;
};
std::string Note::apprecier()
{
    if (value >= 16)
    {
        return "tres bien";
    }
    else if (value >= 14)
    {
        return "bien";
    }
    else if (value >= 12)
    {
        return "assai bien";
    }
    else if (value >= 10)
    {
        return "passable";
    }
    else
    {
        return "rattraper";
    };
}
main(int argc, char const *argv[])
{
    Note note;
    note.input();
    note.print();
    std::cout << "la preciation de la note " << note.get() << " est : " << note.apprecier() << std::endl;
    double n = 16;
    note.set(n);
    std::cout << "la preciation de la note " << note.get() << " est : " << note.apprecier() << std::endl;
}
