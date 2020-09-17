// Function Constructor

const Person = () => (name, yearOfBirth, job) {
  this.name = name;
  this.yearOfBirth = yearOfBirth;
  this.job = job;
  this.calculateAge = () => {
    console.log(2020 - yearOfBirth);
  };
};

let john = new Person('John', 1990, 'teacher');
