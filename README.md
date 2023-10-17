![UAH](https://www.uah.es/export/sites/uah/.galleries/imagenes-estructura/logo1.png_105938625.png)
## <center>Departamento de Automática</center>
### <center>Grado en Ingeniería Informática</center>

$\ $

# <center>Instrucciones para la práctica 2</center>
## <center>Sistemas Operativos</center>

$\ $

# Antes de comenzar la práctica

Esta práctica se realizará, en general, en **grupos de cuatro
estudiantes**. Se valorará con el profesor posibles excepciones, de
acuerdo a situaciones particulares, siempre sin exceder el grupo de 4
alumnos. Asimismo, **los miembros de cada grupo deben pertenecer al
mismo horario de laboratorio** salvo motivos justificados que también
estimará el profesor.

## Tarea 1 - Organización

La primera tarea de los estudiantes para esta práctica será determinar
cuáles serán sus respectivas responsabilidades en cada una de las siete
fases obligatorias de la práctica. Cada estudiante puede desempeñar **en
cada fase** uno de los siguientes roles:

-   **Líder (L)**: Será el responsable final de que la fase se realice
    correctamente. Esto incluye, entre otras tareas:

    1.  Garantizar que se cumplen todas las funcionalidades solicitadas
        en la fase.

    2.  Garantizar que la codificación realizada sigue unos criterios de
        calidad adecuados.

    3.  Garantizar que se han realizado todas las pruebas pertinentes
        para evaluar la fase.

    4.  Garantizar que el código implementado se encuentra correctamente
        documentado.

    5.  Gestionar cualquier conflicto que surja entre los integrantes
        del grupo.

    6.  Tomar las decisiones pertinentes cuando no haya acuerdo entre
        diversos miembros del grupo.

    7.  Planificar la temporización de la fase.

-   **Programador (P)**: Será el responsable final de codificar las
    funcionalidades solicitadas en la fase. Esto incluye, entre otras
    tareas:

    1.  Seguir el estilo de programación acordado por todos los
        integrantes del grupo.

    2.  Implementar las funcionalidades solicitadas.

    3.  Realizar las correcciones pertinentes respecto a la programación
        detectadas y notificadas por cualquier otro usuario.

-   **Evaluador (E)**: Será el responsable final de testear las
    funcionalidades solicitadas en la fase. Esto incluye, entre otras
    tareas:

    1.  Determinar los casos de prueba que se deben a llevar a cabo en
        la fase.

    2.  Llevar a cabo dichas pruebas.

    3.  Avisar al programador y al líder si se detecta cualquier error
        en la programación.

    4.  Realizar los casos de prueba no implementados detectados y
        notificados por cualquier otro usuario.

-   **Documentalista (D)**: Será el responsable final de que el código
    quede correctamente comentado. Entre sus tareas, se incluyen:

    1.  Documentar los fragmentos de código relevantes incluidos por el
        programador tanto en las fases obligatorias como en cualquier
        añadido extra.

    2.  Documentar aquellos fragmentos de código cuya comprensión pueda
        resultar compleja.

    3.  Avisar al programador y al líder si se detecta cualquier error
        en la programación (fragmentos no empleados, diferentes estilos
        de programación, etc.).

Las fases de la práctica son las siguientes:

1.  Ciclo de ejecución de órdenes.

2.  Ejecución de órdenes externas simples en primer plano.

3.  Ejecución de órdenes externas simples en segundo plano.

4.  Realización de *makefile*.

5.  Ejecución de secuencia de órdenes (sólo **obligatorio** órdenes
    externas).

6.  Tratamiento de redirecciones.

7.  Implementación de tuberías o *pipes*.

Para determinar las tareas de cada alumno, a continuación se ilustran las diferentes
posibilidades en las Tablas 1, 2 y 3. En caso de que dos o más alumnos no se pongan
de acuerdo sobre su rol a lo largo de la actividad, se determinará de manera aleatoria.

  Tabla 1: División de tareas por usuario (4 alumnos)

| **USUARIO**  | **FASE 1** | **FASE 2** | **FASE 3** | **FASE 4** | **FASE 5** | **FASE 6** | **FASE 7** |
|--------------|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|
| **ALUMNO 1** |    P       |       E    |      D     |      L     |      D     |      P     |      E     |
| **ALUMNO 2** |    L       |       P    |      P     |      E     |      E     |      L     |      D     |
| **ALUMNO 3** |    D       |       L    |      E     |      P     |      P     |      D     |      L     |
| **ALUMNO 4** |    E       |       D    |      L     |      D     |      L     |      E     |      P     |

Tabla 2: División de tareas por usuario (3 alumnos)

| **USUARIO**  | **FASE 1** | **FASE 2** | **FASE 3** | **FASE 4** | **FASE 5** | **FASE 6** | **FASE 7** |
|--------------|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|
| **ALUMNO 1** |   L y D    |      P     |      E     |      E     |      E     |    L y D   |      P     |
| **ALUMNO 2** |     P      |      E     |    L y D   |    L y D   |    L y D   |      P     |      E     |
| **ALUMNO 3** |     E      |    L y D   |      P     |      P     |      P     |      E     |    L y D   |


Tabla 3: División de tareas por usuario (2 alumnos)

| **USUARIO**  | **FASE 1** | **FASE 2** | **FASE 3** | **FASE 4** | **FASE 5** | **FASE 6** | **FASE 7** |
|--------------|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|:----------:|
| **ALUMNO 1** |   P y E    |    E y L   |    L y P   |    D y P   |    D y E   |    P y L   |    D y E   |
| **ALUMNO 2** |   L y D    |    D y P   |    D y E   |    L y E   |    P y L   |    D y E   |    P y L   |


## Tarea 2 - Planificación

Los estudiantes deberán comunicar a los profesores quiénes son los
integrantes del grupo así como el rol que ha desempeñado cada uno de
ellos en las diferentes fases. Para ello, tras finalizar la práctica,
deberán añadir esta información en un archivo denominado
**practica2.odt** que deberá formar parte del envío de la práctica en la
plataforma Blackboard.\
**La práctica debe desarrollarse obligatoriamente usando un repositorio
GitHub**.

 
**¡IMPORTANTE!**
LOS ESTUDIANTES DEBEN SER CAPACES DE COMPRENDER Y APLICAR __TODAS LAS TAREAS__ DE CUALQUIER FASE __INDEPENDIENTEMENTE DE SU__ **ROL** EN CADA FASE;
CUALQUIER TAREA DE LA PRÁCTICA PUEDE SER OBJETO DE PREGUNTA EN LAS
DIFERENTES PRUEBAS DE EVALUACIÓN.

# Durante la realización de la práctica

La práctica tiene una duración estimada de cuatro sesiones presenciales
en el laboratorio en las que deben realizarse las siete fases que
componen la práctica. En cada sesión, el profesor del laboratorio
proporcionará inicialmente los detalles oportunos sobre el desarrollo de
cada fase.

# Tras finalizar la práctica

Una vez finalizada la práctica y subida a la plataforma Blackboard
siguiendo exactamente las indicaciones del enlace asociado, los
estudiantes deben realizar una breve prueba individual de evaluación de
la práctica (**$PL_{2}$**) en la plataforma.

## Tarea 3 - Prueba individual

La prueba $PL_{2}$ se realizará en horario de laboratorio, en el grupo
al que pertenezca cada alumno. La fecha y hora, así como el formato de
la prueba, como las restantes, se detallará tanto en la plataforma
Blackboard como en el propio laboratorio, el primer día de realización
de la práctica. Los alumnos pueden consultar la fecha de esta prueba en
la página siguiente de la Escuela Politécnica Superior:
<http://escuelapolitecnica.uah.es/estudiantes/gcalendar-2GII.asp>. Cabe
recordar que estas preguntas pueden estar relacionadas con alguna fase
que ha realizado un compañero por lo que es imprescindible comprender
toda la práctica desde todos los roles.

# Evaluación

La práctica representa el 15% de la nota de la asignatura, es decir 1.5
puntos de la nota final. Dicha nota está formada por 3 apartados
diferentes:

-   Entrega de la práctica (prueba grupal: **$E_{2}$**); común a todos
    los miembros del grupo): **0.5 puntos**. Esta prueba será evaluada
    mediante una rúbrica, *RúbricaPE2-práctica2*, que puede consultarse
    en la plataforma Blackboard. Los archivos que incluirá son
    detallados en un enlace de envío.

-   Prueba de tipo ensayo (preguntas de respuesta corta) sobre los
    contenidos de la práctica (prueba individual: **$PL_{2}$**): **0,7
    puntos**.

-   Evaluación del uso de GitHub de cada alumno (prueba individual:
    **$Git_{2}$**): **0.3 puntos**.
