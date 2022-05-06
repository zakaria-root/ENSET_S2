#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;

class String
{
private:
    char *string_ptr;
    long size;

public:
    String();
    String(const char *);
    String(const String &);
    String operator+(char *);
    String operator+(const String &);
    friend String operator+(char *str, const String &);
    String operator=(const char *);
    String operator=(const String &);
    bool operator==(char *);
    bool operator==(const String &);
    char &operator[](int);
    char *GetStringPtr();
    long GetStringLen();
    ~String();
};

String::String()
{
    string_ptr = new char[1];
    *string_ptr = '\0';
    size = 0;
}

String::String(const char *chaine)
{
    size = strlen(chaine);
    string_ptr = new char[size + 1];
    strcpy(string_ptr, chaine);
}

String::String(const String &chaine)
{
    size = strlen(chaine.string_ptr);
    string_ptr = new char[size + 1];
    strcpy(string_ptr, chaine.string_ptr);
}

String String::operator+(char *chaine)
{
    String Copie;
    long NewLen = (this->size + strlen(chaine));
    Copie.string_ptr = new char[NewLen + 1];
    Copie.size = NewLen;
    Copie.string_ptr[NewLen] = 0;
    strcpy(Copie.string_ptr, this->string_ptr);
    strcat(Copie.string_ptr, chaine);
    return Copie;
}

String String::operator+(const String &chaine)
{
    String Copie;
    long NewLen = (this->size + chaine.size);
    Copie.string_ptr = new char[NewLen + 1];
    Copie.size = NewLen;
    Copie.string_ptr[NewLen] = 0;
    strcpy(Copie.string_ptr, this->string_ptr);
    strcat(Copie.string_ptr, chaine.string_ptr);
    return Copie;
}

String operator+(char *str, const String &chaine)
{
    String Copie;
    long NewLen = (strlen(str) + chaine.size);
    Copie.string_ptr = new char[NewLen + 1];
    Copie.size = NewLen;
    strcpy(Copie.string_ptr, str);
    strcat(Copie.string_ptr, chaine.string_ptr);
    return Copie;
}

String String::operator=(const char *chaine)
{

    size = strlen(chaine) + 1;
    delete[] this->string_ptr;
    string_ptr = new char[size];
    strcpy(string_ptr, chaine);
    return *this;
}

String String::operator=(const String &chaine)
{

    size = chaine.size;
    delete[] this->string_ptr;
    string_ptr = new char[size];
    strcpy(string_ptr, chaine.string_ptr);
    return *this;
}

bool String::operator==(char *chaine)
{
    return strcmp(string_ptr, chaine) == 0;
}
bool String::operator==(const String &chaine)
{
    return strcmp(string_ptr, chaine.string_ptr) == 0;
}

char &String::operator[](int index)
{
    return string_ptr[index];
}

char *String::GetStringPtr()
{
    return string_ptr;
}

long String::GetStringLen()
{
    return size;
}

String::~String()
{
    delete[] string_ptr;
    string_ptr = NULL;
    size = 0;
}

int main(int argc, char *argv[])
{
    std::cout << "----------- TEST 1 ------------" << std::endl;
    std::cout << std::endl;
    String A1 = "hellow";
    String B1 = " World";
    A1 = A1 + B1 + " zakaria";
    printf("%s\n", A1.GetStringPtr());

    // TODO : FIN TEST 1

    std::cout << "\n----------- TEST 2 ------------" << std::endl;
    std::cout << std::endl;

    String A2;
    String B2 = "hellow";
    A2 = A2 + B2 + " zakaria";
    printf("%s\n", A2.GetStringPtr());

    // TODO : FIN TEST 2

    std::cout << "\n----------- TEST 3 ------------" << std::endl;
    std::cout << std::endl;

    String A3, D3;
    String B3 = "hellow";
    D3 = A3 = A3 + B3 + " zakaria";
    printf("%s\n", D3.GetStringPtr());

    // TODO : FIN TEST 3

    std::cout << "\n----------- TEST 4 ------------" << std::endl;
    std::cout << std::endl;

    String A4 = "helow ";
    String B4 = "in test 4";
    A4 = A4 + "with zakaria" + B4;
    printf("%s\n", A4.GetStringPtr());

    // TODO : FIN TEST 4

    std::cout << "\n----------- TEST 5 ------------" << std::endl;
    std::cout << std::endl;

    String A5 = "helow ";
    String B5 = "zakaria";
    (A5 == B5) ? (printf("%s et %s sont égaux ...\n", A5.GetStringPtr(), B5.GetStringPtr())) : (printf("%s et %s ne sont pas égaux ...\n", A5.GetStringPtr(), B5.GetStringPtr()));

    A5 = "zakaria";
    B5 = "zakaria";
    (A5 == B5) ? (printf("%s et %s sont égaux ...\n", A5.GetStringPtr(), B5.GetStringPtr())) : (printf("%s et %s ne sont pas égaux ...\n", A5.GetStringPtr(), B5.GetStringPtr()));

    // TODO : FIN TEST 5

    std::cout << "\n----------- TEST 6 ------------" << std::endl;
    std::cout << std::endl;
    const char *chaine = "zakaria";

    String A6 = "helow ";
    (A6 == chaine) ? (printf("%s et %s sont égaux ...\n", A6.GetStringPtr(), chaine)) : (printf("%s et %s ne sont pas égaux ...\n", A6.GetStringPtr(), chaine));

    A6 = "zakaria";
    (A6 == chaine) ? (printf("%s et %s sont égaux ...\n", A6.GetStringPtr(), chaine)) : (printf("%s et %s ne sont pas égaux ...\n", A6.GetStringPtr(), chaine));

    // TODO : FIN TEST 6

    std::cout << "\n----------- TEST 6 ------------" << std::endl;
    std::cout << std::endl;
    const int INDEX = 2;
    String A7 = "123456";
    std::cout << "caractaire a l'indice " << INDEX + 1 << " de la chaine << " << A7.GetStringPtr() << " >> est " << A7[INDEX] << std::endl;

    // TODO : FIN TEST 7

    std::cout
        << "\nFIN DE MAIN" << std::endl;
    getchar();
}
