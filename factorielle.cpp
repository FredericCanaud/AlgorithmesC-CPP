// Fonction qui calcule factoriel n
int factoriel(int n)
{
	int i; // compteur
	int res; // resultat du calcul

	res = 1;
	for(i = 2; i <= n; i = i + 1)
	{
		res = res * i;
	}
	return(res);
}
