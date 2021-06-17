/* 
    dino.cpp
    Copyright (C) 2021  Daiwik Khandelwal

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(960, 625), "Dino");
    
    sf::Texture texture;
    if (!texture.loadFromFile("dino.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);
    
    sf::Music music;
    if (!music.openFromFile("music.ogg"))
        return EXIT_FAILURE;
    
    music.play();
    
    while (window.isOpen()) {
        
        sf::Event event;
        while (window.pollEvent(event)) {
            
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(sprite);
        window.display();
    }
    return EXIT_SUCCESS;
}
