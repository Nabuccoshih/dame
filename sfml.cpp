#include "main.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(APP_W, APP_H, 32), "Jeux de Dames");
    window.setVerticalSyncEnabled(true);

    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        int app_pos_x = (SCR_W / 2) - (APP_W /2);
        int app_pos_y = (SCR_H / 2) - (APP_H /2);

        window.setPosition(sf::Vector2i(app_pos_x, app_pos_y));

        window.clear(sf::Color(255, 255, 212));

        
        
        for(int i = 0 ; i < 3 ; i++)
        {
            sf::RectangleShape carre(sf::Vector2f(60, 60));
            carre.setFillColor(sf::Color::Black);
            carre.setPosition(0, i*100);  

            window.draw(carre[i]);
        }






        /*window.draw(carre0);
        window.draw(carre1);
        window.draw(carre2);*/
        window.display();
    }

    return 0;
}