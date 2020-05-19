#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int man = 0, woman = 0, qdirectory = 0, irand, modulo;
	string manq[10] = {"\n\tTe gustan los deportes de contacto?\n\t","\n\tTe gustaria ser como cr7 o messi?\n\t","\n\tprefieres ver un partido de tu equipo favorito antes que ver una serie?\n\t","\n\tPrefieres los gameplays sobre los tutoriales de belleza?","\n\tTe afeitas?","\n\tTe gustaria tener una buena barba?","\n\tTienes el cabello regularmente corto?","\n\tHas besado a una mujer en la boca?","\n\tTe has enamorado de una mujer?","\n\tTe gustaria estar super fuerte y con el abdomen marcado?\n\t"};
	string womanq[10] = {"\n\tTe casarias con un vestido blanco?\n\t","\n\tSi tuvieses un bebe lo amamantarias?\n\t","\n\tUtlizarias un bolso de mano?\n\t","\n\tHas utilizado tacones en publico?\n\t","\n\tUtilizarias lapiz labial?\n\t","\n\tTe pintarias las unas?\n\t","\n\tHas utilizado un top?\n\t","\n\tHas hablado del chico que te gusta con tu mejor amiga?\n\t","\n\tPrefieres ver tu serie favorita antes que un partido de tu equipo favorito?\n\t","\n\tTe gusta usar maquillaje?\n\t"};
	char answer;

	cout << "Bienvenido! intentare adivinar tu genero basandome\nen una serie de preguntas de si o no\n\t\n\t" << endl;
	
	while(woman < 5 && man < 5)
	{
		cout << "Responde con 's' para si, 'n' para no" << endl;
		srand(time(NULL)); //null para que este cambiando
		
		irand = rand();

		modulo = irand % 2;


		if(modulo == 0)
		{
			cout << manq[qdirectory] << endl;
			cin >> answer;
			switch (answer)
			{
			case 's': man++;
				break;
			case 'n': woman++;
				break;
			default: cout << "valor incorrecto" << endl;
				break;
			}
		}
		else
		{
			cout << womanq[qdirectory] << endl;
			cin >> answer;
			switch (answer)
			{
			case 's': woman++;
				break;
			case 'n': man++;
				break;
			default: cout << "valor incorrecto" << endl;
				break;
			}
		}
		qdirectory++; //qdirectory = qdirectory + 1;
	}

	if(woman > man)
	{
		cout << "Usted es mujer" << endl;
	}
	else
	{
		cout << "usted es hombre" <<endl;
	}

	//cout << man << endl;
	//cout << woman << endl;
	

	return 0;
}
