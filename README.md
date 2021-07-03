# Vehicle-Factory
Factory of vehicles written in cpp. Simple learning of basics of the language.
# Descriptions of:
# Part 1
There should be 3 possible types of vehicles: cars, motocycles, trucks.
Implementing a Vehicle class. It contains 5 variables: 
1.Serial name in size of 5 (any character).
2.Integer price for a vehicle.
3.Double cost of production (in thousends).
4.Bool value if vehicle is done.
5.Character representing type of vehicle.
Implementing a constructor. For price, production cost and done variables there are set some default values. There are methods IfCheaper and Balance. 
For the type variable: 
1.c is car
2.t is truck
3.m is motocycle
# Part 2
Implementing a default constructor. Wrote a method ‘finished’ which sets done to true. Implementing operators for vehicle class:
1.>> 
2.<<
3.==
4.=
# Part 3
Creating a factory class. Inside factory there can be up to 10 vehicles. From the factory class the vehicle’s inside is available. Factory class has a IDvariable and current vehicles counter. Creating a default constructor. Creating a method ‘IsFull’ checking whether the factory is full. Implementing a method AddVehiclewhich adds a vehicle to a factory. Implementing 2 methods: TruckCount() and MotoCount() which returns count of these types of vehicles in a factory. Wrote a function CarsCount(&f) which returns a number of cars in factory and takes a factory as a parameter.
# Part 4
Implementing a method DeleteVehicle(&v) which deletes a specified vehicle from a factory.  Implementing operators for Factory class:
1.>> 
2.<< 
3.< 
4.>
Operators < and > tells if the factory has smaller or larger amount of vehicles inside. 
