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

void harmonise(Note &note)
{
    (note.get() < 8) ? note.set(0) : note.set(8);
}

double moyenne(Note *notes, int nb)
{
    double sum = 0;
    for (int index = 0; index < nb; index++)
    {
        sum += notes[index].get();
    }
    return sum / nb;
}
void appreciation(Note *notes, int nb)
{
    for (int index = 0; index < nb; index++)
        std::cout << "l'appreciation de la note " << notes[index].get() << " est : " << notes[index].apprecier() << std::endl;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
