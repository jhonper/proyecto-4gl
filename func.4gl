GLOBALS 
	DEFINE  suma INT
END GLOBALS

MAIN
	CALL sumar(1, 2) RETURNING suma
	DISPLAY "suma: ", suma
END MAIN

--LET resultado = a + b -----**
FUNCTION sumar(a,b)
	DEFINE a INT, b INT
	RETURN a + b
END FUNCTION	
        

