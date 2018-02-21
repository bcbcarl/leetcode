/**
 * Definition for a binary tree node.
 * @param {Number} val
 */
function TreeNode(val) {
  this.val = val;
  this.left = this.right = null;
}

/**
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {boolean}
 */
const isSameTree = (p, q) => {
  if (!p && !q) {
    return true;
  }

  if ((!p && q) || (p && !q) || (p.val !== q.val)) {
    return false;
  }

  return isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
};

const testExample1 = () => {
  const p = new TreeNode(1);
  p.left = new TreeNode(2);
  p.right = new TreeNode(3);

  const q = new TreeNode(1);
  q.left = new TreeNode(2);
  q.right = new TreeNode(3);

  const ex1 = [p, q];
  console.log('isSameTree.apply(ex1):', isSameTree.apply(ex1));
};

const testExample2 = () => {
  const p = new TreeNode(1);
  p.left = new TreeNode(2);
  p.right = null;

  const q = new TreeNode(1);
  q.left = null;
  q.right = new TreeNode(2);

  const ex2 = [p, q];
  console.log('isSameTree.apply(ex2):', isSameTree.apply(ex2));
};

const testExample3 = () => {
  const p = new TreeNode(1);
  p.left = new TreeNode(2);
  p.right = new TreeNode(1);

  const q = new TreeNode(1);
  q.left = new TreeNode(1);
  q.right = new TreeNode(2);

  const ex3 = [p, q];
  console.log('isSameTree.apply(ex3):', isSameTree.apply(ex3));
};

const main = () => {
  testExample1();
  testExample2();
  testExample3();
};

main();
