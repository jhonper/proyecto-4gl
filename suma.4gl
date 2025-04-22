MAIN 
  DEFINE a, b, suma INTEGER
  
  OPEN FORM f_suma FROM "suma.per"
  DISPLAY FORM f_suma
  
  INPUT BY NAME a, b
      
  LET suma = a + b

  DISPLAY "la suma es: ", suma

END MAIN

# MAIN
  # DEFINE a, b, suma INTEGER

  # DISPLAY "Ingrese el primer número: "
  # INPUT BY NAME a
  # ACCEPT a

  # DISPLAY "Ingrese el segundo número: "
  # INPUT BY NAME b
  # ACCEPT b

  # LET suma = a + b
  # DISPLAY "La suma es: ", suma

# END MAIN
