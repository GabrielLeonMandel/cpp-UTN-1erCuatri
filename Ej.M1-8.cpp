#include <iostream>
using namespace std;

int main()
{
   //(((L1+L2)>L3) or ((L1+L3)>L2) or ((L3+L2)>L1))
   float L1, L2, L3;
   cout << "Digite Los tres Lados" << endl;
   cin >> L1 >> L2 >> L3;
   if ((((L1 + L2) > L3) or ((L1 + L3) > L2) or ((L3 + L2) > L1)) & ((L1 != 0) & (L2 != 0) & (L3 != 0)) & ((L1 == L2) & (L1 == L3) & (L3 == L2)))
   {
      cout << "Es Triangulo Equilatero" << endl;
   }
   else if ((((L1 + L2) > L3) or ((L1 + L3) > L2) or ((L3 + L2) > L1)) & ((L1 != 0) & (L2 != 0) & (L3 != 0)) & ((L1 == L2) or (L1 == L3) or (L3 == L2)))
   {
      cout << "Es Triangulo isosceles" << endl;
   }
   else if ((((L1 + L2) > L3) or ((L1 + L3) > L2) or ((L3 + L2) > L1)) & ((L1 != 0) & (L2 != 0) & (L3 != 0)) & ((L1 != L2) & (L1 != L3) & (L3 != L2)))
   {
      cout << "Es Triangulo Escaleno" << endl;
   }
   else
   {
      cout << "No es Triangulo" << endl;
   }

   system("pause");

   return 0;
}