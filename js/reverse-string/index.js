/**
 * @param {string} s
 * @return {string}
 */
const reverseString = (s) => {
  let s_arr = s.split('');
  let result = '';

  while (s_arr.length) {
    result += s_arr.pop();
  }

  return result;
};

const main = () => {
  const s = 'hello';
  const result = reverseString(s);
  console.log(result);
};

main();
