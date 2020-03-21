typedef struct maillon{
	int numero;
	struct maillon* suivant;
}maillon;

void afficherListe(maillon* liste);
int longueurListe(maillon* liste);
void rotationListe(maillon* liste);
void insererMaillon(maillon* liste, int nombre);

