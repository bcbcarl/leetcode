/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
const hammingDistance = (x, y) =>
  (x ^ y)
    .toString(2)
    .split('')
    .filter(x => x === '1')
    .length;

const main = () => {
  const x = 1;
  const y = 4;
  const output = hammingDistance(x, y);
  console.log(output);
};

main();
