// This is my first JavaScript code
// console.log('Hello World');

// Variable
// Cannot be a reserved keyword
// Should be meaningful
// Cannot start with a number (1name)
// Cannot contain a space or hyphen (-)
// Are case-sensitive

let firstName = 'Save', lastName = 'Waris';
let firstName = 'Save';
let lastName = 'Waris';

let name = 'Save';
console.log(name);


let let_interestRate = 0.3;
let_interestRate = 1;
console.log(let_interestRate);

const const_interestRate = 0.3;
const_interestRate = 1;
console.log(const_interestRate);


let name = 'Save'; // String Literal
let age = 23; // Number Literal
let isApproved = false; // Boolean Literal
let firstName = undefined;
let lastName = null;
let selectedColor = null; // -> 'red', 'blue', 'green'

// typeof name
// 'string'
// name = 1;
// 1
// typeof name
// 'number'

// typeof age
// 'number'
// age = 23.7
// 23.7
// typeof age
// 'number'

// typeof isApproved
// 'boolean'
// typeof firstName
// 'undefined'

// typeof selectedColor
// 'object'

// Objects

// let name = 'Save';
// let age = 23;
let person = {
    name: 'Save',
    age: 23
};

// Dot Notation
person.name = 'John'; 

// Bracket Notation
let selection = 'name';
person[selection] = 'Mary';

console.log(person.name);

// Arrays
let selectedColors = ['red', 'blue'];
selectedColors[2] = 1;
console.log(selectedColors.length);
 
// typeof selectedColors
// 'object'

// Functions
// Performing a task
function greet(name, lastName) {
    console.log('Hello ' + name + ' ' + lastName);
}

greet('Save', 'Waris');

// Type Function
// Calculating a value
function square(number) {
    return number * number;
}

let number = square(2); 
console.log(number);