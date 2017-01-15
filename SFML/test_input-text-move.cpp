#include <SFML\Graphics.hpp>
#include <SFML\Graphics\Color.hpp>

int SZER = 800, DLUG = 600;
float SZER_SR = static_cast<float>(SZER) / 2, DLUG_SR = static_cast<float>(DLUG) / 2;
float User1_SZER = 12.5, User1_DLUG = 12.5;
using namespace std;

int main()
{
	sf::RenderWindow Intro_okno1(sf::VideoMode(SZER , DLUG), "[elvis] input test", sf::Style::Close);
	sf::RectangleShape User1(sf::Vector2f(User1_SZER, User1_DLUG));
	User1.setPosition(SZER_SR, DLUG_SR);
	sf::Font font;
	font.loadFromFile("pliki/HelveticaNeueLTPro-Th.ttf");
	sf::Text text("[elvis] pong", font);
	text.setCharacterSize(40);
	text.setFillColor(sf::Color::Black);
	text.setPosition(DLUG_SR , 20);
	User1.setOrigin(User1_SZER / 2, User1_DLUG / 2);
	while (Intro_okno1.isOpen())
	{
		sf::Event zdarzenie;
		while (Intro_okno1.pollEvent(zdarzenie))
		{
			if (zdarzenie.type == zdarzenie.Closed)
			{
				Intro_okno1.close();
			}
		}
		sf::Vector2i POS_MYS = sf::Mouse::getPosition(Intro_okno1);
		sf::Color kolor1(0, 0, 0);
		User1.setFillColor(kolor1);
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			User1.setPosition(static_cast<float>(POS_MYS.x), static_cast<float>(POS_MYS.y));
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
		{
			User1.setPosition(SZER_SR, DLUG_SR);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			User1.move(sf::Vector2f(0.0f, -0.05f));
			sf::Color kolor1(255, 0, 0);
			User1.setFillColor(kolor1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			User1.move(sf::Vector2f(-0.05f, 0.0f));
			sf::Color kolor1(128, 255, 50);
			User1.setFillColor(kolor1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			User1.move(sf::Vector2f(0.0f, 0.05f));
			sf::Color kolor1(0, 128, 128);
			User1.setFillColor(kolor1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			User1.move(sf::Vector2f(0.05f, 0.0f));
			sf::Color kolor1(0, 128, 255);
			User1.setFillColor(kolor1);
		}
		Intro_okno1.clear(sf::Color::White);
		Intro_okno1.draw(User1);
		Intro_okno1.draw(text);
		Intro_okno1.display();
	}
	return 0;
}
