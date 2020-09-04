let scores;
let roundScore;
let activePlayer;
scores = [0, 0];
roundScore = 0;
activePlayer = 1;
const dice = Math.floor(Math.random() * 6) + 1;
console.log(dice);

// ! DOM text change from selecting element by ID

document.querySelector(`#current-${activePlayer}`).textContent = dice;
// document.querySelector('#current-' + activePlayer).innerHTML = dice;

// ! DOM get value

const x = document.querySelector('#score-0').textContent;
console.log(x);

// ! CSS change

document.querySelector('.dice').style.display = 'none';

console.log(x);
console.log(x);
console.log(x);
