# Práctica: Herencia de Procesos con fork()

Proyecto enfocado en el funcionamiento de las llamadas al sistema fork(), wait() y exit() en lenguaje C para el control, clonación y comunicación entre procesos padre e hijos en sistemas operativos Linux.

---

##  Descripción

En esta práctica se analiza la estructura jerárquica de procesos y cómo modificar el flujo de ejecución mediante condiciones para generar distintas topologías de procesos:

1. `ejemplo1.c`: Creación básica de un proceso padre y un hijo.
2. `ejemplo2.c`: Estructura lineal de procesos (cadena de $N$ procesos).
3. `escalonado.c`: Árbol de procesos escalonado (triangular).
4. `flor.c`: Árbol de procesos en forma de flor (tallo, flores y pétalos).

---

## Requisitos

* Sistema Operativo: Linux (Ubuntu / Debian).
* Compilador: gcc
* Herramientas de inspección: pstree, pgrep, ps

---

##  Compilación

Cada archivo de código fuente en C (.c) debe compilarse con gcc indicando el nombre del ejecutable mediante la opción -o.

```bash
gcc ejemplo1.c -o ejemplo1
gcc ejemplo2.c -o ejemplo2
gcc escalonado.c -o escalonado
gcc flor.c -o flor
````
## Ejecución
```bash
./ejemplo1
````
