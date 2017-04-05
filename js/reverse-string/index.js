/**
 * @param {string} s
 * @return {string}
 */
const reverseString = (s) => {
  return s.split('').reverse().join('');
};

const main = () => {
  const s = 'hello';
  const result = reverseString(s);
  console.log(result);
};

main();
