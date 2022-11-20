#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
	if ((a == b) && (a == 0))
		return 1;
	if (a * b == 0)
		return a + b;
	while (b != 0) {
		int c = b;
		b = a % b;
		a = c;
	}
	return a;
}
/* consideram numaratoarea, numaratoare liniara in mai multe siruri mici, fiecare cu n locuri de joaca,
   obtinand un sir mare cu m locuri (m fiind multiplu de n). Numaratoarea se termina atunci cand al n-lea //loc de joaca 
   (dintr-un sir mic) a fost vizitat de Radu (astfel, urmatorul loc pe care ar trebui sa il viziteze Radu va fi un al x-lea
   loc din urmatorul sir mic), deci m trebuie sa fie si multiplu de x. Prin urmare m = cmmmc(n, x). Dintre cele m locuri de
   joaca, au fost vizitate de catre Radu m/x locuri, locurile de joaca nevizitate sunt in numar de 
   nr = n - m/x = n - cmmmc(n,x)/x = n - (n*x/cmmdc(n,x))/x = n - n/cmmdc(n,x).
   int joacaInParc(int n, int x) {
	return n - n / cmmdc(n, x);
   }*/

int joacaInParc(int n, int x) {
	return n - n / cmmdc(n, x);
}

int main() {
	int n = 0;
	int x = 0;
	cin >> n;
	cin >> x;
	int nr = 0;
	nr = joacaInParc(n, x);
	cout << nr;

	return 0;
}
