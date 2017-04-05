/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
const twoSum = (nums, target) => {
  let indices = [];
  for (let i = 0; i < nums.length; ++i) {
    for (let j = i + 1; j < nums.length; ++j) {
      if ((nums[i] + nums[j]) === target) {
        indices = [i, j];
        break;
      }
    }
    if (indices.length === 2) {
      break;
    }
  }
  return indices;
};

const main = () => {
  const nums = [2, 7, 11, 15];
  const target = 9;
  const result = twoSum(nums, target);
  console.log(result);
};

main();
