bin/Simpson1l3.exe : src/main.cpp include/clase.hpp
	@echo compilando codigo fuente
	g++ -o bin/Simpson1l3 src/main.cpp -Iinclude

run : bin/Simpson1l3.exe
	./bin/Simpson1l3.exe 