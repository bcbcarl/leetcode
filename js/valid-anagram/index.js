/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
const isAnagram = (s, t) => {
  const ss = s.split('').sort().join('');
  const st = t.split('').sort().join('');
  return ss == st;
};

const main = () => {
  printResult('anagram', 'nagaram');
  printResult('rat', 'car');
};

const printResult = (s, t) => {
  console.log(`s = "${s}", t = "${t}", return ${isAnagram(s, t)}`);
};

main();
