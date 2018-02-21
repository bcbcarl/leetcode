/**
 * Definition for a binary tree node.
 * @param {Number} val
 */
function TreeNode(val) {
  this.val = val;
  this.left = this.right = null;
}

/**
 * @param {TreeNode} root
 * @return {boolean}
 */
const isSymmetric = (root) => {
  if (!root) {
    return true;
  }
  return isMirror(root.left, root.right);
};

/**
 * @param {TreeNode} t1
 * @param {TreeNode} t2
 * @return {boolean}
 */
const isMirror = (t1, t2) => {
  if (!t1 && !t2) {
    return true;
  }

  if ((!t1 && t2) || (t1 && !t2) || (t1.val !== t2.val)) {
    return false;
  }

  return isMirror(t1.left, t2.right) && isMirror(t1.right, t2.left);
};

const main = () => {
  const t1 = new TreeNode(1);
  t1.left = new TreeNode(2);
  t1.right = new TreeNode(2);
  t1.left.left = new TreeNode(3);
  t1.left.right = new TreeNode(4);
  t1.right.left = new TreeNode(4);
  t1.right.right = new TreeNode(3);

  const t2 = new TreeNode(1);
  t2.left = new TreeNode(2);
  t2.right = new TreeNode(2);
  t2.left.left = null;
  t2.left.right = new TreeNode(3);
  t2.right.left = null;
  t2.right.right = new TreeNode(3);

  console.log('isSymmetric(t1):', isSymmetric(t1));
  console.log('isSymmetric(t2):', isSymmetric(t2));
};

main();
