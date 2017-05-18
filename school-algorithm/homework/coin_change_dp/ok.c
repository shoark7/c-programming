
    scanf("%d", &size);
    getchar(); // because of using scanf and fgets together.

    // Size validation
    if(size > 1) printf("\nEnter d0 d1 ... d%d : \n", size);
    else if(size == 1) printf("\n Enter do d1\n");
    else {
        printf("Size must be equal to or greater than 0");
        exit(0); }

    fgets(parse_me, 1000, stdin);
    parse_me[strlen(parse_me)-1] = '\0';
    // Changing last value from \n to \0 to indicate the end of the string.

    token = strtok(parse_me, delim);
    dims[index++] = strtol(token, &temp_str, 10);

    // Parsing the string and making it to integer and put in ther list.
    while(1) {
        token = strtok(NULL, delim);
        if(token == NULL) break;
        value = strtol(token, &temp_str, 10);
        dims[index++] = value;
    }
