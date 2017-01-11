
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");


    while (window.isOpen())
    {
        // witout this part its not displaying screen
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        sf::Font font;
        if (!font.loadFromFile( resourcePath() + "sansation.ttf"))
        {
            // error...
        }
        window.clear();
        
        // Create a text play
        sf::Text playTxt("press 1 to Play", font);
        playTxt.setCharacterSize(30);
        playTxt.setStyle(sf::Text::Bold);
        playTxt.setPosition(sf::Vector2f(220,250));
        window.draw(playTxt);
        
        sf::Text scoreTxt("press 2 to High Score", font);
        scoreTxt.setCharacterSize(30);
        scoreTxt.setStyle(sf::Text::Bold);
        scoreTxt.setPosition(sf::Vector2f(220,280));
        window.draw(scoreTxt);
        
        sf::Text exitTxt("press 3 to Exit", font);
        exitTxt.setCharacterSize(30);
        exitTxt.setStyle(sf::Text::Bold);
        exitTxt.setPosition(sf::Vector2f(220,310));
        window.draw(exitTxt);
        
        window.display();
// end of the first screen*************************************************************
 
// starts when user selecting
        
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)){
            window.clear();
            //window.close();
         

            
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)){
            window.clear();
            //window.close();
            
            
            
        }
        // if 3 is pressed its will close the program
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)){
            window.close();
        }
        
        
   //end of while**********************************************************************
    }

    return EXIT_SUCCESS;
}
