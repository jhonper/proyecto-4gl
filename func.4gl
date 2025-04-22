GLOBALS 
	DEFINE  suma INT, n1 INT, n2 INT
END GLOBALS

MAIN
	LET n1 = 10
	LET n2 = 20
	--CALL sumar(1, 2) RETURNING suma
	CALL sumar(n1, n2) RETURNING suma
	DISPLAY "suma es: ", suma
END MAIN

--LET resultado = a + b -----**
FUNCTION sumar(a,b)
	DEFINE a INT, b INT
	RETURN a + b
END FUNCTION	
        

