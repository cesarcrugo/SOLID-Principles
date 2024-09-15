# Dependency Inversion Principle
Components should depend on abstractions, not concretions.

# WHY
- Modules are made adaptable to changes and reusable. As dependent on abstractions, the implementation behind that abstraction can be swapped with a different concretion.
- Reduce compilation time. High level modules that consumes interfaces does not need recompilation when the implementation behind the abstraction changes.
- Enabling mocking possibility. An interface implementation can be a test mock.
- Less likely to break existing tests. When mocking a interface, you can inject data for which you know the output (test case); if tests does not rely on the actual implementation, swapping it would not require re-testing and test fixing.

# HOW
Abstraction is one of the needs to accomplish Dependency Inversion Principle. An abstraction is a contract that cannot be instantiated, but implemented in concretion classes.

Dependency injection and inheritance ensure that abstractions are bounded to high and low level modules.