#include <iostream>
#include "bibl.h"

int main()
{
    char Board[11][11];
    CellBOARD(Board);
    char FiguresP[5];
    while(true){
        std::cout << "Введите координату клетки нужной фигуры и координату клетки 'назначения'(пример: E2-E5): " << std::endl;
        for(int i = 0; i < 5; ++i)
            std::cin >> FiguresP[i];
        Move(Board, FiguresP);
    }
    return 0;
}
