# Receta: Área y perímetro de un rectángulo

1. MOSTRAR "Bienvenido a mi programa de rectangulo"

2. MOSTRAR "Escribe el ancho del rectangulo en cm (mayor que 0):"

3. LEER ancho usando leerDecimal

4. MIENTRAS ancho sea menor o igual a 0 HACER
   4.1 MOSTRAR "El ancho debe ser mayor que 0"
   4.2 MOSTRAR "Escribe nuevamente el ancho del rectangulo en cm:"
   4.3 LEER ancho usando leerDecimal
   FIN MIENTRAS

5. MOSTRAR "Escribe el alto del rectangulo en cm (mayor que 0):"

6. LEER alto usando leerDecimal

7. MIENTRAS alto sea menor o igual a 0 HACER
   7.1 MOSTRAR "El alto debe ser mayor que 0"
   7.2 MOSTRAR "Escribe nuevamente el alto del rectangulo en cm:"
   7.3 LEER alto usando leerDecimal
   FIN MIENTRAS

8. CALCULAR area = ancho * alto

9. CALCULAR perimetro = 2 * (ancho + alto)

10. MOSTRAR "Area: ", area, " cm2"

11. MOSTRAR "Perimetro: ", perimetro, " cm"

12. MOSTRAR "Fin del programa"