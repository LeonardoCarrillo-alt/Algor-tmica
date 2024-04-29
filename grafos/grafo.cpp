#include<bits/stdc++.h>
using namespace std;

// Estructura para representar un grafo
class Grafo {
private:
    unordered_map<int, vector<int>> listaAdyacencia; // Lista de adyacencia del grafo
    bool dirigido; // Indica si el grafo es dirigido o no

public:
    // Constructor
    Grafo(bool esDirigido) {
        dirigido = esDirigido;
    }

    // Método para agregar un vértice al grafo
    void agregarVertice(int v) {
        if (listaAdyacencia.find(v) == listaAdyacencia.end()) {
            listaAdyacencia[v] = vector<int>(); // Inicializa una lista vacía de adyacencia para el vértice v
        } else {
            cout << "El vértice " << v << " ya existe en el grafo." << endl;
        }
    }

    // Método para agregar una arista al grafo
    void agregarArista(int origen, int destino) {
        // Se agrega el destino a la lista de adyacencia del origen
        listaAdyacencia[origen].push_back(destino);

        // Si el grafo no es dirigido, se agrega también una arista del destino al origen
        if (!dirigido) {
            listaAdyacencia[destino].push_back(origen);
        }
    }

    // Método para imprimir el grafo
    void imprimirGrafo() {
        for (auto par : listaAdyacencia) {
            cout << par.first << " --> ";
            for (int v : par.second) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

// Función principal
int main() {
    int numVertices, numAristas;
    bool esDirigido;

    cout << "Ingrese el número de vértices del grafo: ";
    cin >> numVertices;

    cout << "¿El grafo es dirigido? (0 para no, 1 para sí): ";
    cin >> esDirigido;

    Grafo grafo(esDirigido);

    // Agregar vértices al grafo
    for (int i = 0; i < numVertices; ++i) {
        grafo.agregarVertice(i);
    }

    cout << "Ingrese el número de aristas del grafo: ";
    cin >> numAristas;

    // Agregar aristas al grafo
    cout << "Ingrese las aristas en el formato \"origen destino\":\n";
    for (int i = 0; i < numAristas; ++i) {
        int origen, destino;
        cin >> origen >> destino;
        grafo.agregarArista(origen, destino);
    }

    cout << "\nRepresentación del grafo:" << endl;
    grafo.imprimirGrafo();

    return 0;
}