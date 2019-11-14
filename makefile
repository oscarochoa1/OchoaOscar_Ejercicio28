grafica.png : grafica.py grafica.dat
	python grafica.py

grafica.dat: grafica.x
	./grafica.x > grafica.dat

grafica.x : k4.cpp
	c++ k4.cpp -o grafica.x
	
clean : 
	rm grafica.x grafica.dat grafica.png