# Classes-In-cpp
# Experiment 11 - Volume of a Cube using C++ Classes and Objects

**Name:** Varnika Maurya  
**PRN:** 24070123160  
**Tool Used** VS Code 
**Experiment No.:** 11  

##  Theory

This experiment focuses on implementing **C++ classes** to calculate the **volume of a cube** (or cuboid) using different approaches. The programs demonstrate:

- Use of **public and private access specifiers**
- **Data encapsulation**
- Use of **member functions**
- Taking **user input**
- Concept of **object-oriented programming**

---

##  Algorithm

###  Program 1 - Basic Volume Calculation Using Public Members

1. Create a `cube` class with public data members.
2. Initialize the values directly inside the class.
3. In `main()`, create an object of the class.
4. Calculate volume using the object's members.
5. Display the result.

---

###  Program 2: Repetition of Program 1 for Practice

1. Repeat the exact same steps as Program 1.
2. Purpose: Reinforce the concept of accessing public members.

---

###  Program 3: Using Private Members and a Volume Member Function

1. Define a class `cube` with private data members: `height`, `width`, and `length`, initialized to constant values.
2. Define a public member function `volume()` that:
   - Multiplies the three private members.
   - Returns the computed volume.
3. In the `main()` function:
   - Create an object `cube1`.
   - Call `cube1.volume()` and store the result.
   - Display the volume using `cout`.

---

###  Program 4: Taking User Input and Displaying Volume

1. Define a class `cube` with public data members: `height`, `width`, and `length`.
2. Create a public member function `input()` to:
   - Prompt and read values for height, width, and length using `cin`.
3. Create a member function `volume()` to:
   - Compute and return the volume.
4. Create a member function `disp()` to:
   - Call `volume()` and display the result.
5. In the `main()` function:
   - Create an object `cube1`.
   - Call `input()` to get user values.
   - Call `disp()` to show the calculated volume.

---

##  Conclusion

Through this experiment, the following concepts were understood and applied:

- Declaring and defining **classes and objects** in C++
- Using **access specifiers** (`public`, `private`)
- Implementing **member functions**
- Handling **user input/output**
- Understanding and applying **encapsulation**

This experiment enhances object-oriented thinking and forms a strong base for creating modular and reusable code.
