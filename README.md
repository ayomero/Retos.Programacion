# Retos de Programación en C (Introductorio)

¡Bienvenido al repositorio de **Retos de Programación en C**! La finalidad de este proyecto es recopilar una serie de ejercicios prácticos diseñados especialmente para personas que se están iniciando en el lenguaje C. Aquí encontrarás desafíos que te ayudarán a comprender y dominar los fundamentos esenciales de la programación estructurada.

---

## 🛠️ Requisitos de Software

Para poder trabajar con los retos de este repositorio, necesitarás instalar las siguientes herramientas en tu equipo:

### 1. Visual Studio Community Edition
Es un entorno de desarrollo integrado (IDE) robusto y gratuito para estudiantes y desarrolladores independientes.
* **Descarga:** Visita la página oficial de [Visual Studio Community](https://microsoft.com).
* **Instalación Importante:** Durante el proceso de instalación, asegúrate de marcar la casilla de la carga de trabajo llamada **"Desarrollo de escritorio con C++"**. Esto instalará automáticamente el compilador `MSVC` (Microsoft Visual C++), el cual es totalmente compatible y necesario para compilar y ejecutar tus archivos de código fuente en C (`.c`).

### 2. Git y Cuenta de GitHub
* Descarga e instala Git desde [git-scm.com](https://git-scm.com).
* Regístrate en [GitHub](https://github.com) si aún no tienes una cuenta.

---

## 🚀 Cómo Comenzar a Trabajar con GitHub

Sigue estos pasos para clonar el repositorio, trabajar localmente y subir tus soluciones:

1. **Configurar Git por primera vez (si no lo has hecho):**
   Abre tu terminal (o Git Bash) y escribe:
   ```bash
   git config --global user.name "Tu Nombre"
   git config --global user.email "tu-correo@example.com"
   ```

2. **Clonar el repositorio:**
   Copia la URL de este repositorio y clónalo en tu computadora:
   ```bash
   git clone https://github.comtu-usuario/tu-repositorio.git
   cd tu-repositorio
   ```

3. **Abrir el proyecto en Visual Studio:**
   * Abre Visual Studio.
   * Selecciona **"Abrir una carpeta"** (Open a folder).
   * Elige la carpeta raíz del repositorio clonado.

4. **Enviar tus cambios a GitHub:**
   Una vez que resuelvas un reto, guarda tus archivos y ejecuta en la terminal:
   ```bash
   git add .
   git commit -m "Solución al reto XX"
   git push origin main
   ```

---

## 📂 Estructura del Proyecto

El repositorio mantiene una organización modular. Cada desafío se encuentra dentro de su propia carpeta con un enunciado descriptivo y el archivo de código correspondiente:

```text
📂 tu-repositorio/
├── 📄 .gitignore             # Archivo para ignorar temporales y binarios de Visual Studio (.vs, /out, .exe)
├── 📄 README.md              # Guía principal del repositorio (este archivo)
└── 📂 retos/
    ├── 📂 reto-01/
    │   ├── 📄 README.md      # Explicación detallada del Reto 01
    │   └── 📄 main.c         # Código fuente con la solución
    ├── 📂 reto-02/
    │   ├── 📄 README.md
    │   └── 📄 main.c
    └── ...
```

---

## 🏆 Lista de Retos (Primeros 10 Desafíos)

A continuación, se presentan los primeros 10 retos sugeridos, organizados de forma progresiva según su dificultad y los conceptos que refuerzan:

| # | Reto | Descripción | Conceptos Clave |
|---|---|---|---|
| **01** | ¡Hola Mundo! | El clásico programa inicial para verificar que el entorno de desarrollo y el compilador funcionan correctamente. | `printf`, Estructura básica |
| **02** | Calculadora Básica | Solicitar dos números al usuario y mostrar el resultado de la suma, resta, multiplicación y división. | Variables, `scanf`, Operadores aritméticos |
| **03** | Par o Impar | Determinar si un número entero ingresado por el usuario es par o impar. | Condicionales (`if-else`), Operador módulo (`%`) |
| **04** | Tabla de Multiplicar | Solicitar un número e imprimir su tabla de multiplicar del 1 al 10. | Bucles (`for` o `while`), Formateo de texto |
| **05** | Factorial de un Número | Calcular el factorial de un número entero positivo proporcionado por el usuario. | Bucles, Acumuladores, Desbordamiento de tipos |
| **06** | Mayor de Tres Números | Leer tres números enteros y determinar de forma lógica cuál de ellos es el mayor. | Condicionales anidados, Operadores lógicos (`&&`) |
| **07** | Suma de un Arreglo | Crear un programa que almacene 5 números enteros en un arreglo y calcule la suma de todos sus elementos. | Arreglos (Arrays), Inicialización, Bucles |
| **08** | Contador de Vocales | Solicitar una cadena de texto (palabra) y contar cuántas vocales contiene. | Cadenas de caracteres (`strings`), Bucles, `switch-case` |
| **09** | Intercambio con Punteros | Crear una función que reciba dos variables por referencia usando punteros e intercambie sus valores. | Punteros, Direcciones de memoria (`&`), Desreferenciación (`*`) |
| **10** | Registro de Estudiante | Definir una estructura que guarde el nombre, edad y promedio de un alumno, y mostrar la información en pantalla. | Estructuras (`struct`), Tipos de datos personalizados |

---

¡Mucho éxito en tu camino aprendiendo C! La constancia es la clave para dominar la programación.
