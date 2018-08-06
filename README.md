# Adapter-Pattern-Practice
Form 01. Adapter
1. Create new interface for new demand
2. Create new class that conform to the new interface and privately inherit the old interface to access its implementation
3. Allocate one instance of Adapter to use new interface

Form 02. AdapterEx
1. Create new class that conform to the old interface, and inject the instance of old interface with its old implementation
2. Create new instance of new class instead
