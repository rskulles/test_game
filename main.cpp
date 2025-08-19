#include <SFML/Graphics.hpp>

int main()
{
    // initialization

    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(800, 600)), "TEST GAME", sf::Style::None);
    sf::Clock clock;
    float delta_time = 0;

    // end initialization

    while (window.isOpen())
    {
        // gets the time between each frame
        delta_time = clock.reset().asSeconds();

        // handle events
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
        // end handle events

        // update logic

        // end update logic

        window.clear(sf::Color::Cyan);
        // rendering code

        // end rendering code
        window.display();
    }
    return 0;
}