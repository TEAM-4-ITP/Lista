
#include<iostream>
#include<conio.h>

using namespace std;

	struct Nodo{  //estructura nodo
		int dato;
		Nodo *siguiente;	
		
	};
	
	//prototifo de las funciones
	void menu();
	void insertarlista(Nodo *&,int);    //creacion de la funcion insertarlista
	void mostrarlista(Nodo *);			//creacion de funcion de mostrar lista
	void buscarlista(Nodo *, int);      // creacion de funcion para buscar un numero en la lista
	
	Nodo *lista = NULL;   //se crea el puntero lista y se iguala a null
	 
	 int main(){
	 	
	 	menu();
		 	
	 	getch();
	 	return 0;
	 }
	 
	 //funcion menu, para mejor vista :)
	 void menu(){
	 	int opcion, dato, opc=1;
	 	
	 	do{ 
	 	
	 	
	 		cout<<"\n\t\t-----MENU-----";
	 		cout<<"\n\t1->Insertar elementos a la lista";
	 		cout<<"\n\t2->Mostrar los elementos de la lista";
			cout<<"\n\t3->Buscar un elementos de la lista";
	 		cout<<"\n\t4->salir";
	 		cout<<"\n\tSelecciona la opcion...";
	 		cin>>opcion;
	 		
	 		switch (opcion){
	 			case 1: 
			 			do{
			 				cout<<"\n\tdigite un numero: ";
			 				cin>>dato;
					 		insertarlista(lista,dato);
			 				cout<<"\n\tQuieres ingresar otro numero? 1-SI 2-NO: ";
			 				cin>>opc;
			 			  system("cls");
						 }while(opc==1);
	 			break;
	 			case 2:
	 					mostrarlista(lista);
	 					cout<<"\n";
						 system ("pause");
	 			break;
	 			case 3:
	 			 		cout<<"\n\tDigite un numero a buscar: ";
	 			 		cin>>dato;
	 			 		buscarlista(lista,dato);
	 			 		system("pause");
				 break;
	 				
			 }
	 		system("cls");
		 }while(opcion !=4);
	 }
	 
	 //insertar digitos a la lista
	 void insertarlista(Nodo *&lista ,int n){
	 	Nodo *nuevo_nodo = new Nodo(); //se crea un nuevo nodo para poder ingresar datos a la lista
	 	nuevo_nodo->dato = n;
	 	
	 	Nodo * aux1 = lista;
	 	Nodo * aux2;
	 	
	 	while ((aux1 != NULL) && (aux1->dato < n)){  //  dos condiciones mientras que -mientras que la lista no haya llegado a su fin-
	 		aux2 = aux1;							// y la segunda condicion es que el digito a ingresar iba a estar ordenado o no
			aux1 = aux1->siguiente;		 
		 }
	 	
	 	if(lista == aux1){
	 		lista = nuevo_nodo;
		 
		 }else {
		 	aux2->siguiente = nuevo_nodo;
		 	
		 }
		 
	 	nuevo_nodo->siguiente = aux1;
	 	
	 	cout<<"\n\tElemento: "<<n<<"\t---insertado a la lista correctamente--- \n ";
	 }
	 //funcion para mostrar los elementos de la lista
	 void mostrarlista(Nodo *lista){
		Nodo *actual = new Nodo();
	 	actual = lista;
	 	
	 	while (actual!= NULL){
	 		cout<<actual->dato<<"-----";
	 		actual = actual->siguiente;
		 }
	 }
	 	//funcion para buscar los elementos de la lista
	 	void buscarlista(Nodo *lista,int n){
	 		bool band = false;
	 		
	 		Nodo *actual = new Nodo();
	 		actual = lista;
	 		
	 		while ((actual != NULL) && (actual ->dato <=n )){
	 			
	 			if(actual->dato ==n){
	 			
				 	band = true;
				 }
				 actual=actual->siguiente;
			 }
	 		
	 			if(band ==true){
	 				cout<<"\n\telemento.. "<<n<<"\t--SI fue encontrado---";
				 }else{
				 	cout<<"\n\telemento.. "<<n<<"\t--NO fue encontrado---";
				 }
		 }
