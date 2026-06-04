# JavaScript Basics: My First Code

This repository contains a beginner-friendly `index.js` file demonstrating fundamental JavaScript concepts. Below is a summary of the topics covered in the code.

## 1. Variables (`let`)
- Variables are declared using the `let` keyword.
- **Naming Rules:**
  - Cannot be a reserved keyword.
  - Should be meaningful.
  - Cannot start with a number (e.g., `1name` is invalid).
  - Cannot contain a space or hyphen (`-`).
  - Are case-sensitive.

## 2. Constants (`const`)
- Constants are declared using the `const` keyword.
- Unlike `let`, the value of a `const` variable cannot be reassigned after initialization. Attempting to do so (as shown in the code) will cause an error.

## 3. Primitive Data Types
JavaScript features dynamic typing, meaning the type of a variable can change at runtime. The file covers the following primitives:
- **String:** Text literals (e.g., `'Save'`).
- **Number:** Numeric values, both integers and floats (e.g., `23`, `23.7`).
- **Boolean:** Logical values (`true` or `false`).
- **Undefined:** A variable that has been declared but has not yet been assigned a value.
- **Null:** An explicit empty or non-existent value (note: `typeof null` evaluates to `'object'`).

## 4. Reference Types

### Objects
- Collections of related key-value pairs.
- Properties can be accessed and modified in two ways:
  1. **Dot Notation:** `person.name = 'John';` (Concise and most common).
  2. **Bracket Notation:** `person['name'] = 'Mary';` (Useful when the property name is dynamic or determined at runtime).

### Arrays
- Used to store lists of items.
- In JavaScript, arrays are dynamic and can hold mixed data types (e.g., strings and numbers in the same array).
- You can access or modify elements via their zero-based index.
- The `.length` property returns the number of items in the array.
- The `typeof` an array evaluates to `'object'`.

## 5. Functions
Functions are blocks of code designed to perform a particular task. The code demonstrates two main types:
- **Performing a task:** Functions that execute statements but don't explicitly return a value (e.g., a `greet` function that logs a greeting to the console).
- **Calculating a value:** Functions that evaluate parameters and use the `return` keyword to output a computed result (e.g., a `square` function that multiplies a number by itself).