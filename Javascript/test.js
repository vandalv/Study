// Function Constructor

function Person(name, yearOfBirth, job) {
  this.name = name;
  this.yearOfBirth = yearOfBirth;
  this.job = job;
}

Person.prototype.calculateAge = function () {
  console.log(2020 - this.yearOfBirth);
};

Person.prototype.lastname = 'Smith';

const john = new Person('John', 1990, 'teacher');
const mark = new Person('Mark', 1946, 'designer');
const jane = new Person('Jane', 1910, 'retired');

john.calculateAge();
mark.calculateAge();
jane.calculateAge();

console.log(john);
