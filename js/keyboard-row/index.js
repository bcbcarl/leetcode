/**
 * @param {string[]} words
 * @return {string[]}
 */
const findWords = (words) =>
  words.filter((word) => {
  const rowSets = [
    new Set(Array.from('qwertyuiop')),
    new Set(Array.from('asdfghjkl')),
    new Set(Array.from('zxcvbnm'))
  ];

  const isSubset = (s1, s2) =>
    Array.from(s1).every(elem => s2.has(elem));

  for (const rowSet of rowSets) {
    const wordSet = new Set(Array.from(word.trim().toLowerCase()));
    if(isSubset(wordSet, rowSet)) {
      return true;
    }
  }
  return false;
});

const main = () => {
  const words = ['Hello', 'Alaska', 'Dad', 'Peace'];
  const output = findWords(words);
  console.log(output);
};

main();
