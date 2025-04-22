DEFINE given, product FLOAT, power INTEGER
MAIN
	PROMPT "Ingrese un numero decimal: " FOR given
	LET product = given
	DISPLAY "   Exponent     value"
	FOR power = 2 TO 4
		LET product = product * given
		DISPLAY power, product
	END FOR
	SLEEP 5
END MAIN
