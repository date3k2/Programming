let x = 5;
console.log(5);
class Human {
    constructor(name) {
        this.name = name;
    }
    sayName() {
        console.log(this.name);
    }
}
let person = new Human("John");
person.sayName();