/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
const numJewelsInStones = (J, S) =>
  Array
    .from(S)
    .filter((x) => J.includes(x))
    .length;

const main = () => {
  const J = 'aA';
  const S = 'aAAbbbb';
  const output = numJewelsInStones(J, S);
  console.log(output);
};

main();
