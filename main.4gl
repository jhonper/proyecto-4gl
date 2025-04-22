MAIN
    DEFINE nombre CHAR(30), edad INT

    OPEN FORM cliente FROM "cliente"
    DISPLAY FORM cliente

    INPUT BY NAME nombre, edad
        WITHOUT DEFAULTS
    END INPUT

    DISPLAY "Nombre ingresado: ", nombre
    DISPLAY "Edad ingresada : ", edad

END MAIN
