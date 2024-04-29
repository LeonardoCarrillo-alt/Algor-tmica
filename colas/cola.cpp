#include <iostream>

using namespace std;

// Nodo para almacenar elementos y enlaces
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Implementación de una cola
class Queue {
private:
    Node* frontPtr; // Puntero al frente de la cola
    Node* rearPtr; // Puntero al final de la cola

public:
    // Constructor
    Queue() : frontPtr(nullptr), rearPtr(nullptr) {}

    // Destructor
    ~Queue() {
        while (!isEmpty()) {//isempty sirve para verificar si una casilla de la cola esta vacia
            dequeue();
        }
    }

    // Agregar un elemento al final de la cola (enqueue)
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            frontPtr = rearPtr = newNode;
        } else {
            rearPtr->next = newNode;
            rearPtr = newNode;
        }
    }

    // Eliminar el elemento del frente de la cola (dequeue)
    void dequeue() {
        if (!isEmpty()) {
            Node* temp = frontPtr;
            frontPtr = frontPtr->next;
            delete temp;
            // Si la cola se vacía, asegurarse de que rearPtr sea nulo también
            if (frontPtr == nullptr) {
                rearPtr = nullptr;
            }
        }
    }

    // Devolver el elemento del frente de la cola (front)
    int front() {
        if (!isEmpty()) {
            return frontPtr->data;
        } else {
            cout << "Queue is empty!" << endl;
            return -1; // Valor sentinela para indicar una cola vacía
        }
    }

    // Verificar si la cola está vacía (isEmpty)
    bool isEmpty() {
        return frontPtr == nullptr;
    }
};

int main() {
    // Crear una cola
    Queue myQueue;

    // Agregar elementos a la cola
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Mostrar el elemento en el frente de la cola
    cout << "Front element of the queue: " << myQueue.front() << endl;

    // Eliminar elementos de la cola
    myQueue.dequeue();
    myQueue.dequeue();

    // Mostrar si la cola está vacía
    if (myQueue.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}