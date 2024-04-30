En este archivo de texto se va a explicar sobre como usar cada uno de los códigos guardados 
en el repositorio.

Implementación del algoritmo bfs:

* Primero, comenzando con el codigo bfs, este código tambien conocido como "La Búsqueda en Amplitud"
es un algoritmo fundamental para recorrer o buscar en un grafo. A diferencia de la búsqueda en profundidad (DFS), que explora lo más profundo posible
antes de retroceder, BFS explora todos los vecinos del nodo actual antes de avanzar al siguiente nivel.

Funcionamiento del algoritmo bfs:
este es una descripción de cómo funciona la búsqueda en amplitud en un grafo:

1. Comienza en un nodo inicial y lo marca como visitado.
2. Agrega todos los vecinos no visitados del nodo actual a una estructura de datos FIFO, como una cola.
3. Extrae un nodo de la cola y lo marca como visitado.
4. Agrega todos los vecinos no visitados de este nodo a la cola.
5. Repite los pasos 3 y 4 hasta que la cola esté vacía.


Implementación del algoritmo dfs:

* Segundo, hablando del código dfs, El algoritmo DFS (Búsqueda en Profundidad) es un método de búsqueda o recorrido de grafos que explora tan profundamente como sea
 posible por cada rama antes de retroceder. Aquí está cómo funciona:

Funcionamiento del algoritmo dfs:

1. Comenzando en un nodo inicial: Se selecciona un nodo inicial para comenzar la exploración. Este nodo puede ser cualquier nodo en el grafo.
2. Marcando el nodo como visitado: Se marca el nodo inicial como visitado para evitar recorrerlo nuevamente.
3. Explorando los vecinos no visitados: Desde el nodo actual, se elige un vecino no visitado. Se repite el proceso de exploración desde este nuevo nodo, marcándolo como visitado.
4. Retrocediendo cuando no hay más nodos no visitados: Si no hay más vecinos no visitados desde el nodo actual, el algoritmo retrocede al nodo anterior donde aún quedan vecinos por explorar.
5. Repitiendo el proceso: Se repite este proceso hasta que se hayan visitado todos los nodos alcanzables desde el nodo inicial.

Implementación de colas y pilas:


Principio LIFO (Last In, First Out): En una pila, el último elemento en ser agregado es el primero en ser eliminado. Es similar a una pila de platos, donde el último plato que se apila es el primero en ser retirado.
Operaciones básicas:
1. Push: Agrega un elemento a la parte superior de la pila.
2. Pop: Elimina el elemento superior de la pila.
3. Top (o Peek): Devuelve el elemento superior de la pila sin eliminarlo.
4. Empty: Verifica si la pila está vacía.
Estructura: Se puede implementar utilizando arreglos o listas enlazadas.


Colas (Queues):
Principio FIFO (First In, First Out): En una cola, el primer elemento en ser agregado es el primero en ser eliminado. 
Es similar a una fila en un supermercado, donde la primera persona en llegar es la primera en ser atendida.

Operaciones básicas:
1. Enqueue (o Push): Agrega un elemento al final de la cola.
2. Dequeue (o Pop): Elimina el primer elemento de la cola.
3. Front (o Peek): Devuelve el primer elemento de la cola sin eliminarlo.
4. Empty: Verifica si la cola está vacía.
Estructura: También se puede implementar utilizando arreglos o listas enlazadas.


Funcionamiento de colas y pilas:
* Pilas: Los elementos se agregan y eliminan desde la parte superior de la pila. 
Cuando se agrega un elemento (push), se coloca en la parte superior de la pila. Cuando se elimina un elemento (pop), se elimina el elemento superior de la pila.

*Colas: Los elementos se agregan al final de la cola y se eliminan desde el frente de la cola. Cuando se agrega un elemento (enqueue), se coloca al final de la cola. 
Cuando se elimina un elemento (dequeue), se elimina el primer elemento de la cola.

Implementación de grafos:


Los grafos son estructuras de datos que se utilizan para representar relaciones entre diferentes entidades. 
Un grafo consta de un conjunto de nodos (también llamados vértices) y un conjunto de aristas (también llamadas bordes) que conectan estos nodos entre sí. 
La forma en que estos nodos y aristas están interconectados puede variar según el tipo de grafo.

Componentes de un grafo:

* Nodos (vértices): Son entidades individuales en el grafo. Cada nodo puede representar un objeto, una ubicación, una persona o cualquier entidad que se esté modelando. 
Los nodos se representan típicamente como círculos en un diagrama.

* Aristas (bordes): Son las conexiones entre los nodos en el grafo. Pueden ser dirigidas o no dirigidas, lo que significa que pueden tener una dirección específica o no. 
Las aristas se representan como líneas que conectan los nodos en el diagrama.


Funcionamiento de un grafo:


1. Representación: Los grafos pueden representarse en forma de lista de adyacencia, matriz de adyacencia o mediante otras estructuras de datos especializadas.
La elección de la representación depende de la naturaleza del grafo y de las operaciones que se realizarán sobre él.

2. Operaciones básicas: Las operaciones comunes en grafos incluyen agregar nodos, agregar aristas, eliminar nodos, eliminar aristas, buscar nodos o aristas, 
y recorrer el grafo para realizar diferentes tareas, como búsqueda de caminos, detección de ciclos, clasificación topológica, etc.

3. Algoritmos: Los grafos son fundamentales en la teoría de grafos y se utilizan en una amplia variedad de algoritmos, como DFS (Búsqueda en Profundidad), BFS (Búsqueda en Amplitud), 
algoritmos de caminos más cortos (como Dijkstra y Bellman-Ford), algoritmos de árboles de expansión mínima (como Prim y Kruskal), y muchos más.
