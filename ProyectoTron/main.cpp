#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

int main() {

	sf::RenderWindow window(sf::VideoMode(500, 500), "Tron");

	while (window.isOpen()) {

		sf::Event evento;

		sf::Texture background;
		sf::Sprite backgroundImage;
		if (!background.loadFromFile(""))
			std::cout << "Error: Could not display image" << std::endl;
		backgroundImage.setTexture(background);

		sf::Font font;
		if (!font.loadFromFile(""))
			std::cout << "Can't find the font file" << std::endl;

		sf::Texture exitButton;
		sf::Sprite exitButtonImage;
		if (!exitButton.loadFromFile(""))
			std::cout << "Can't find the image" << std::endl;
		exitButtonImage.setPosition(50.0f, 400.0f);
		exitButtonImage.setTexture(exitButton);

		sf::Text startText;
		startText.setFont(font);
		startText.setStyle(sf::Text::Bold);
		startText.setString("Hola Mundo!");
		startText.setFillColor(sf::Color::White);
		startText.setCharacterSize(14);
		startText.setPosition(50.0f, 50.0f);

		while (window.pollEvent(evento)) {

			switch (evento.type) {

			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::MouseMoved:
			{

				sf::Vector2i mousePos = sf::Mouse::getPosition(window);
				sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));

				if (exitButtonImage.getGlobalBounds().contains(mousePosF)) {

					exitButtonImage.setColor(sf::Color(250, 20, 20));

				}
				else {

					exitButtonImage.setColor(sf::Color(255, 255, 255));

				}

			}
			break;

			case sf::Event::MouseButtonPressed:
			{

				sf::Vector2i mousePos = sf::Mouse::getPosition(window);
				sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
				if (exitButtonImage.getGlobalBounds().contains(mousePosF))
					window.close();

			}
			break;
			}
				
		}

		window.draw(backgroundImage);
		window.draw(exitButtonImage);
		window.draw(startText);
		window.display();

	}

	return 0;

}