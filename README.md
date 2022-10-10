# design-patterns
Towards learning [design patterns](https://en.wikipedia.org/wiki/Design_Patterns). 

```
+ Creational
+ Structural
+ Behavioral
```

## Structural

```
+ Creational
- Structural
  - Adapter
  - Bridge
  - Composite
  - Decorator
  - Facade
  - Flyweight
  - Proxy
+ Behavioral
```

### Facade
 
![facade uml](https://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.githubusercontent.com/ghasimi/design-patterns/main/uml/facade.txt)

### Adapter

![adapter uml](https://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.githubusercontent.com/ghasimi/design-patterns/main/uml/adapter.txt)

### Bridge

Brdige pattern decouples an _abstraction_ from its _implementation_ so that the two can vary independently, ~Wikipedia. In the C++ code, Display is the _abstraction_ class with an interface to draw shapes, using a pointer to the _implementater_ class, Shape. The Shape class is itself only defines the interface that is utilized by the _concrete implementors_ shapes, Circle and Rectangle. This is how the decouling happens, as we can modify the shapes or add new shapes independent of of the Display, as long as we use the same base interface provided by Shape class, which is known to the Display.  

![adapter uml](https://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.githubusercontent.com/ghasimi/design-patterns/main/uml/bridge.txt)

[Bridge pattern example in C++](https://github.com/ghasimi/design-patterns/blob/bridge/cpp/bridge.cpp)
  

