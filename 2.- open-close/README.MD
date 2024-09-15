# Single Responsibility Principle
Software modules should be closed for extension, but closed for modification. Existing modules stay as implemented, but functionality can be extended by adding new modules.

## WHY?
- Less system knowledge is required to change a single module.
- New modules implies that existing modules cannot be broke.
- Less compilation time.
- Less likely to break existing test cases as existing modules are not modified.


## HOW?
Templates that allow to extend the functionality of a module with new types, and leave existing unchanged.

Dependency injection implies that different implementations of the same interface can be provided to a functionality.

Polymorphism where a base implementation can be overridden. While related, note that stand-alone inheritance makes base implementation tightly coupled with derived ones.

