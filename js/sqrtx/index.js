/**
 * @param {number} x
 * @return {number}
 */
const mySqrt = (x) => {
  if (x < 0) {
    throw new RangeError('X should not be smaller than 0.');
  }
  if (x === 0) {
    return 0;
  }
  const n = 20;
  return parseInt(x_n(x, n));
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
  const x = 612;
  const result = mySqrt(x);
  console.log(result);
};

main();
