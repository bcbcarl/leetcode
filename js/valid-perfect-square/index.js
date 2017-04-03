/**
 * @param {number} num
 * @return {boolean}
 */
const isPerfectSquare = (num) => {
  if (num < 0) {
    throw new RangeError('NUM should not be smaller than 0.');
  }
  if (num === 0) {
    return 0;
  }
  const n = 20;
  const sqrt_x = parseInt(x_n(num, n));
  return (sqrt_x * sqrt_x === num);
};

const x_n = (x_square, n) => {
  if (n < 0) {
    throw new RangeError('N should not be smaller than 0.');
  }
  if (n === 0) {
    return x_square / 2;
  }
  const x_prev = x_n(x_square, n - 1);
  return x_prev - f(x_prev, x_square) / d_f(x_prev);
};

const f = (x, x_square) => x * x - x_square;
const d_f = (x) => 2 * x;

const main = () => {
  printResult(16);
  console.log('---');
  printResult(14);
};

const printResult = (num) => {
  const result = isPerfectSquare(num) ? 'True' : 'False';
  console.log(`Input: ${num}`);
  console.log(`Returns: ${result}`);
};

main();
