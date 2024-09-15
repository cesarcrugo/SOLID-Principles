# Liskov Substitution Principle
If S is a subtype of T, then objects of type T may be replaced with objects of type S, without breaking the program (Barbara Liskov).

Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it.

## WHY?
- Less likely to break existing code, as consumers of a base type expect that each subtype behaves as constrained by the "contract" of the case class.
- If base contract is enforced, consumer clients will not need modifications when adding new derived classes.
- When not enforcing base class contract, a solution is to create new base classes or reorganize inheritance structure,such that use of correct inheritance create better reusable code. 

## HOW?
Contravariance of method arguments in the subtype, which means that the variance must be contrary to the direction of the inheritance. --> NOT SUPPORTED BY C++

Covariance in return types, which means that the variance must be to the same direction of the inheritance.

Pre-conditions must not be strengthen in a subtype. A pre-condition is a predicate that must be true in order to execute certain functionality.

Post-conditions must not be weakened in a subtype. A post-condition is a predicate that must always be true after the execution of a functionality.

Invariants must keep the same in a subtype. An invariant is a predicate that must remain true during the lifetime of an object.

Functionalities added in subtypes must not allow state changes that are not allowed in the base class. This is called History Rule (this seems redundant with invariant rule).

Derived classes should not through exceptions that the base class does not throw, unless the exception is derived from the base class exception.

