/**
 * @param {number} num
 * @return {number[]}
 */
const countBits = (num) =>
  [...Array(++num).keys()].map((value) =>
    value
      .toString(2)
      .split('')
      .filter(x => x === '1')
      .length
  );

const main = () => {
  const num = 5;
  const output = countBits(num);
  console.log(output);
};

main();
