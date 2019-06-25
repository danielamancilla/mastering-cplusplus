#include <iostream>

class GenericGreeter {
public:
    virtual void Greet(const char *name) { std::cout << "Hi " << name << std::endl; }
};

class SpanishGreeter : public GenericGreeter {
public:
    virtual void Greet(const char *name) { std::cout << "Hola " << name << std::endl; }
};

class FrenchGreeter : public GenericGreeter {
public:
    void Greet(const char *name) { std::cout << "Bonjour " << name << std::endl; }
};

int main() {
    GenericGreeter *g = new GenericGreeter;
    SpanishGreeter *s = (SpanishGreeter *)g;
    FrenchGreeter *f = (FrenchGreeter *)g;

    g->Greet("Daniela");
    s->Greet("Camila");
    f->Greet("Juanita");

    delete g;

    return 0;
}
