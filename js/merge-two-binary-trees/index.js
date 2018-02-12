/**
 * Definition for a binary tree node.
 * @param {Number} val
 */
function TreeNode(val) {
  this.val = val;
  this.left = this.right = null;
}

/**
 * @param {TreeNode} t1
 * @param {TreeNode} t2
 * @return {TreeNode}
 */
const mergeTrees = (t1, t2) => {
  if (!t1 && !t2) {
    return null;
  }

  if (!t1) {
    return t2;
  }

  if (!t2) {
    return t1;
  }

  const t3 = new TreeNode(t1.val + t2.val);
  t3.left = mergeTrees(t1.left, t2.left);
  t3.right = mergeTrees(t1.right, t2.right);

  return t3;
};

const main = () => {
  const t1 = new TreeNode(1);
  t1.left = new TreeNode(3);
  t1.right = new TreeNode(2);
  t1.left.left = new TreeNode(5);

  const t2 = new TreeNode(2);
  t2.left = new TreeNode(1);
  t2.right = new TreeNode(3);
  t2.left.left = null;
  t2.left.right = new TreeNode(4);
  t2.right.left = null;
  t2.right.right = new TreeNode(7);

  const t3 = mergeTrees(t1, t2);
  console.log('t3:', t3);
};

main();
