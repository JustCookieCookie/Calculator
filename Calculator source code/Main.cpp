#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include "exprtk.hpp"
#include "Calculate.h"

std::vector<sf::RectangleShape> createButtons()
{
    std::vector<sf::RectangleShape> buttons;

    sf::RectangleShape button0({ 95, 95 });
    button0.setPosition({ 5, 548 });
    buttons.push_back(button0);

    sf::RectangleShape buttonDot({ 95, 95 });
    buttonDot.setPosition({ 105, 548 });
    buttons.push_back(buttonDot);

    sf::RectangleShape buttonEqual({ 195, 95 });
    buttonEqual.setPosition({ 205, 548 });
    buttonEqual.setFillColor(sf::Color{ 255, 193, 59 });
    buttons.push_back(buttonEqual);

    sf::RectangleShape button1({ 95, 95 });
    button1.setPosition({ 5, 448 });
    buttons.push_back(button1);

    sf::RectangleShape button2({ 95, 95 });
    button2.setPosition({ 105, 448 });
    buttons.push_back(button2);

    sf::RectangleShape button3({ 95, 95 });
    button3.setPosition({ 205, 448 });
    buttons.push_back(button3);

    sf::RectangleShape buttonPlus({ 95, 95 });
    buttonPlus.setPosition({ 305, 448 });
    buttons.push_back(buttonPlus);

    sf::RectangleShape button4({ 95, 95 });
    button4.setPosition({ 5, 348 });
    buttons.push_back(button4);

    sf::RectangleShape button5({ 95, 95 });
    button5.setPosition({ 105, 348 });
    buttons.push_back(button5);

    sf::RectangleShape button6({ 95, 95 });
    button6.setPosition({ 205, 348 });
    buttons.push_back(button6);

    sf::RectangleShape buttonMinus({ 95, 95 });
    buttonMinus.setPosition({ 305, 348 });
    buttons.push_back(buttonMinus);

    sf::RectangleShape button7({ 95, 95 });
    button7.setPosition({ 5, 248 });
    buttons.push_back(button7);

    sf::RectangleShape button8({ 95, 95 });
    button8.setPosition({ 105, 248 });
    buttons.push_back(button8);

    sf::RectangleShape button9({ 95, 95 });
    button9.setPosition({ 205, 248 });
    buttons.push_back(button9);

    sf::RectangleShape buttonMultiplication({ 95, 95 });
    buttonMultiplication.setPosition({ 305, 248 });
    buttons.push_back(buttonMultiplication);

    sf::RectangleShape buttonC({ 95, 95 });
    buttonC.setPosition({ 5, 148 });
    buttonC.setFillColor(sf::Color{ 255, 110, 64 });
    buttons.push_back(buttonC);

    sf::RectangleShape buttonDelete({ 95, 95 });
    buttonDelete.setPosition({ 105, 148 });
    buttonDelete.setFillColor(sf::Color{ 255, 110, 64 });
    buttons.push_back(buttonDelete);

    sf::RectangleShape percentButton({ 95, 95 });
    percentButton.setPosition({ 205, 148 });
    buttons.push_back(percentButton);

    sf::RectangleShape buttonDivision({ 95, 95 });
    buttonDivision.setPosition({ 305, 148 });
    buttons.push_back(buttonDivision);

    for (sf::RectangleShape& button : buttons)
    {
        if (button.getPosition() != buttonEqual.getPosition() &&
            button.getPosition() != buttonC.getPosition() && 
            button.getPosition() != buttonDelete.getPosition())
        {
            button.setFillColor(sf::Color{ 245, 240, 225 });
        }
    }

    return buttons;
}

std::vector<sf::Text> createText(const sf::Font& font)
{
    //Text
    std::vector<sf::Text> textButtons;

    sf::Text button0Text;
    button0Text.setString("0");
    button0Text.setPosition({ 33, 558 });
    textButtons.push_back(button0Text);

    sf::Text buttonDotText;
    buttonDotText.setString(".");
    buttonDotText.setPosition({ 143, 558 });
    textButtons.push_back(buttonDotText);

    sf::Text buttonEqualText;
    buttonEqualText.setString("=");
    buttonEqualText.setPosition({ 280, 554 });
    textButtons.push_back(buttonEqualText);

    sf::Text button1Text;
    button1Text.setString("1");
    button1Text.setPosition({ 39, 458 });
    textButtons.push_back(button1Text);

    sf::Text button2Text;
    button2Text.setString("2");
    button2Text.setPosition({ 133, 458 });
    textButtons.push_back(button2Text);

    sf::Text button3Text;
    button3Text.setString("3");
    button3Text.setPosition({ 233, 458 });
    textButtons.push_back(button3Text);

    sf::Text buttonPlusText;
    buttonPlusText.setString("+");
    buttonPlusText.setPosition({ 331, 453 });
    textButtons.push_back(buttonPlusText);

    sf::Text button4Text;
    button4Text.setString("4");
    button4Text.setPosition({ 32, 358 });
    textButtons.push_back(button4Text);

    sf::Text button5Text;
    button5Text.setString("5");
    button5Text.setPosition({ 133, 358 });
    textButtons.push_back(button5Text);

    sf::Text button6Text;
    button6Text.setString("6");
    button6Text.setPosition({ 233, 358 });
    textButtons.push_back(button6Text);

    sf::Text buttonMinusText;
    buttonMinusText.setString("-");
    buttonMinusText.setPosition({ 337, 358 });
    textButtons.push_back(buttonMinusText);

    sf::Text button7Text;
    button7Text.setString("7");
    button7Text.setPosition({ 36, 258 });
    textButtons.push_back(button7Text);

    sf::Text button8Text;
    button8Text.setString("8");
    button8Text.setPosition({ 133, 257 });
    textButtons.push_back(button8Text);

    sf::Text button9Text;
    button9Text.setString("9");
    button9Text.setPosition({ 233, 257 });
    textButtons.push_back(button9Text);

    sf::Text buttonMultiplicationText;
    buttonMultiplicationText.setString("*");
    buttonMultiplicationText.setPosition({ 336, 265 });
    textButtons.push_back(buttonMultiplicationText);

    sf::Text buttonCText;
    buttonCText.setString("C");
    buttonCText.setPosition({ 30, 157 });
    textButtons.push_back(buttonCText);

    sf::Text buttonDeleteText;
    buttonDeleteText.setString("CE");
    buttonDeleteText.setPosition({ 112, 158 });
    textButtons.push_back(buttonDeleteText);

    sf::Text percentButtonText;
    percentButtonText.setString("%");
    percentButtonText.setPosition({ 224, 156 });
    textButtons.push_back(percentButtonText);

    sf::Text buttonDivisionText;
    buttonDivisionText.setString("/");
    buttonDivisionText.setPosition({ 340, 156 });
    textButtons.push_back(buttonDivisionText);

    for (sf::Text& text : textButtons)
    {
        text.setFont(font);
        text.setCharacterSize(60);
        text.setFillColor(sf::Color::Black);
    }

    return textButtons;
}

