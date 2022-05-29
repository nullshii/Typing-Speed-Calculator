#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class TypingSpeedCalculator {
private:
    string Paragraph;
    string TypedParagraph;
    char CurrentChar;

public:
    TypingSpeedCalculator();
    void DisplayParagraph();
};
TypingSpeedCalculator::TypingSpeedCalculator() {
    Paragraph = "Since March 8, 1990, Woman’s Day is being observed by SAARC (South Asian Association for Regional Cooperation) consisting of seven countries, namely, India, Pakistan, Nepal, Bhutan, Bangladesh, Sri Lanka, and the Maldives. The day was marked to focus on the problems of girl children in these countries. It is a pity that girl children especially in underdeveloped countries are victims of extreme negligence and dishonor. The birth of a girl child is looked upon by the parents as a cause of pity. They are deprived of proper nutrition, education, and economic facilities, and social status or honor. Superstitions and social and religious prejudices give rise to such distressing conditions. We must root out these prejudices and ensure a bright future for the girl children by giving them proper education. Moreover, woman’s rights must be established in social and economic fields.";
    TypedParagraph = "\0";
    CurrentChar = '\0';
}

void TypingSpeedCalculator::DisplayParagraph() {
    cout << Paragraph << "\n";
}
int main() {
    TypingSpeedCalculator Calculator;
    Calculator.DisplayParagraph();
    return 0;
}
