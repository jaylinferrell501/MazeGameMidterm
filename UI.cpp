#include "UI.h"

#include <iostream>

void UI::PrintUi(Player* pPlayer)
{
    std::cout << " _______________________________________" << "\n";
    std::cout << "|                                       |" << "\n";
    std::cout << "| " << "HP:" << pPlayer->GetHealth() << " " << "Move Count:" << pPlayer->GetMoveCount() << " " << "Money:" << pPlayer->GetMoney() << " " << "Score:" << pPlayer->GetScore() << " |\n";
    std::cout << "|_______________________________________|" << "\n";
}
