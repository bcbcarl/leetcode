/**
 * @param {number} num
 * @return {number}
 */
const findComplement = (num) => {
  let mask = ~0;
  while (num & mask) {
    mask <<= 1;
  }
  return ~(num | mask);
};

const main = () => {
  const inputs = [5, 1];
  inputs.forEach((x) => console.log(
    `Input: ${x}, Output: ${findComplement(x)}`
  ));
};

main();
