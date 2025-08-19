#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(800, 600)), "TEST GAME", sf::Style::None);

    while (window.isOpen())
    {

        while (const auto e = window.pollEvent())
        {
            if (e->is<sf::Event::Closed>())
            {
                window.close();
            }
            else if (const auto kp = e->getIf<sf::Event::KeyPressed>())
            {
                if (kp->scancode == sf::Keyboard::Scancode::Escape)
                {
                    window.close();
                }
            }
        }

        window.clear(sf::Color::Cyan);
        window.display();
    }
    return 0;
}