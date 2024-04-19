/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catálogo de Productos.
   Dev: Denis Estuardo de Jesús Ramírez Padilla
   Fecha: 19/04/2024
   link de la simulacion:
*/

//Define el nombre de los productos y cantidad

struct Producto_1 {
  char Snikers[50];
  byte cantidad_1;
};

struct Producto_2 {
  char Nucita [50];
  byte cantidad_2;
};

struct Producto_3 {
  char Barriletes[50];
  byte cantidad_3;
};

struct Producto_4 {
  char Alborotos[50];
  byte cantidad_4;
};

//Creo los datos de los dulces a registrar.

Producto_1 Producto1 = {"Snikers", 28};
Producto_2 Producto2 = {"Nucita", 35};
Producto_3 Producto3 = {"Barriletes", 50};
Producto_4 Producto4 = {"Alborotos", 70};

byte contador = 0;

void setup(){
  Serial.begin(9600);
  Serial.println("Maquina Expendedora");
  Serial.println("Izquierda Anvanzar- Derecha Regresar");
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop() {
 
  if(digitalRead(2)==HIGH)
  {
    delay(350);
    contador = contador+1;
   
  if(contador == 1){
   Serial.print("El Producto es: ");
   Serial.println(Producto1.Snikers);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto1.cantidad_1);
  }    
     
  if(contador == 2){
   Serial.print("El Producto es: ");
    Serial.println(Producto2.Nucita);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto2.cantidad_2);
  }
       
  if(contador == 3){
   Serial.print("El Producto es: ");
   Serial.println(Producto3.Barriletes);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto3.cantidad_3);
  }
         
  if(contador == 4){
   Serial.print("El Producto es: ");
   Serial.println(Producto4.Alborotos);
   Serial.print("La cantidad del Producto es: ");
   Serial.println(Producto4.cantidad_4);
  }
  }
   
   else if(digitalRead(3)==HIGH)
   {
     delay(350);
     contador = contador-1;
     
   if(contador == 1){
   Serial.print("El Producto es: ");
   Serial.println(Producto1.Snikers);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto1.cantidad_1);
  }    
     
  if(contador == 2){
   Serial.print("El Producto es: ");
   Serial.println(Producto2.Nucita);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto2.cantidad_2);
  }
       
  if(contador == 3){
   Serial.print("El Producto es: ");
   Serial.println(Producto3.Barriletes);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto3.cantidad_3);
  }
         
  if(contador == 4){
   Serial.print("El Producto es: ");
   Serial.println(Producto4.Alborotos);
   Serial.print("La cantidad del Producto es:  ");
   Serial.println(Producto4.cantidad_4);
  }
}
}
