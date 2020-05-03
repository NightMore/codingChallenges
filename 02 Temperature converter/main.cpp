#include <iostream>
#include <windows.h>

int main()
{
    int sel;
    double deg;
    double c;
    double f;
    double k;
    double r;

    std::cout<<"Temperature converter v1"
           "\n\nSelect units:"<<std::endl;
    std::cout<<
             "\t1: Celsius"
           "\n\t2: Fahrenheit"
           "\n\t3: Kelvin"
           "\n\t4: Rankine"

           "\n\nChoice: ";
    std::cin>>sel;
    std::cout<<"\nEnter degree: ";
    std::cin>>deg;
    std::cout<<"\n-----------------------------------------\n";
/*
        c = <formula>;
        f = <formula>;
        k = <formula>;
        r = <formula>;

        std::cout<<"Celsius:    "<< c <<" DegC"<<std::endl;
        std::cout<<"Fahrenheit: "<< f <<" DegF"<<std::endl;
        std::cout<<"Kelvin:     "<< k <<   " K"<<std::endl;
        std::cout<<"Rankine:    "<< r <<" DegR"<<std::endl;
*/
    switch(sel){
    case 1: //c
        f = (deg * 1.8) + 32;
        k = deg + 273.15;
        r = deg * 1.8 + 491.67;

        std::cout<<"Celsius:    "<<deg<<" DegC"<<std::endl;
        std::cout<<"Fahrenheit: "<< f <<" DegF"<<std::endl;
        std::cout<<"Kelvin:     "<< k <<   " K"<<std::endl;
        std::cout<<"Rankine:    "<< r <<" DegR"<<std::endl;
        break;
    case 2: //f
        c = (deg - 32) * 0.56;
        k = (deg - 32) * 0.56 + 273.15;
        r = deg + 459.67;

        std::cout<<"Celsius:    "<< c <<" DegC"<<std::endl;
        std::cout<<"Fahrenheit: "<<deg<<" DegF"<<std::endl;
        std::cout<<"Kelvin:     "<< k <<   " K"<<std::endl;
        std::cout<<"Rankine:    "<< r <<" DegR"<<std::endl;
        break;
    case 3: //k
        c = deg - 273.15;
        f = (deg - 273.15) * 1.8 + 32;
        r = deg / 0.56;

        std::cout<<"Celsius:    "<< c <<" DegC"<<std::endl;
        std::cout<<"Fahrenheit: "<< f <<" DegF"<<std::endl;
        std::cout<<"Kelvin:     "<<deg<<   " K"<<std::endl;
        std::cout<<"Rankine:    "<< r <<" DegR"<<std::endl;
        break;
    case 4: //r
        c = (deg - 491.67) * 0.56;
        f = deg - 459.67;
        k = deg * 0.56;

        std::cout<<"Celsius:    "<< c <<" DegC"<<std::endl;
        std::cout<<"Fahrenheit: "<< f <<" DegF"<<std::endl;
        std::cout<<"Kelvin:     "<< k <<   " K"<<std::endl;
        std::cout<<"Rankine:    "<<deg<<" DegR"<<std::endl;
        break;
    default:
        std::cout<<"Incorrect choice! :"<<sel<<std::endl;
        break;
    }
    system("pause");
    return 0;
}
