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
{    if (lines.empty()) {
        std::cout << "Вектор пуст(" << std::endl;
        return;
    }

    std::cout << "Вывод на экран" << std::endl;
    std::cout << "Всего строк: " << lines.size() << std::endl;
    std::cout << "_-_-_-_" << std::endl;

    for (size_t i = 0; i < lines.size(); ++i) {
        std::cout << i + 1 << ": " << lines[i] << std::endl;
    }

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
