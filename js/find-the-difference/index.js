/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
const findTheDifference = (s, t) => {
  if (s.length !== t.length - 1) {
    return '';
  }

  const s1 = Array.from(s).sort();
  const t1 = Array.from(t).sort();

  let i = 0;
  for (i = 0; i < s1.length; ++i) {
    if (s1[i] !== t1[i]) {
      break;
    }
  }
  return t1[i];
};

const main = () => {
  const s = 'abcd';
  const t = 'abcde';
  const output = findTheDifference(s, t);
  console.log(output);
};

main();
