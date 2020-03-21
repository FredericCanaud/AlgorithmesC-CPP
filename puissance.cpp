
float Puissance(float a, int b){
    //en recursif
    float p=0;
    if (n=0) return 1;
    else if (n%2==0)
        p= Puissance(a, n/2)
        return p*p;
        else
        {
                p=Puissance(a,(n-1)/2)
                return a*p*p;
        }
   //en itératif
   float resultat=
   while (n>1){
       resultat=resultat*a;
       n-=1;

   }
   return resultat;
}
