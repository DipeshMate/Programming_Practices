import java.util.*;

class TreeNode {
    int val;
    TreeNode left, right;

    TreeNode(int x) {
        val = x;
        left = null;
        right = null;
    }
}
public class kleveldown {

    public static TreeNode buildTree(Integer[] nums) {
        if (nums == null || nums.length == 0) {
            return null;
        }
        TreeNode root = new TreeNode(nums[0]);
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        int i = 1;
        while (i < nums.length) {
            TreeNode curr = q.remove();
            if (i < nums.length) {
                curr.left = new TreeNode(nums[i++]);
                q.add(curr.left);
            }
            if (i < nums.length) {
                curr.right = new TreeNode(nums[i++]);
                q.add(curr.right);
            }
        }
        return root;
    }
    public static void printTree(TreeNode root) {
        if (root == null) {
            return;
        }
        printTree(root.left);
        System.out.print(root.val + " ");
        printTree(root.right);
    }
    public static void main(String[] args) {
        Integer []nums = {2,7,2,6,5,11,5,9,4};
        TreeNode root = buildTree(nums);
        printTree(root);

    }

    // static TreeNode kleveldown(TreeNode root){

    //     return root;
    // }

}
