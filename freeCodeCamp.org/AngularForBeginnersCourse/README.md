# 🅰️ Angular for Beginners Course (freeCodeCamp.org)

Welcome to my personal learning repository for mastering Angular and TypeScript! This directory tracks my progress as I follow the **[Angular for Beginners Course [Full Front End Tutorial with TypeScript]](https://www.youtube.com/watch?v=3qBXWUpoPHo&t=1918s)** on YouTube.

---

## 📊 Progress Dashboard

- **Current Status**: Learning TypeScript Basics 📝
- **Topics Covered**: TypeScript Syntax & Types

---

## 🗂️ Repository Structure

All learning code is organized under the following directories:

### ⚙️ TypeScript Fundamentals ([TypescriptDemo](file:///d:/save/coding/learning/freeCodeCamp.org/AngularForBeginnersCourse/TypescriptDemo))
- 📄 `datatypes.ts` - TypeScript demonstration of static type checking (e.g., trying to reassign a number to a string variable causes a type check error).
- 📄 `test.js` - JavaScript code showing dynamic type reassignment (no compile-time warnings).
- 📄 `tsconfig.json` - Compiler configuration for translating TypeScript code to JavaScript.
- 📄 `package.json` - Project configuration and dependencies (TypeScript compiler).

---

## 💡 Notes and Key Concepts Learned

### 1. Static vs. Dynamic Typing
- **JavaScript (Dynamic)**: Types are associated with values, not variables. A variable can hold any datatype and can be reassigned freely at runtime:
  ```javascript
  let fname = 'test';
  fname = 10; // Perfectly valid in JS
  ```
- **TypeScript (Static)**: Types are bound to variables. If you initialize a variable to a string, TypeScript infers its type as `string` and prevents reassignment to a different type, catching potential bugs during compilation:
  ```typescript
  let lname = 'Save';
  // lname = 10; // Error: Type 'number' is not assignable to type 'string'.
  ```

---

## 🛠️ Setup & Compilation

To compile TypeScript files in this demo:
1. Navigate to the project directory:
   ```bash
   cd TypescriptDemo
   ```
2. Compile a specific TypeScript file to JavaScript:
   ```bash
   npx tsc datatypes.ts
   ```