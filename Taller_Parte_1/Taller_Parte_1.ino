/*
   Fundacion Kinal
   Centro Educativo Tecnico Laboral Kinal
   Quinto Perito
   Quinto Electronica
   Codigo Tecnico: EB5AM
   Curso:Taller Electrónica Digital y Reparación de Computadoras I 
   Proyecto: Como leer un pin digital 
   Alumno: Denis Estuardo de Jesús Ramírez Padilla 
   Fecha : 12 de abril del 2024
*/

//Directivas del preproocesador
#define push_button 2 // Push button conectado al pin2 
#define led 3 


void setup() {
    pinMode(push_button, INPUT);  //Pin2 como entrada 
    pinMode(led, OUTPUT);
    Serial.begin(9600);                       //Inicio la comunicacion serial 
    Serial.println("Lectura de un pulsador"); //Envio el texto entre comillas al puerto serie
} 

void loop(){
   //Variable local, que se encarga de almacenar el valor (abierto o cerrado)
   //del pulsador conectado al pin2
   bool estado_boton = digitalRead(push_button);
   if(estado_boton == HIGH) //¿He presionado el interruptor?
 {
    //Si lohe presionado 
   digitalWrite(led, LOW); //apago el led 
 }  else{
    //si no lo eh presionado 
    digitalWrite(led, HIGH);  //Mantengo encendido el led 
 }
}
