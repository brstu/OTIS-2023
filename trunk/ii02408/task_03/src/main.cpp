#include <iostream>
#include <vector>
#include <map>
#include <SFML/Graphics.hpp>

sf::RenderWindow window;
sf::Font font;
sf::Text mainLabel;
sf::VertexArray vertices(sf::Points);
std::map<int, sf::Vector2f> vertexCoords;
std::vector<sf::CircleShape> ovals;
std::map<int, std::string> cordText;
int idText = 0;
int i = 0;
int edgeCount = 0;
std::vector<int> edges;
std::map<int, std::string> cordEdge;

void drawVertex() {
    mainLabel.setString("Вы выбрали рисование вершин, нажмите на свободное место для рисования вершины");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            sf::CircleShape vertex(15);
            vertex.setFillColor(sf::Color::Red);
            vertex.setPosition(x - 15, y - 15);
            vertices.append(vertex);
            vertexCoords[i] = sf::Vector2f(x, y);
            i++;
        }
    });
}

void drawEdge() {
    mainLabel.setString("Вы выбрали рисование ребер, нажмите на вершину для рисования ребра");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            // TODO: Implement drawing edges
        }
    });
}

void deleteVertex() {
    mainLabel.setString("Вы выбрали удаление вершины или ребра, нажмите на вершину или ребро для удаления");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            // TODO: Implement vertex or edge deletion
        }
    });
}

void renameVertex() {
    mainLabel.setString("Вы выбрали переименование вершины, нажмите на вершину для переименования");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            // TODO: Implement vertex renaming
        }
    });
}

void changeColor() {
    mainLabel.setString("Вы выбрали изменение цвета вершины, нажмите на вершину для изменения её цвета");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            // TODO: Implement changing vertex color
        }
    });
}

void changeTextColor() {
    mainLabel.setString("Вы выбрали изменение цвета текста, нажмите на вершину для изменения цвета её текста");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            // TODO: Implement changing text color
        }
    });
}

void changeEdgeColor() {
    mainLabel.setString("Вы выбрали изменение цвета ребер, нажмите на ребро для изменения его цвета");
    window.unbind(sf::Mouse::Left);
    window.bind(sf::Mouse::Left, [](sf::Event event) {
        if (event.type == sf::Event::MouseButtonPressed) {
            float x = event.mouseButton.x;
            float y = event.mouseButton.y;
            // TODO: Implement changing edge color
        }
    });
}

void deleteCanvas(sf::Event event) {
    for (auto it = ovals.begin(); it != ovals.end(); ++it) {
        sf::CircleShape& oval = *it;
        if (oval.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y))) {
            // TODO: Implement vertex deletion
            ovals.erase(it);
            break;
        }
    }
    // TODO: Implement edge deletion
}

int main() {
    window.create(sf::VideoMode(800, 600), "Graph Editor");
    font.loadFromFile("arial.ttf");

    mainLabel.setFont(font);
    mainLabel.setCharacterSize(20);
    mainLabel.setPosition(10, 10);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Num1) {
                    drawVertex();
                } else if (event.key.code == sf::Keyboard::Num2) {
                    drawEdge();
                } else if (event.key.code == sf::Keyboard::Num3) {
                    deleteVertex();
                } else if (event.key.code == sf::Keyboard::Num4) {
                    renameVertex();
                } else if (event.key.code == sf::Keyboard::Num5) {
                    changeColor();
                } else if (event.key.code == sf::Keyboard::Num6) {
                    changeTextColor();
                } else if (event.key.code == sf::Keyboard::Num7) {
                    changeEdgeColor();
                }
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                deleteCanvas(event);
            }
        }

        window.clear();
        window.draw(mainLabel);
        window.draw(vertices);
        for (const auto& oval : ovals) {
            window.draw(oval);
        }
        window.display();
    }

    return 0;
}