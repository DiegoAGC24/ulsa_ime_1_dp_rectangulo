# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)


El programa pide el ancho y el alto de un rectángulo y calcula su área y su perímetro.
Las medidas deben ser mayores que 0. Si el usuario introduce una medida inválida, el programa vuelve a pedirla.
Puede servir para calcular las dimensiones de una placa, una lámina o alguna pieza rectangular en mecatrónica.

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. Ancho: tipo double, en centímetros. Representa el ancho del rectángulo.
2. Alto: tipo double, en centímetros. Representa la altura del rectángulo.

**Salidas:**
1. Área: tipo double, en centímetros cuadrados (cm²). Representa la superficie del rectángulo.
2. Perímetro: tipo double, en centímetros (cm). Representa la distancia alrededor del rectángulo.

**Fórmulas** (área y perímetro):
Área = ancho × alto
Perímetro = 2 × (ancho + alto)

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- El ancho debe ser mayor que 0.
- El alto debe ser mayor que 0.

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
El programa vuelve a pedir la medida hasta que sea mayor que 0, porque una medida de un rectángulo no puede ser 0 o negativa.

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
leerDecimal revisa que el usuario escriba un número válido y acepta números decimales. Mi programa revisa que ese número sea mayor que 0. Por ejemplo, abc lo detecta leerDecimal, mientras que -3 es detectado por mi programa como una medida inválida.

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
Al salir del ciclo, es seguro que ancho es un número válido y mayor que 0. Por eso se puede utilizar para realizar los cálculos.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | 5 | 3 | 15 cm² | 16 cm |
| 2 (cuadrado) | 4 | 4 | 16 cm² | 16 cm |
| 3 (con decimales) | 2.5 | 4 | 10 cm² | 13 cm |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** Sí, hice algunos ajustes para asegurarme de que las medidas inválidas se volvieran a pedir antes de realizar los cálculos.
**¿Cuántas versiones de mi receta escribí hasta la final?** 2 versiones.

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
Area y perimetro de un rectangulo 
Ancho en cm: 5 
Alto en cm: 3 
Area: 15 cm2 
Perimetro: 16 cm
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
El resultado fue 13. Esto ocurre porque C++ realiza primero la multiplicación, por lo que interpreta la expresión como (2 * ancho) + alto. Para obtener el perímetro correcto se necesitan paréntesis: 2 * (ancho + alto).

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
El programa mostró un área de -12 y un perímetro de -2. No tiene sentido físicamente, porque una medida no puede ser negativa. Esto demuestra por qué es necesario validar los datos antes de realizar los cálculos.

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
Con int, el valor decimal 2.5 pierde la parte decimal al almacenarse en una variable entera. Con 100000 × 100000 se puede producir un desbordamiento (overflow) porque el resultado es demasiado grande para un int. Por eso se debe utilizar double.

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | Área 15, perímetro 16 | Sí |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | Área 16, perímetro 16 | Sí |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | Área 10, perímetro 13 | Sí |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | Área 0.01, perímetro 0.4 | Sí |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | vuelve a pedir el ancho | Sí |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | vuelve a pedir el alto | Sí |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | vuelve a pedir el número | Sí |
| Caso propio 1 | 10 | 2 | Área 20, perímetro 24 | Área 20, perímetro 24 | Sí |
| Caso propio 2 | 7.5 | 2 | Área 15, perímetro 19 | Área 15, perímetro 19 | Sí |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | El cálculo del perímetro podía hacerse 
incorrectamente por la precedencia de operadores. | Agregué paréntesis en 2 * (ancho + alto). | Sí |
| 2 | El programa aceptaba medidas negativas. | Agregué una validación para que ancho y alto fueran mayores que 0. | Sí |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ¿Cuál es la diferencia entre usar while y do-while para validar una medida? | Revisé cómo funcionan ambos ciclos y observé que do-while ejecuta el bloque al menos una vez. |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendí a trabajar con variables double, ciclos de validación, precedencia de operadores y a utilizar una función como leerDecimal. También aprendí que primero puedo diseñar una receta y después convertirla en código.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Intentaría hacer una receta más clara desde el principio y revisar las condiciones antes de comenzar a programar.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo más difícil fue pensar cómo validar los datos y decidir cuándo volver a pedirlos. Lo resolví haciendo una receta paso a paso y probándola con datos válidos e inválidos.

**¿Qué pregunta me quedó sin responder?**
Me quedó la duda de cuál es la mejor situación para utilizar while y cuál para utilizar do-while en programas más grandes.

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
Fue un poco más difícil porque tenía que pensar todos los pasos antes de escribir el código. La próxima vez intentaría hacer primero la receta y probarla con varios casos antes de comenzar a programar.

## 13. Lista de verificación antes de entregar (Fase 5)

- [ x] Llené todas las secciones (no quedan `_____`)
- [ x] Escribí mi receta completa en `RECETA.md` antes de programar
- [ x] Mi programa compila sin advertencias
- [x ] Probé todos los casos de la tabla
- [ x] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ x] No modifiqué `utilerias.h`
- [ x] Hice al menos 3 commits con mensajes claros
- [ x] Hice `git push` y verifiqué mi fork en GitHub
- [ x] Entregué el enlace de mi fork en Classroom