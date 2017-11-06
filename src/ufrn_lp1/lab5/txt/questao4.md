# LP1
## Lab5
### Questão 4

    A partir dos números de uma coleção, todos os valores são elevados ao quadrado,
	adicionados a um segundo container e por fim impressos.

```c++
#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::back_inserter;

#include <vector>
using std::vector;

#include <algorithm>
using std::transform;

// Retorna o parâmetro elevado ao quadrado.
int square(int val) {
	return val * val;
}

int main(int argc, char* argv[]) {
vector<int> col;
	vector<int> col2;

	// Preenche o primeiro container com valores de 1 até 9 (incluso).
	for (int i = 1; i <= 9; ++i) {
		col.push_back(i);
	}

	// O quadrado dos valores anteriores é adicionado no segundo container.
	transform(col.begin(), col.end(), back_inserter(col2), square);
	
	// Imprime os valores do segundo container.
	for (vector<int>::iterator it = col2.begin(); it != col2.end(); ++it) {
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}

```
