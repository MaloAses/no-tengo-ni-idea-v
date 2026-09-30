do{
        printf("que quieres hacer del menu \n");
        printf("1.- hola mundo \n");
        printf("2.- adios mundo \n");
        printf("3.- salir \n");
        scanf("%d", &menu);
 
        switch(menu){
            case 1:
                suma();
                break;
            case 2:
                printf("adios mundo \n");
                break;
            case 3:
                printf("saliste del menu \n");
                break;
            default:
                printf("opcion no valida \n");
        }




         do{
            printf(" que quieres hacer? /n");
            printf("1. suma /n");
            printf("2. resta /n");
            printf("3. multiplicacion /n");
            printf("4. division /n");
            scanf("%d", &menu);
