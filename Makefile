CFLAGS = -std=c++17
LFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
RELNAME = Engine

BuildSource: src/*.cpp
	g++ $(CFLAGS) src/*.cpp -o ./release/$(RELNAME) $(LFLAGS)

run: BuildSource
	./release/$(RELNAME)

clean:
	rm -f BuildSource