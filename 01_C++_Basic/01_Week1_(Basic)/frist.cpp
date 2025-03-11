#include <iostream>
#include <string>

int main()
{
    std::string t="hello";
    std::cout << t << std::endl;
    int x,y;
    std::cout << "entre the number or room :" <<std::endl;
    std::cin>>x;
    std::cin.clear();
    fflush(stdin);
    std::cout << "entre the number or days ::" << std::endl;
    std::cin>>y;
    std::cout << "the total cost ::" <<(x*y*300+(x*y*30))<< std::endl;
    std::cout << "the cost without tax:" <<(x*y*300)<< std::endl;
    std::cout << "the tax cost ::" <<(x*y*30)<< std::endl;
    std::cout << "size ot int is :" <<sizeof(int)<< " Bytes"<<std::endl;
    std::cout << "size ot int short is :" <<sizeof(int short)<<" Bytes"<< std::endl;
    std::cout << "size ot int long is :" <<sizeof(int long)<<" Bytes"<< std::endl;
    std::cout << "size ot int long long is :" <<sizeof(int long long)<<" Bytes"<< std::endl;
    std::cout << "size ot bool is :" <<sizeof(bool)<< " Bytes"<<std::endl;
    std::cout << "size ot float is :" <<sizeof(float)<< " Bytes"<<std::endl;
    std::cout << "size ot double is :" <<sizeof(double)<<" Bytes"<< std::endl;
    std::cout << "size ot bool is :" <<sizeof(bool)<< " Bytes"<<std::endl;
    std::cin>>x;
    std::cin.clear();
    fflush(stdin);
    std::cout << "Wow! That's my favourite number too " <<x<< std::endl;
    std::cout << "entre:" << std::endl;
    std::cin>>y;
    std::cout << "x= " <<x<<" y= " <<y<< std::endl;

    
    return 0;
}