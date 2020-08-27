#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//variables globales para calcular

int apuestastotalesRojo = 0, apuestastotalesNegro = 0,
    numerosseguidosRojo = 0, numerosseguidosNegro = 0,
    banderaseguidosRojo = 0, banderaseguidosNegro = 0,
    salioCero = 0, saliomultiploDiez = 0,
    contadorderondas = 1, valormayorapuesta = 0, rondamayorapuesta = 0,
    cantidaddenroprimo = 0, historialPago = 0, historialGanancia = 0;

//funciones pa contar las fichas
int cantfichasApuesta(void)
{
    int cant;
    printf("Ingrese la CANTIDAD DE FICHAS que desea jugar (ejemplo: 3)\n");

    printf("Cantidad de fichas: ");
    scanf("%d", &cant);

    return cant;
}

int valorfichasApuesta(void)
{
    int valor;
    while (1)
    {
        printf("Fichas disponibles: $1-$2-$5-$10-$50-$100\n");
        printf("Ingrese el VALOR DE LA FICHA q quiere jugar: (ejemplo: 100)\n");
        printf("Valor de ficha: ");
        scanf("%d", &valor);
        if (valor == 1 || valor == 2 || valor == 5 || valor == 10 || valor == 50 || valor == 100)
        {
            break;
        }
        printf("\nIngrese un valor valido!\n");
    }
    return valor;
    printf("\n");
}

//funcion que genera los datos para poner en la apuesta
void realizarApuestas(int *punterotipo, int *punterocantidad, int *punterovalor, int *punteronumero)
{
    int tipodeapuesta, cantidadficha, valorficha;
    if (1)
    {
        printf("APUESTAS: \n");
        printf("[1] NUMERO\n ");

        printf("DOCENAS:\n");
        printf("[2] Primera docena\n");
        printf("[3] Segunda docena\n");
        printf("[4] Tercer docena\n");

        printf("COLUMNAS:\n");
        printf("[5] Primer columna\n");
        printf("[6] Segunda columna\n");
        printf("[7] Tercer columna\n");

        printf("MITADES:\n");
        printf("[8] Primera mitad\n");
        printf("[9] Segunda mitad\n");

        printf("COLOR:\n");
        printf("[10] Color rojo\n");
        printf("[11] Color negro\n");

        printf("PAR/IMPAR:\n");
        printf("[12] Par\n");
        printf("[13] Impar\n");
    }
    while (1)
    {
        //chequeo q la opcion exista
        printf("A que desea apostar: ");
        scanf("%d", &tipodeapuesta);

        if (tipodeapuesta > 0 && tipodeapuesta < 14)
            break;

        printf("Ingrese un valor correcto! \n");
    }

    switch (tipodeapuesta)
    {
    case 1:
    {
        int numeroapostado;
        printf("Eliga el numero: ");
        scanf("%d", &numeroapostado);

        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();

        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
        *punteronumero = numeroapostado;
    }

    break;
    case 2:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 3:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 4:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 5:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 6:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 7:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 8:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 9:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 10:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 11:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 12:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;
    case 13:
    {
        valorficha = valorfichasApuesta();
        cantidadficha = cantfichasApuesta();
        *punterotipo = tipodeapuesta;
        *punterocantidad = cantidadficha;
        *punterovalor = valorficha;
    }

    break;

    default:
    {
        printf("default \n");
    }

    break;
    }
}

// Checkeo que el numero ganador este del array en cuestion
int contieneValor(int val, int arr[], int siezeofArr)
{

    int i;
    int contiene = 0;
    for (i = 0; i <= siezeofArr; i++)
    {
        if (arr[i] == val)
            contiene = 1;
    }
    return contiene;
}

