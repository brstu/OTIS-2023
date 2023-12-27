// Include the Node header file
#include "basis/headers/Node.h"

// Include the utility library for std::move
#include <utility>

// Define the constructor for Node class in GraphType namespace
GraphType::Node::Node(std::string name) {
    // Initialize the name of the node
    this->_name = std::move(name);

    // Initialize the negative degree of the node
    this->_degNeg = 0;

    // Initialize the positive degree of the node
    this->_degPos = 0;

    // Initialize the degree of the node
    this->_deg = 0;

    // Initialize the Euclidean position of the node
    this->_euclidePos = QPointF(0, 0);
}

// Define the constructor for Node class in GraphType namespace with position
GraphType::Node::Node(std::string name, QPointF pos) {
    // Initialize the name of the node
    this->_name = std::move(name);

    // Initialize the negative degree of the node
    this->_degNeg = 0;

    // Initialize the positive degree of the node
    this->_degPos = 0;

    // Initialize the degree of the node
    this->_deg = 0;

    // Set the Euclidean position of the node
    this->_euclidePos = pos;
}
