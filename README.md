# Lista
***Programa en donde se hace uso del tipo de Estructura Lineal llamado Lista, elaborado en C++***.

------------

El programa que se presenta fue realizado en el lenguaje de programación C++, asimismo el compilador utilizado fue Dev C++, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para comprobar que efectivamente el programa funciona correctamente.

------------

Concepto de lista en programación:

> Una lista lineal es un conjunto de elementos de un tipo dado que pueden variar en número y donde cada elemento tiene un único predecesor y un único sucesor o siguiente, excepto el primero y último de la lista.

------------
La primera parte del código se trata de la declaración de una estructura llamada **Nodo**, en ella se declara una variable de tipo entero que será la que contendrá el dato que introduce el usuario. Asimismo, contiene un puntero que se llama siguiente.

![imagen](https://user-images.githubusercontent.com/71055467/97524576-a5927a00-196a-11eb-93a6-36e89a679336.png)

A continuación se presentan las funciones que se encargan de hacer una tarea específica en la lista, por ejemplo insertar mostrar y buscar elementos de la lista. Dichas funciones se mandarán a llamar mas adelante y por consiguiente se ejecutarán conforme a la opción que el usuario digite.

![imagen](https://user-images.githubusercontent.com/71055467/97524851-2ea9b100-196b-11eb-84e0-f951e8512ed9.png)

En la siguiente captura se muestra la creación de un puntero de la estructura Nodo que se iguala a NULL, esto es para decir que es el último elemento de la lista.

![imagen](https://user-images.githubusercontent.com/71055467/97525149-cf986c00-196b-11eb-85b9-4ef6eec8b7e0.png)

La función main es la función principal de todo programa hecho en C++, siempre que se ejecuta un programa empieza por esta parte, y en este caso la función se encarga de llamar al método, menu, la cual se encuentra mas adelante.

![imagen](https://user-images.githubusercontent.com/71055467/97525666-f73c0400-196c-11eb-81af-40013ec8fb5a.png)

En la función menu, basicamente lo que trata de hacer es mostrar al usuario las diversas opciones con las que cuenta para poder interactuar con una lista. Dependiendo de lo que el usuario digite se ejecutará un caso u otro con la ayuda de la condicional switch, además en cada caso lo que es mandar a la función respectiva que se describiran más adelante.

![imagen](https://user-images.githubusercontent.com/71055467/97525943-ae387f80-196d-11eb-876c-b3f5a1fe7747.png)
![imagen](https://user-images.githubusercontent.com/71055467/97525980-c5776d00-196d-11eb-960b-03460eb14b0e.png)

La función **insertarlista**, tiene la tarea de insertar elementos en la lista, podemos ver que recibe parámetros de tipo lista y un dato de tipo entero. Otras tareas más específicas se muestran en el código con los comentarios correspondientes, lo podemos ver en la captura siguiente:

![imagen](https://user-images.githubusercontent.com/71055467/97526329-7f6ed900-196e-11eb-91bf-a49b8ddc3401.png)

La siguiente función que se programó en este programa se trata de **mostrarlista**, como su nombre lo dice, simplemente muestra al usuario los elementos de la lista.

![imagen](https://user-images.githubusercontent.com/71055467/97526459-c9f05580-196e-11eb-853e-06580f07a883.png)

Para terminar nos encontramos con la ultima función del programa la cual es **buscarlista**, y lo que hace es buscar un elemento en la lista y en caso de que haya sido encontrado, se muestra junto con un mensaje respectivo, pero en caso de que no de igual manera solo se imprime el mensaje de que no ha sido encontrado. El código se muestra a continuación:

![imagen](https://user-images.githubusercontent.com/71055467/97526680-43884380-196f-11eb-8b33-d4bc9019a8f6.png)

Una buena expicación del código no puede ser entendido si no se muestra un panorama completo de lo que se trata es por ello que a continuación se muestran capturas de pantalla del código fuente completo.

![imagen](https://user-images.githubusercontent.com/71055467/97526923-c5786c80-196f-11eb-9102-50ed3f276c04.png)
![imagen](https://user-images.githubusercontent.com/71055467/97526972-dc1ec380-196f-11eb-9482-437ce8690f65.png)
![imagen](https://user-images.githubusercontent.com/71055467/97527022-f8226500-196f-11eb-8481-69ce6105185f.png)
![imagen](https://user-images.githubusercontent.com/71055467/97527081-19835100-1970-11eb-99e5-cae6a57cc099.png)

------------


Ahora, pasamos a la ejecución de dicho programa, se presentan capturas donde se irán describiendo cada una de ellas.

Al ejecutar el programa lo primero que se muestra en consola es un menú con las diversas opciones con las que cuenta el usuario:

![imagen](https://user-images.githubusercontent.com/71055467/97527195-54858480-1970-11eb-9770-1ad6c9c56fd9.png)

Si digitamos la opción 1 veremos lo que hace:

![imagen](https://user-images.githubusercontent.com/71055467/97527253-7a128e00-1970-11eb-8fe8-af806e659466.png)

Lo que sigue del programa es pedir un número para que sea introducido a la lista, una vez hecho eso nos muestra el mensaje diciendo que se ha agregado, despues nos aparece una pregunta, diciendo si deseamos ingresar otro número, si le decimos que si  volverá a  pedir otro número y se guardará

![imagen](https://user-images.githubusercontent.com/71055467/97527422-e2fa0600-1970-11eb-8f8f-a56487dcdb74.png)

- Se ingresa el elemento 2

![imagen](https://user-images.githubusercontent.com/71055467/97527460-f86f3000-1970-11eb-9a1e-e82a48bf7352.png)

- Se ingresa el elemento 3

![imagen](https://user-images.githubusercontent.com/71055467/97527480-08870f80-1971-11eb-8104-b2be06221f34.png)

Hemos agregado tres elementos ahora una vez terminado nos regresa al menú y es esta ocasión vamos a teclear la opción 2 para que nos muestre los elementos:

![imagen](https://user-images.githubusercontent.com/71055467/97527594-4e43d800-1971-11eb-9763-65ef231cad03.png)

Podemos ver que todos los elementos agregados aparecen en pantalla siguiendo un orden, del lado izquierdo se encuentra el último numero agregado y pasa lo contrario en el lado derecho.

Ahora pasaremos a buscar un elemento de la lista, como se muestra enseguida:

![imagen](https://user-images.githubusercontent.com/71055467/97527726-a1b62600-1971-11eb-9f0e-f8a4ffacafd8.png)

Elegimos buscar el número 4 y como antes ya lo hemos agregado a la lista, es por ello que nos aparece un mensaje de que ha sido encontrado pero si digitamos otro número diferente a los que se encuentran dentro nos dirá que no, esto lo vemos en la captura siguiente:

![imagen](https://user-images.githubusercontent.com/71055467/97527856-ee016600-1971-11eb-9281-912c1fda6a8d.png)

La última opción del menu es salir, con esto el programa finaliza su ejecución. Podemos verlo a continuación:


![imagen](https://user-images.githubusercontent.com/71055467/97527934-23a64f00-1972-11eb-8d9e-806fc248f32f.png)

![imagen](https://user-images.githubusercontent.com/71055467/97527938-2a34c680-1972-11eb-9905-1eef0264afd9.png)


------------


En conclusión, estudiar estos temas de estructuras lineales, nos ayuda a comprender el funcionamiento de cada uno de ellos en este caso se trató de una lista, pero a su ves sabemos que estas listas pueden estar divididos en otros  tipos, como las listas enlazadas, multienlazadas, circulares, entre otras, y vemos que cada una de estas se comportan de manera diferente, pero en fin con el estudio de este programa pudimos comprender la finalidad de una lista en general.