// Gira la ruleta
void giraRuleta(int APUESTASTOTALES[10][4])
{
    int columnaUno[] = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34};
    int columnaDos[] = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35};
    int columnaTres[] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36};
    int colorRojo[] = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
    int colorNegro[] = {2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35};
    int nrosPares[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36};
    int nrosImpares[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35};

    int contiene = 0;

    int numeroGanador, contieneapuestasseguidas = 0;

    srand(time(0)); //semilla para el nro random, que cambia en cada ejecución del programa

    numeroGanador = rand() % 37;

    //test numero ganador
    //numeroGanador = 6;

    printf("===============================\n");
    printf("Numero ganador: %d\n", numeroGanador);
    printf("===============================\n\n");

    //chequeo item de apuestas seguidas rojo o negro
    contieneapuestasseguidas = contieneValor(numeroGanador, colorRojo, 17);
    if (contieneapuestasseguidas)
    {
        numerosseguidosRojo++;
        numerosseguidosNegro = 0;
    }
    contieneapuestasseguidas = contieneValor(numeroGanador, colorNegro, 17);
    if (contieneapuestasseguidas)
    {
        numerosseguidosNegro++;
        numerosseguidosRojo = 0;
    }
    if (numerosseguidosRojo == 5)
        banderaseguidosRojo++;

    if (numerosseguidosNegro == 5)
        banderaseguidosNegro++;

    //chequeo item de cero o multiplos de 10
    if (numeroGanador == 0)
    {
        salioCero++;
    }
    else if (numeroGanador % 10 == 0)
    {
        saliomultiploDiez++;
    }

    //chequeo si el numero ganador es primo
    int contprimo, flagprimo = 0;
    if (numeroGanador != 0 && numeroGanador != 1)
    {
        for (contprimo = 2; contprimo <= numeroGanador / 2; ++contprimo)
        {
            if (numeroGanador % contprimo == 0)
            {
                flagprimo = 1;
                break;
            }
        }

        if (flagprimo == 0)
            cantidaddenroprimo++;
    }

    int bb;
    for (bb = 0; bb < 10; bb++)
    {
        //chequeo el valor de la apuesta (nro de fichas*valor de la ficha)
        int valordeapuesta;
        valordeapuesta = APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2];
        if (valordeapuesta > valormayorapuesta)
        {
            valormayorapuesta = valordeapuesta;
            rondamayorapuesta = contadorderondas;
        }

        // Recorro todas las pos 0 para evaluar el tipo de apuesta se esta por jugar
        switch (APUESTASTOTALES[bb][0])
        {
        case 1:
        {
            int numeroElegido = APUESTASTOTALES[bb][3];
            printf("Apuesta a pleno, numero %d\n", numeroElegido);

            if (numeroElegido == numeroGanador)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 35);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);

                // Se crean los historiales

                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);

                // Se crean los historiales

                historialGanancia += casinoGana;
                break;
            }
        }

        case 2:
        {
            printf("Apuesta a Primer docena\n");
            if (numeroGanador > 0 && numeroGanador <= 12)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 3:
        {
            printf("Apuesta a Segunda docena\n");

            if (numeroGanador > 12 && numeroGanador <= 24)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 4:
        {
            printf("Apuesta a Tercer docena\n");
            if (numeroGanador > 24 && numeroGanador <= 36)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 5:
        {
            printf("Apuesta a Primer columna\n");

            contiene = contieneValor(numeroGanador, columnaUno, 11);

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 6:
        {
            printf("Apuesta a Segunda columna\n");

            contiene = contieneValor(numeroGanador, columnaDos, 11);

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 7:
        {
            printf("Apuesta a Tercer columna\n");

            contiene = contieneValor(numeroGanador, columnaTres, 11);

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 8:
        {
            printf("Apuesta a Primera mitad\n");
            if (numeroGanador > 0 && numeroGanador <= 18)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 9:
        {
            printf("Apuesta a Segunda mitad\n");
            if (numeroGanador > 18 && numeroGanador <= 36)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 10:
        {
            printf("Apuesta a Color Rojo\n");

            apuestastotalesRojo++;

            contiene = contieneValor(numeroGanador, colorRojo, 17);

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 11:
        {
            printf("Apuesta a Color negro\n");

            contiene = contieneValor(numeroGanador, colorNegro, 17);
            apuestastotalesNegro++;

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 12:
        {
            printf("Apuesta a Par\n");

            contiene = contieneValor(numeroGanador, nrosPares, 17);

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        case 13:
        {
            printf("Apuesta a Impar\n");

            contiene = contieneValor(numeroGanador, nrosImpares, 17);

            if (contiene == 1)
            {

                int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                printf("Usted ha ganado!\n");
                printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);
                historialPago += casinoPaga;
                break;
            }

            else
            {

                int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                printf("Usted ha perdido!\n");
                printf("Perdidas de la mano, U$D: %d \n\n", casinoGana);
                historialGanancia += casinoGana;
                break;
            }
        }

        default:
            break;
        }
    }
}

int main()
{
    int tipoapuesta, cantfichas, valorfichas, numeroelegido;
    int option, cantidadRondas, contadorTotaldeApuestas = 0, bandera = 0, contadordeapuestas = 0;
    int apuesta[] = {0, 0, 0, 40};

    //apuesta es el array donde guardo temporalmente cada fila de la tabla
    int APUESTASTOTALES[10][4];
    //APUESTASTOTALES es TABLA de 10 filas y 4 columnas donde guardo una apuesta por fila
    printf("Hola\n");
    printf("Bienvenido a la Ruleta loca\n\n");

    while (1)
    {
        printf("Ingrese la cantidad de rondas (maximo 20): ");
        scanf("%d", &cantidadRondas);
        if (cantidadRondas > 0 && cantidadRondas < 21)
        {
            break;
        }
        printf("Ingrese un valor entre 1 y 20 (MAXIMO 20 RONDAS)\n");
    }

    printf("\n");
    printf("*Para seleccionar las opciones, ingrese el numero\nentre corchetes seguido de la tecla ENTER*\n\n");
    while (contadorderondas <= cantidadRondas) //while que cuenta las rondas
    {
        int ini1, ini2;
        //for para inicializar APUESTASTOTALES en cero
        for (ini1 = 0; ini1 < 10; ini1++)
        {
            for (ini2 = 0; ini2 < 4; ini2++)
            {
                APUESTASTOTALES[ini1][ini2] = 0;
            }
        }

        printf("RONDA NUMERO: %d / %d \n", contadorderondas, cantidadRondas);
        contadordeapuestas = 0;
        contadorderondas++;

        while (contadordeapuestas < 10)
        { //while que cuenta las apuestas de cada ronda

            bandera = 0;

            printf("\nQue desea hacer?\n");
            printf("[1]: Realizar una apuesta (%d / 10) \n", contadordeapuestas + 1);
            if (contadordeapuestas == 9)
            {
                //aviso de ultima apuesta
                printf("Ultima apuesta! :O\n");
            }

            printf("[2]: Girar\n");
            printf("[3]: Salir\n");

            while (1)
            {
                //(validation)chequeo q la opcion exista

                printf("Elija una opcion: ");
                scanf("%d", &option);

                if (option > 0 && option < 4)
                {
                    break;
                }

                printf("Ingrese un valor correcto! (entre 1 y 3)\n");
            }

            switch (option)
            {
            case 1:
            {
                realizarApuestas(&tipoapuesta, &cantfichas, &valorfichas, &numeroelegido);
                int aa;
                aa = contadordeapuestas; //aa=indice para ir guardando el la tabla
                contadordeapuestas++;
                contadorTotaldeApuestas++;

                APUESTASTOTALES[aa][0] = tipoapuesta;
                APUESTASTOTALES[aa][1] = valorfichas;
                APUESTASTOTALES[aa][2] = cantfichas;
                APUESTASTOTALES[aa][3] = numeroelegido;

                break;
            }

            case 2:
            {
                giraRuleta(APUESTASTOTALES);
                bandera = 1;
                break;
            }
            case 3:
            {
                printf("Gracias! Vuelva pronto.\n");   
                APUESTASTOTALES[aa][0] = tipoapuesta;
                APUESTASTOTALES[aa][1] = valorfichas;
                APUESTASTOTALES[aa][2] = cantfichas;
                APUESTASTOTALES[aa][3] = numeroelegido;
            default:
                break;
            }

            if (bandera == 1)
                break;
        }
        if (bandera == 0)
        {
            printf("Ya no puede realizar mas apuestas\nGirando ruleta\n\n");
            giraRuleta(APUESTASTOTALES);
        }
    }

    printf("======================\n");
    printf("DATOS FINALES: \n\n");
    //DATOS DEL FINAL (ITEMS)

    //promedio
    float promedio, aux1, aux2;
    aux1 = contadorTotaldeApuestas;
    aux2 = cantidadRondas;
    promedio = aux1 / aux2;

    if (historialGanancia > historialPago)
    {
        printf("Mesa ganadora!\n\n");
    }
    else if (historialGanancia < historialPago)
    {
        printf("Mesa en problemas!\n\n");
    }
    else
    {
        printf("Mesa no conforme!\n\n");
    }

    printf("El promedio de apuestas por ronda es: %.2f \n", promedio);

    printf("\n");

    //apuesta de mayor valor monetario
    printf("La apuesta de mayor valor fue de %dU$D,\ny se hizo en la ronda %d.\n", valormayorapuesta, rondamayorapuesta);

    printf("\n");

    //comparativa ROJOvsNEGRO
    float totalrojonegro, porcRojo, porcNegro;
    totalrojonegro = apuestastotalesNegro + apuestastotalesRojo;
    printf("Comparativa de porcentaje Rojo vs Negro:\n");
    if (totalrojonegro > 0)
    {
        if (apuestastotalesNegro > 0)
        {
            porcNegro = (apuestastotalesNegro / totalrojonegro) * 100;
            printf("El porcentaje de apuestas al Negro es %.2f%%\n", porcNegro);
        }
        else
            printf("No se ha apostado al negro\n");

        if (apuestastotalesRojo > 0)
        {
            porcRojo = (apuestastotalesRojo / totalrojonegro) * 100;
            printf("El porcentaje de apuestas Rojo es %.2f%%\n", porcRojo);
        }
        else
            printf("No se ha apostado al rojo\n");
    }
    else
    {
        printf("No se ha apostado nunca al rojo ni al negro. \n\n");
    }

    printf("\n");

    //si en mas de 5 rondas seguidas salio el mismo color
    printf("Cantidad de veces que salieron 5 numeros del mismo color seguidos:\n");
    printf(" Rojos: %d\n", banderaseguidosRojo);
    printf(" Negros: %d\n", banderaseguidosNegro);

    printf("\n");

    //si salio cero o multiplos de 10
    if (salioCero == 0)
        printf("El cero no salio ninguna vez.\n");
    else
        printf("Cantidad de veces que salio cero: %d \n", salioCero);

    if (saliomultiploDiez == 0)
        printf("No salieron multiplos de 10.\n");
    else
        printf("Cantidad de veces que salio un nro multiplo de 10: %d \n", saliomultiploDiez);

    printf("\n");

    //cantidad de nros ganadores primos
    if (cantidaddenroprimo > 0)
    {
        printf("La cantidad de numeros ganadores primos es: %d", cantidaddenroprimo);
    }
    else
    {
        printf("No hubo numeros primos ganadores.\n\n");
    }

    //dinero ganado/pagado por la mesa
    printf("Dinero ganado por la mesa: %d \n", historialGanancia);

    printf("Dinero pagado por la mesa: %d \n", historialPago);

    return 0;
}
