# Interface Segregation Principle
Interfaces shall not force classes to implement what they cannot do.

## WHY?
- Consumer modules get only the interfaces to the functions needed.
- Avoid changing modules that do not need the complete interface. An interface with unrelated functionality (low cohesion) can result in modules not implementing the full interface.
- Reduce code complexity by: less redundant and more robust code from not fully implemented interfaces.
- Less compilation time.
- Less mocking effort from smaller dependency interfaces.
- Less likely to break existing test cases from not having unrelated functionalities.


## HOW?
Using adapter pattern, where the ISP violating interface is wrapped around a fitting interface that includes only that functionality that will be used.

Use of small cohesive interfaces that fit to the necessities of the consumers.