int main()
{
    //Window
    sf::RenderWindow window(sf::VideoMode(405, 648), "Calculator", sf::Style::Close);

    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);

    //Buttons
    std::vector<sf::RectangleShape> buttons = createButtons();
    std::vector<std::string> buttonNames = { "button0", "buttonDot", "buttonEqual", "button1", "button2", "button3", "buttonPlus", "button4", "button5", "button6", "buttonMinus", "button7", "button8", "button9", "buttonMultiplication", "buttonC", "buttonDelete", "percentButton", "buttonDivision"};

    //Text on button and font
    sf::Font font;
    if (!font.loadFromFile("Inter-VariableFont_opsz,wght.ttf")) {}
    std::vector<sf::Text> textButtons = createText(font);

    //TextBox
    sf::RectangleShape textBox({ 395, 137 });
    textBox.setFillColor(sf::Color{ 42, 78, 110 });
    textBox.setPosition({ 5, 6 });

    //Text in TextBox
    std::string resultString = "";

    sf::Text resultText;
    resultText.setString("");
    resultText.setFont(font);
    resultText.setCharacterSize(60);
    resultText.setFillColor(sf::Color{ 245, 240, 225 });
    resultText.setOrigin(resultText.getLocalBounds().width, 0);
    resultText.setPosition({ 380, 36 });


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));

            for (size_t i = 0; i < buttons.size(); ++i)
            {
                if (buttons[i].getGlobalBounds().contains(mousePosF))
                {

                    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                        if (buttonNames[i] == "button0")
                        {
                            resultString += "0";
                        }
                        else if (buttonNames[i] == "buttonDot")
                        {
                            resultString += ".";
                        }
                        else if (buttonNames[i] == "buttonEqual")
                        {
                            resultString = calculateAnswer(resultString);
                        }
                        else if (buttonNames[i] == "button1")
                        {
                            resultString += "1";
                        }
                        else if (buttonNames[i] == "button2")
                        {
                            resultString += "2";
                        }
                        else if (buttonNames[i] == "button3")
                        {
                            resultString += "3";
                        }
                        else if (buttonNames[i] == "buttonPlus")
                        {
                            resultString += "+";
                        }
                        else if (buttonNames[i] == "button4")
                        {
                            resultString += "4";
                        }
                        else if (buttonNames[i] == "button5")
                        {
                            resultString += "5";
                        }
                        else if (buttonNames[i] == "button6")
                        {
                            resultString += "6";
                        }
                        else if (buttonNames[i] == "buttonMinus")
                        {
                            resultString += "-";
                        }
                        else if (buttonNames[i] == "button7")
                        {
                            resultString += "7";
                        }
                        else if (buttonNames[i] == "button8")
                        {
                            resultString += "8";
                        }
                        else if (buttonNames[i] == "button9")
                        {
                            resultString += "9";
                        }
                        else if (buttonNames[i] == "buttonMultiplication")
                        {
                            resultString += "*";
                        }
                        else if (buttonNames[i] == "buttonC")
                        {
                            resultString.erase();
                        }
                        else if (buttonNames[i] == "buttonDelete")
                        {
                            if (resultString.size() != 0)
                            {
                                resultString.pop_back();
                            }
                        }
                        else if (buttonNames[i] == "percentButton")
                        {
                            resultString += "%";
                        }
                        else if (buttonNames[i] == "buttonDivision")
                        {
                            resultString += "/";
                        }

                        resultText.setString(resultString);

                        std::this_thread::sleep_for(std::chrono::milliseconds(120));
                    }
                }
            }

        }

        //Render
        resultText.setOrigin(resultText.getLocalBounds().width, 0);

        window.clear(sf::Color{ 30, 61, 89 });

        for (sf::RectangleShape button : buttons)
        {
            window.draw(button);
        }

        for (sf::Text text : textButtons)
        {
            window.draw(text);
        }
        window.draw(textBox);
        window.draw(resultText);

        window.display();
    }
    return 0;
}