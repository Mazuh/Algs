#include <stdio.h>
#include <string.h>

typedef struct {
    char brand[30];
    char model[30];
    int year;
    char plate[10];
} Vehicle;

void printCars(Vehicle * cars, int qtt, int * filterYear, int * filterMinYear, char * filterModel) {
    if (qtt < 1) {
        printf("Sem carros registrados.\n");
        return;
    }

    printf("Marca, Modelo, Ano, Placa\n");
    int i;
    for (i = 0; i < qtt; i++) {
        if (filterYear != NULL && cars[i].year != *filterYear) {
            continue;
        }
        if (filterMinYear != NULL && cars[i].year < *filterMinYear) {
            continue;
        }
        if (filterModel != NULL && strstr(cars[i].model, filterModel) == NULL) {
            continue;
        }

        printf("%s, %s, %d, %s\n", cars[i].brand, cars[i].model, cars[i].year, cars[i].plate);
    }
}

int readCar(Vehicle * cars, int qtt) {
    if (qtt >= 10) {
        printf("JC! excedeu o limite de carros.\n");
        return qtt;
    }

    Vehicle creating;
    printf("Digite a marca, modelo, ano e placa separados por espaC'o:\n");
    char brand[50];
    char model[50];
    int year;
    char plate[10];
    scanf("%s %s %d %s", &creating.brand, &creating.model, &creating.year, &creating.plate);
    fflush(stdin);
    cars[qtt] = creating;
    printf("Registrado.\n");
    return ++qtt;
}

int main() {
    Vehicle cars[10];
    int qtt = 0;

    while (1) {
        printf("Digite o código do que deseja fazer:\n1 -> Listar tudo\n2 -> Registrar carro\n3 -> Filtrar por ano\n4 -> Filtrar por ano mínimo\n5 -> Filtrar por modelo\n6 -> Sair\nNúmero do comando: ");
        int answer;
        scanf("%d", & answer);
        fflush(stdin);

        if (answer == 1) {
            printCars(cars, qtt, NULL, NULL, NULL);
        } else if (answer == 2) {
            qtt = readCar(cars, qtt);
        } else if (answer == 3) {
            printf("Digite o ano: ");
            int year;
            scanf("%d", & year);
            printCars(cars, qtt, & year, NULL, NULL);
        } else if (answer == 4) {
            printf("Digite o ano: ");
            int year;
            scanf("%d", & year);
            printCars(cars, qtt, NULL, & year, NULL);
        } else if (answer == 5) {
            printf("Digite o modelo: ");
            char model[10];
            scanf("%s", & model);
            printCars(cars, qtt, NULL, NULL, model);
        } else if (answer == 6) {
            printf("Tchau!\n");
            break;
        } else {
            printf("Comando desconhecido, tente novamente.\n");
        }
        printf("\n");
    }

    printf("Fechando aplicação.\n");
    return 0;
}
