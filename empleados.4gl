MAIN
	# DEFINE empleado RECORD
	DEFINE TYPE empleado RECORD
        	id_empleado INT,
	        nombre STRING,
	        departamento STRING,
		salario DECIMAL
	END RECORD

	DEFINE lista_empleado DYNAMIC ARRAY OF empleado
	DEFINE opcion INT
	DEFINE id_empleados INT
	DEFINE nombre STRING
	DEFINE departamento STRING
	DEFINE salario DECIMAL
	DEFINE indice INT
	DEFINE encontrado INT

	LET opcion = 0
	
	DISPLAY "Bienvenido "
	DISPLAY "--------------------------"
	
	WHILE opcion != 4
		DISPLAY "MENU de opciones: "
		DISPLAY "1. Ver empleados"
