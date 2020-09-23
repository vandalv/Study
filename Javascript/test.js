// 70. Coding Challenge

let playerAnswer;
let totalScore = 0;

function Questions(question, answers, correctAnswer) {
  this.question = question;
  this.answers = answers;
  this.correctAnswer = correctAnswer;
}

const one = new Questions(
  'What is the most common colour of toilet paper in France?',
  ['White', 'Pink', 'Blue'],
  2,
);

const two = new Questions(
  'The average person does what thirteen times a day?',
  ['Laughs', 'Smiles', 'Cries'],
  1,
);

const three = new Questions(
  'What is Scooby Doo’s full name?',
  ['Doobert Scoob', 'Snoop Dog', 'Scoobert Doo'],
  3,
);

const four = new Questions(
  'Which country has the most tornadoes by area?',
  ['United Kingdom', 'USA', 'Kazakhstan'],
  1,
);

const five = new Questions(
  'Johnny Depp is famously afraid of what?',
  ['Spiders', 'Clowns', 'Rats'],
  2,
);

Questions.prototype.qToConsole = function qToConsole() {
  console.log(this.question);
  for (let i = 0; i < this.answers.length; i++) {
    console.log(`${i + 1}) ${this.answers[i]}`);
  }
};

const qBase = [one, two, three, four, five];
let randomElement = qBase[Math.floor(Math.random() * qBase.length)];

Questions.prototype.qToConsole = function qToConsole() {
  console.log(this.question);
  for (let i = 0; i < this.answers.length; i++) {
    console.log(`${i + 1}) ${this.answers[i]}`);
  }
};

Questions.prototype.answerCheck = function answerCheck() {
  // eslint-disable-next-line eqeqeq
  if (playerAnswer == this.correctAnswer) {
    totalScore += 1;
    console.log('Brilliant!');
    console.log(`Your overall score is - ${totalScore}`);
    console.log('-----------------------------------');
  } else if (playerAnswer === 'exit') {
    console.log('-----------------------------------');
    console.log('Thank you for game!');
    console.log(`Your final score is - ${totalScore}`);
  } else {
    console.log('Wrong!');
    console.log(`Your overall score is - ${totalScore}`);
    console.log('-----------------------------------');
  }
};

while (playerAnswer !== 'exit') {
  randomElement = qBase[Math.floor(Math.random() * qBase.length)];
  randomElement.qToConsole();
  playerAnswer = prompt('Please enter your answer');
  randomElement.answerCheck();
}
