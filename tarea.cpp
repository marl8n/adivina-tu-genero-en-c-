#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;

int main()
{
	int man = 0, woman = 0, qdirectory = 11;
	int questions[10];
	string manq[10] = {"\n\tTe gustan los deportes de contacto?\n\t","\n\tTe gustaria ser como cr7 o messi?\n\t","\n\tprefieres ver un partido de tu equipo favorito antes que ver una serie?\n\t","\n\tPrefieres los gameplays sobre los tutoriales de belleza?\n\t","\n\tTe afeitas?\n\t","\n\tTe gustaria tener una buena barba?\n\t","\n\tTienes el cabello regularmente corto?\n\t","\n\tHas besado a una mujer en la boca?\n","\n\tTe has enamorado de una mujer?\n","\n\tTe gustaria estar super fuerte y con el abdomen marcado?\n\t"};
	string womanq[10] = {"\n\tTe casarias con un vestido blanco?\n\t","\n\tSi tuvieses un bebe lo amamantarias?\n\t","\n\tUtlizarias un bolso de mano?\n\t","\n\tHas utilizado tacones en publico?\n\t","\n\tUtilizarias lapiz labial?\n\t","\n\tTe pintarias las unas?\n\t","\n\tHas utilizado un top?\n\t","\n\tHas hablado del chico que te gusta con tu mejor amiga?\n\t","\n\tPrefieres ver tu serie favorita antes que un partido de tu equipo favorito?\n\t","\n\tTe gusta usar maquillaje?\n\t"};
	string answer;

	cout << "Bienvenido! intentare adivinar tu genero basandome\nen una serie de preguntas de si o no\n\t\n\t" << endl;
	while(woman < 6 && man < 6)
	{
		srand(time(NULL));

		for(int i = 0; i < 9; i++)
		{
			qdirectory = rand() % 9;

			if(qdirectory == questions[i])
			{
				qdirectory = rand() % 10;
			}
		}
		

		if(rand() % 2 == 0)
		{
			cout << manq[qdirectory] << endl;
			cin >> answer;
			if(strcmp(answer, "si") == 0)
			{
				man++;
			}else if(strcmp(answer, "no" == 0))
			{
				woman++;
			}
		}
		else
		{
			cout << manq[qdirectory] << endl;
			cin >> answer;
			/*if(answer == "no")
			{
				man++;
			}else if(answer == "si")
			{
				woman++;
			}*/
		}
	}

	return 0;
}
