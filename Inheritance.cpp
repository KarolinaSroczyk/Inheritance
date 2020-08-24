#include <iostream>
#include <string>
#include "Carp.h"
#include "Perch.h"

int main()
{
    Perch perch;
    Carp carp;

    Fish *f1 = &perch;
    Fish *f2 = &carp;

    f1->ffood("other fish");
    f1->showlenght(0.6);
    f2->ffood("corn");
    f2->showlenght(1.2);

    perch.display();
    carp.display();


    return 0;

}