PROJECT_NAME = complex_calcy.exe

DO_IT =  src/Sum.c src/Difference.c src/Product.c src/Divide.c

INC = unity/unity.c

TEST = unity/unity.c

$(PROJECT_NAME) : $(SRC) $(TEST)
	gcc  Test_cases.c -I -c $(INC) -I -c $(DO_IT)  -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	$(PROJECT_NAME)

clean:
	del /q *.exe