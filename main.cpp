#include <iostream>
#include <string>
#include <fstream>
#include <vector>
void func1()
{
    std::ifstream file("C:/Users/User/Documents/C++/laba5/pchelci.txt");
    if (!file)
    {
        std::cout<< "didnt open" << std::endl;

    }
    else
    {
        std::vector <std::string> file_po_strocam;
        std::string stroca;
        while (!file.eof())
        {
            std::getline((file),stroca);
            file_po_strocam.push_back(stroca); //вектор строк файла песенки про пчёлок

        }
    }
}
void func2()
{

}
void func3()
{

}
int main()
{
    func1();
    func2();
    func3();
    std::cout << "Hello World!" << std::endl;
    return 0;
}
