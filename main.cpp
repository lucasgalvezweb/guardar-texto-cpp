#include <iostream>
#include <fstream>
#include <string>

void guardarDatos();
void creacionBasicaArchivoTexto();
void lecturaDeArchivosYaExistentes();
void escribirNuevaLinea();

using namespace std;

// Global variables
string nombre, apellido, sexo;
int edad;

int main()
{

    // guardarDatos();
    escribirNuevaLinea();

    return 0;
}

void escribirNuevaLinea(){
    ofstream foutput;
    ifstream finput;
    foutput.open ("apnd.txt",ios::app);
    finput.open ("apnd.txt");

    if(finput.is_open()){
        cout << "Ingrese su Nombre: ";
        cin >> nombre;
        foutput<< endl << nombre;

        cout << "Ingrese su Apellido: ";
        cin >> apellido;
        foutput << " | " << apellido;

        cout << "Ingrese su Edad: ";
        cin >> edad;
        foutput << " | " << edad;

        cout << "Ingrese su Sexo: ";
        cin >> sexo;
        foutput << " | " << sexo;
    }

    cout<<"\nDatos ingresados correctamente";

    finput.close();
    foutput.close();
}

void guardarDatos(){

    ofstream archivo_txt;
    archivo_txt.open("datos.txt");

    if(archivo_txt.is_open()){
        cout << "Ingrese su Nombre: ";
        cin >> nombre;

        cout << "Ingrese su Apellido: ";
        cin >> apellido;

        cout << "Ingrese su Edad: ";
        cin >> edad;

        cout << "Ingrese su Sexo: ";
        cin >> sexo;

        archivo_txt << nombre;
        archivo_txt << " | " << apellido;
        archivo_txt << " | " <<  edad;
        archivo_txt << " | " <<  sexo;

        archivo_txt.close();
    }
}

void creacionBasicaArchivoTexto(){
    ofstream txt_file;
    txt_file.open("myTextFile.txt");

    if(txt_file.is_open()){
        txt_file << "This is the first line \n";
        txt_file << "This is the second line \n";
        txt_file << "This is the third line \n";
        txt_file << "This is the four line \n";
        txt_file.close();
    }
}

void lecturaDeArchivosYaExistentes(){

    // string line;
    ifstream txt_file_two;
    txt_file_two.open("myTextFile.txt");

    int id;
    string name;
    int age;

    if(txt_file_two.is_open()){

        //while(getline(txt_file_two, line)){
        //    cout << line << endl;
        //

        while(txt_file_two >> id >> name >> age){
            cout<< id <<" | " << name << " | "<< age<<endl;
        }

        txt_file_two.close();
    }else{
        cout << "File is not open" << endl;
    }
}
