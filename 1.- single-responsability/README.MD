# Single Responsibility Principle
A code module shall have one and only one single responsibility, and not be filled with excessive functionality.

## WHY?
- Less likely of regressions on unrelated code (avoid breaking non-impacted code).
- Less code complexity
- Easily identify what the effect of modifying a code module.
- Less merge conflicts in version control tools.
- Less compilation time.
- Single-responsibility modules are more reusable.
- More testable.
- Easier to identify normal, edge and corner cases.


## HOW?
Modules with tight cohesion, where the internals of a module contain highly related functionality, and thus, as single reason to change.

Modules with loose coupling. Separate modules has unrelated functionality, and thus different reasons to change. 
Two tightly coupled modules with likely need to be changed simultaneously.

Encapsulated functionality where a module does not expose its internals, and has a well defined interface to interact with other modules.