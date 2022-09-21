#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include<string>
using std::string;

class Estudiante{

    public:
        Estudiante(string mi_nombre, int mi_edad, string mi_id_estudiante){ // constructor
            nombre = mi_nombre;
            id_estudiante = mi_id_estudiante;
            edad=mi_edad;
        }

        //funciones miembros
        string get_id(){ 
            return id_estudiante;
        }
        
        string get_nombre(){
        	return nombre;
		}
		
		int get_edad(){
			return edad;
		}
		
		void set_edad(int nueva_edad){
			edad=nueva_edad;
		}


    private:
        string nombre, id_estudiante, grado; //miembros de datos
        string generro;
        int num_clases, edad;
};

int main(){

    Estudiante est1("Ronaldo",38,"123-456-789"); //Objeto: "Una variable"
    Estudiante est2("Estefani",18,"233-413");
    Estudiante est3("Carlo",25,"42312-121312");

    int variable =5;

    variable = 6;
    cout<<"Nuevo valor de la variable: "<<variable<<endl;

    //if(Estudiante tiene el id == "123-456-789")

    cout<<"El id del estuniante 1 es: "<<est1.get_id()<<endl;
    cout<<"otro id: "<<est3.get_id()<<endl;
	cout<<"El nombre del estudiante 1 es: "<<est1.get_nombre()<<" y su id es: "<<est1.get_id()<<endl;
	
	cout<<"La edad de "<<est1.get_nombre()<<" es :"<<est1.get_edad()<<endl;
	est1.set_edad(23);
	cout<<"La edad biologica de "<<est1.get_nombre()<<" es: "<<est1.get_edad()<<endl;
    return 0;
}

//Tarea. Crear un miembro de datos llamafdo edad y crear funciones set y get para el miembro de datos 

