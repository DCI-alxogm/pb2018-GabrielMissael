Actividades preliminares del ejercicio de la semana 15. 

El espectro medidio por el instrumento FIRAS, de la radiación cósmica de fondo de microondas (https://es.wikipedia.org/wiki/Radiación_de_fondo_de_microondas) se ajusta muy bien un esepectro conocido como espectro de cuerpo negro. Dicho espectro depende solamente de la temperatura asociada a la fuente que produce dicha radiación. En el caso de la RCF, dicha radiación se produce en un época muy temprana del Universo. Así que con los datos medidos podremos determinar cual es la temperatura asociada. Es decir, tendríamos una medida de la temperatura promedio del Universo. 

El Objetivo de este ejercicio es simplemente hacer una gráfica como la mostrada en el archivo fig.tex, donde se muestren los datos y una curva teórica. En el proceso estimaremos cuál es la temperatua. 

Las actividades que deben ya estar realizadas para el día miercoles 21 son: 

- Iniciar un notebook donde se realizara el ejercicio.
- Gráficar los datos dados en el archivo IRCF.txt. Se debe obtener una imagen como la mostrada en el archivo fig.tex (puntos y barras de error). Sugerencia: buscar las funciones errorbar y subplots de la libreria matplotlib.


- Definir la función: 

![ecuación](https://latex.codecogs.com/gif.latex?I(\nu,T)=&space;\frac{h&space;\nu^3}{c^2}\frac{1}{e^{h&space;\nu/k&space;T}-1})

donde h,k,c son las constantes de Planck, Boltzman y la velocidad de la luz respectivamente. Es importante expresar la Intentsidad (I) en Jansky/s, no en el sistema internacional de Unidades. 

Sugerencias: 
 - Usa la libreria scipy.constants 
 - Busca la definición de Jansky para pasar del SI a Jy/s. 

