#include <iostream>

class Base
{
private:
    int privateX;

protected:
    int protectedX;

public:
    int publicX;
    Base() = default;
    void toString()
    {
        std::cout << "privateX" << privateX << std::endl;
        std::cout << "publicX" << publicX << std::endl;
        std::cout << "protectedX" << protectedX << std::endl;
    };
    void setPrivateX(int x)
    {
        privateX = x;
    }
    void setProtectedX(int x)
    {
        protectedX = x;
    };
};

class Derive : private Base
{

public:
    void toString()
    {
        setPrivateX(2); //* IT'S WORK IN THE PRIVET | PUBLIC | PROTECTED INHERITING ...

        std::cout << "privateX" << privateX << std::endl; //! COMPILER ERROR PRIVATE | PUBLIC | PROTECTED
        std::cout << "publicX" << publicX << std::endl;
        std::cout << "protectedX" << protectedX << std::endl;
    };
    Derive() = default;
    void setDerivePrivateX(int x){
        setPrivateX(x);
    }
};

class Derive2 : public Derive
{

public:
    void toString()
    {
        setPrivateX(2); //! COMPILER ERROR IN PRIVATE INHERITING 
        setProtectedX(2); //! COMPILER ERROR IN PRIVATE INHERITING 
        setPublicX(2); //! COMPILER ERROR IN PRIVATE INHERITING 

        setDerivePrivateX(2); //* IT'S WORK ....

        std::cout << "privateX" << privateX << std::endl;
        std::cout << "publicX" << publicX << std::endl;
        std::cout << "protectedX" << protectedX << std::endl;
    };
    Derive2() = default;
};

int main(int argc, char const *argv[])
{
    // Base b1;
    // b1.publicX = 0;
    // b1.protectedX = 0;
    // b1.privateX = 0;
    // Derive d1;
    // d1.publicX = 0;
    // d1.protectedX = 0;
    // d1.privateX = 0;

    // ** ------------ PUBLIC INHERITING  --------------------
    // Base b1;
    // b1.publicX = 0;
    // b1.protectedX = 0;
    // b1.privateX = 0;

    // Derive d1;
    // d1.publicX = 0;  //!CONPILER ERROR
    // d1.protectedX = 0;
    // d1.privateX = 0;

    // ** ------------ PROTECTED INHERITING  --------------------

    // Base b1;
    // b1.publicX = 0;
    // b1.protectedX = 0;
    // b1.privateX = 0;

    // Derive d1;
    // d1.publicX = 0;  //!CONPILER ERROR 
    // d1.protectedX = 0;
    // d1.privateX = 0;

    // ** ------------ PRIVATE INHERITING  --------------------

    return 0;
}
