#include<iostream>
using namespace std;
struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
	
};
main()
{
	Estudiante estudiante;
	for (int i=0;i<4;i++)
	{
	cout<<"________________________"<<endl;
	cout<<"Ingrese el Codigo: ";
	cin >>estudiante.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,estudiante.nombre[i]);
	cout<<"Ingrese Nota: ";
	cin >>estudiante.nota[i];
    }
	for (int i=0;i<4;i++)
	{
	cout<<"________________________"<<endl;
	cout <<"Codigo: "<<estudiante.codigo[i]<<endl;
	cout <<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
	cout <<"Nota: "<<estudiante.nota[i]<<endl;
	
	}
	system("pause");
}