/**
 * @param {string} s
 * @return {number}
 */
const firstUniqChar = (s) => {
  const map = new Map();
  Array.from(s).forEach((x) => {
    if (map.has(x)) {
      map.set(x, map.get(x) + 1);
    } else {
      map.set(x, 1);
    }
  });
  let i = 0;
  for (i = 0; i < s.length; ++i) {
    if (map.get(s[i]) === 1) {
      return i;
    }
  }
  return -1;
};

const main = () => {
  const inputs = ['leetcode', 'loveleetcode'];
  inputs.forEach((x) => console.log(
    `Input: ${x}, Output: ${firstUniqChar(x)}`
  ));
};

main();
